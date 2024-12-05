#include <iostream>
#include "classMovies.h"
Movies::Movies() : name("NULL"), genre("NULL"), country("NULL"), durationMin(0), YearRelease(0) {};
Movies::Movies(string name, string genre, string country, int durationMin,
    int YearRelease) {
    this->name = name;
    this->genre = genre;
    this->country = country;
    this->durationMin = durationMin;
    this->YearRelease = YearRelease;
}
Movies::~Movies() {}
void Movies::print() const {
    cout << "�������� ������: " << name << endl;
    cout << "����: " << genre << endl;
    cout << "������: " << country << endl;
    cout << "������������: " << durationMin << " �����" << endl;
    cout << "��� �������: " << YearRelease << endl;
}

void Movies::setName(string sName) { name = sName; }
void Movies::setGenre(string sGenre) { genre = sGenre; }
void Movies::setCountry(string sCountry) { country = sCountry; }
void Movies::setDurationMin(int sDurationMin) { durationMin = sDurationMin; }
void Movies::setYearRelease(int sYearRelease) { YearRelease = sYearRelease; }

string Movies::getName() const { return name; }
string Movies::getGenre() const { return genre; }
string Movies::getCountry() const { return country; }
int Movies::getDurationMin() const { return durationMin; }
int Movies::getYearRelease() const { return YearRelease; }