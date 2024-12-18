#include <iostream>
#include <fstream>
#include <windows.h>
#include "Library.h"

Content Content::load(ifstream& in) {
	Content content;
	in >> content.name >> content.genre >> content.type;
	return content;
}

void Content::save(ofstream& out) const {
	out << name << " " << genre << " " << type << endl;
}

string userRepetition(const vector<Content>& contents) {
	string name;
	bool isRepetition = false;
	do {
		cout << "������� ��������: ";
		cin >> name;
		for (const Content& content : contents) {
			if (content.name == name) {
				cout << "������� ������ ��������. ��� ������." << endl;
				isRepetition = true;
				break;
			}
		}
		if (!isRepetition) {return name;}
	} while (true);
}

string switchGenre() {
	int choice;
	do {
		cout << "1. �����" << endl
			<< "2. �������" << endl
			<< "3. �������" << endl
			<< "4. �����" << endl
			<< "5. ������" << endl
			<< "������� ��������: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			return "�����";
			break;
		case 2:
			return "�������";
			break;
		case 3:
			return "�������";
			break;
		case 4:
			return "�����";
			break;
		case 5:
			return "������";
			break;
		default:
			cout << "�������� ��������";
			break;
		}

	} while (true);
}

string switchType() {
	int choice;
	do {
		cout << "\n1. �����" << endl
			<< "2. ������" << endl
			<< "3. ������" << endl
			<< "4. ������-�����" << endl
			<< "������� ��������: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			return "�����";
			break;
		case 2:
			return "������";
			break;
		case 3:
			return "������";
			break;
		case 4:
			return "������-�����";
			break;
		default:
			cout << "�������� ��������";
			break;
		}
		
	} while (true);
}

vector<Content> loadContent(const string& filename) {
	vector<Content> contents;
	ifstream file(filename);
	if (!file.is_open()) {
		cerr << "�� ������� ������� ����: " << filename << endl;
		return contents;
	}
	while (true) {
		Content content = Content::load(file);
		if (file.fail()) {
			break;
		}
		contents.push_back(content);
	}
	file.close();
	return contents;
}

void addContent(vector<Content>& contents, const string& name, const string& genre, const string& type) {
	contents.push_back(Content{ name, genre, type });
	cout << genre << " " << name << " added.\n";
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
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string filename = "library.txt";
	vector<Content> contents = loadContent(filename);

	int choice;
	do {
		cout << "����\n1. ��������\n0. ��������� � �����\n�������: ";
		cin >> choice;

		if (choice == 1) {
			string name, genre, type;

			name = userRepetition(contents);
			genre = switchGenre();
			type = switchType();

			addContent(contents, name, genre, type);
			saveContent(filename, contents);
		}
		else if (choice == 0) {
			exit(0);
		}

	} while (choice != 0);
}
