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
		cout << "Введите название: ";
		cin >> name;
		for (const Content& content : contents) {
			if (content.name == name) {
				cout << "Введите другое название. Это занято." << endl;
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
		cout << "1. Драма" << endl
			<< "2. Триллер" << endl
			<< "3. Комедия" << endl
			<< "4. Ужасы" << endl
			<< "5. Боевик" << endl
			<< "Введите действие: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			return "Драма";
			break;
		case 2:
			return "Триллер";
			break;
		case 3:
			return "Комедия";
			break;
		case 4:
			return "Ужасы";
			break;
		case 5:
			return "Боевик";
			break;
		default:
			cout << "Неверное действие";
			break;
		}

	} while (true);
}

string switchType() {
	int choice;
	do {
		cout << "\n1. Фильм" << endl
			<< "2. Сериал" << endl
			<< "3. Музыка" << endl
			<< "4. Онлайн-книга" << endl
			<< "Введите действие: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			return "Фильм";
			break;
		case 2:
			return "Сериал";
			break;
		case 3:
			return "Музыка";
			break;
		case 4:
			return "Онлайн-книга";
			break;
		default:
			cout << "Неверное действие";
			break;
		}
		
	} while (true);
}

vector<Content> loadContent(const string& filename) {
	vector<Content> contents;
	ifstream file(filename);
	if (!file.is_open()) {
		cerr << "Не удалось открыть файл: " << filename << endl;
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
		cout << "Меню\n1. Добавить\n0. Сохранить и выйти\nВведите: ";
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
