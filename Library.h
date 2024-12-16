#pragma once
#include <string> 
#include <vector> 
using namespace std;

struct Content {
    string name;
    string genre;
    string type;
    
    static Content load(ifstream& in);
    void save(ofstream& out) const;
};

vector<Content> loadContent(const string& filename);
void addContent(vector<Content>& contents, const string& name, const string& genre, const string& type);
void saveContent(const string& filename, const vector<Content>& contents);
void _mC_();

