#include <iostream>
#include <fstream>
#include "Login.h"

User User::load(ifstream& in) {
	User user;
	in >> user.username >> user.password >> user.isAdmin;
	return user;
}

void User::save(ofstream& out) const {
	out << username << " " << password << " " << isAdmin << endl;
}

vector<User> loadUsers(string& filename) {
	vector<User> users;
	ifstream file(filename);
	while (!file.eof()) {
		User user = User::load(file);
		users.push_back(user);
	}
	file.close();
	return users;
}

bool login(const vector<User>& users, const string& username, const string& password) {
	for (const User& user : users) {
		if (user.username == username && user.password == password) {
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

void addUser(vector<User>& users, const string& username, const string& password, bool isAdmin) {
	users.push_back(User{ username, password, isAdmin });
	cout << "User " << username << " added.\n";
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
	vector<User> users = loadUsers(filename);

	int choice;
	do {
		cout << "\nMenu:\n1. Login\n2. Add User\n 3.Save and exit\nEnter choice: ";
		cin >> choice;

		if (choice == 1) {
			string username, password;
			cout << "Enter login: ";
			cin >> username;
			cout << "Enter password: ";
			cin >> password;

			login(users, username, password);
		}
		else if (choice == 2) {
			string username, password;
			bool isAdmin;
			cout << "Enter new login: ";
			cin >> username;
			cout << "Enter new password: ";
			cin >> password;
			cout << "Admin(1, 0): ";
			cin >> isAdmin;

			addUser(users, username, password, isAdmin);
			saveUsers(filename, users);
		}
		else if (choice == 3) {
			exit(0);
		}

	} while (choice != 3);
}
