#include <iostream>
#include "classBooks.h"
Books::Books() : name("NULL"), genre("NULL"), author("NULL"), language("NULL"), pages(0), YearRelease(0) {};
Books::Books(string name, string genre, string author, string language, int pages, int YearRelease) {
    this->name = name;
    this->genre = genre;
    this->author = author;
    this->language = language;
    this->pages = pages;
    this->YearRelease = YearRelease;
}
Books::~Books() {}
void Books::print() const {
    cout << "Название книги: " << name << endl;
    cout << "Жанр: " << genre << endl;
    cout << "Автор: " << author << endl;
    cout << "Язык: " << language << endl;
    cout << "Страниц: " << pages << endl;
    cout << "Год выпуска: " << YearRelease << endl;
}

void Books::setName(string sName) { name = sName; }
void Books::setGenre(string sGenre) { genre = sGenre; }
void Books::setAuthor(string sAuthor) { author = sAuthor; }
void Books::setLanguage(string sLanguage) { language = sLanguage; }
void Books::setPages(int sPages) { pages = sPages; }
void Books::setYearRelease(int sYearRelease) { YearRelease = sYearRelease; }

string Books::getName() const { return name; }
string Books::getGenre() const { return genre; }
string Books::getAuthor() const { return author; }
string Books::getLanguage() const { return language; }
int Books::getPages() const { return pages; }
int Books::getYearRelease() const { return YearRelease; }