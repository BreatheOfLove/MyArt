#include <iostream>
#include <fstream>
#include <windows.h>
#include "Login.h"

User User::load(ifstream& in) {
	User user;
	in >> user.username >> user.hashPass >> user.isAdmin;
	return user;
}

void User::save(ofstream& out) const {
	out << username << " " << hashPass << " " << isAdmin << endl;
}

vector<User> loadUsers(const string& filename) {
	vector<User> users;
	ifstream file(filename);
	if (!file.is_open()) {
		cerr << "Не удалось открыть файл: " << filename << endl;
		return users;
	}
	while (true) {
		User user = User::load(file);
		if (file.fail()) {
			break;
		}
		users.push_back(user);
	}
	file.close();
	return users;
}

bool login(const vector<User>& users, const string& username, hash <string>& hashPass) {
	for (const User& user : users) {
		if (user.username == username && user.hashPass == hashPass) {
			if (user.isAdmin) {
				cout << "Hello admin" << endl;
			}
			else {
				cout << "Hello user" << endl;
			}
			return true;
		}
	}
	cout << "No user found" << endl;
	return false;
}

void addUser(vector<User>& users, const string& username, hash <string>& hashPass, bool isAdmin) {
	users.push_back(User{username, hashPass, isAdmin});
	if (isAdmin) {
		cout << "Admin " << username << " added.\n";
	}
	else {
		cout << "User " << username << " added.\n";
	}
}

void saveUsers(const string& filename, const vector<User>& users) {
	ofstream file(filename);
	for (const User& user : users) {
		user.save(file);
	}
	file.close();
}

void _main_()
{
	string filename = "users.txt";
	vector <User> users = loadUsers(filename);

	int choice;
	do {
		cout << "Меню:\n1. Login\n2. Add User\n3. Save and exit\nEnter choice: ";
		cin >> choice;

		if (choice == 1) {
			string username, password;
			hash <string> hashPass;

			cout << "Enter login: ";
			cin >> username;
			cout << "Enter password: ";
			cin >> password;
			 
			hashPass(password);

			login(users, username, hashPass);
		}
		else if (choice == 2) {
			string username, password;
			hash <string> hashPass;
			bool isAdmin;

			cout << "Enter new login: ";
			cin >> username;
			cout << "Enter new password: ";
			cin >> password;
			cout << "Admin(1, 0): ";
			cin >> isAdmin;

			hashPass(password);

			addUser(users, username, hashPass, isAdmin);
			saveUsers(filename, users);
		}
		else if (choice == 3) {
			return;
		}

	} while (choice != 3);
}
