#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Menu.h"
using namespace std;

struct User {
	string username;
	string password;
	bool isAdmin;

	static User load(ifstream& in);

	void save(ofstream& out) const;

};

vector<User> loadUsers(string& filename);
bool login(const vector<User>& users, const string& username, const string& password);
void addUser(vector<User>& users, const string& username, const string& password, bool isAdmin);
void saveUsers(const string& filename, const vector<User>& users);
void Login();