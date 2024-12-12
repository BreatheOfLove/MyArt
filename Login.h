#pragma once
#include <string> 
#include <vector> 
using namespace std;

struct User {
    string username;
    string password;
    bool isAdmin;

    static User load(ifstream& in);
    void save(ofstream& out) const;
};

vector<User> loadUsers(const string& filename);
bool login(const vector<User>& users, const string& username, const string& password);
void addUser(vector<User>& users, const string& username, const string& password, bool isAdmin);
void saveUsers(const string& filename, const vector<User>& users);
void _main_();
