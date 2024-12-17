#include <iostream>
#include <fstream>
#include "Library.h"

Content Content::load(ifstream& in) {
	Content content;
	in >> content.name >> content.genre >> content.type;
	return content;
}

void Content::save(ofstream& out) const {
	out << name << " " << genre << " " << type << endl;
}

vector<Content> loadContent(string& filename) {
	vector<Content> contents;
	ifstream file(filename);
	while (!file.eof()) {
		Content content = Content::load(file);
		contents.push_back(content);
	}
	file.close();
	return contents;
} 

void addContent(vector<Content>& contents, const string& name, const string& genre, const string& type) {
	contents.push_back(Content{ name, genre, type });
	cout << genre << name << " added.\n";
}

void saveContent(const string& filename, const vector<Content>& contents) {
	ofstream file(filename); 
	for (const Content& name : contents) {
		name.save(file);
	}
	file.close();
}

void _mC_()
{
	string filename = "library.txt";
	vector<Content> contents = loadContent(filename);

	int choice;
	do {
		cout << "\nMenu:\n1. Add\n0. Save and exit\nEnter choice: ";
		cin >> choice;

		if (choice == 1) {
			string name, genre, type;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter genre: ";
			cin >> genre;
			cout << "Type: ";
			cin >> type;

			addContent(contents, name, genre, type);
			saveContent(filename, contents);
		}
		else if (choice == 0) {
			exit(0);
		}

	} while (choice != 0);
}
