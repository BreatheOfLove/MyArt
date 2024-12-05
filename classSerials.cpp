#include <iostream>
#include "classSerials.h"
Serials::Serials() : name("NULL"), genre("NULL"), country("NULL"), seasons(0), series(0), YearRelease(0) {};
Serials::Serials(string name, string genre, string country, int seasons, int series,
    int YearRelease) {
    this->name = name;
    this->genre = genre;
    this->country = country;
    this->seasons = seasons;
    this->series = series;
    this->YearRelease = YearRelease;
}
Serials::~Serials() {}
void Serials::print() const {
    cout << "�������� �������: " << name << endl;
    cout << "����: " << genre << endl;
    cout << "������: " << country << endl;
    cout << "�������: " << seasons << " �����" << endl;
    cout << "����� � 1 ������: " << series << endl;
    cout << "��� �������: " << YearRelease << endl;
}

void Serials::setName(string sName) { name = sName; }
void Serials::setGenre(string sGenre) { genre = sGenre; }
void Serials::setCountry(string sCountry) { country = sCountry; }
void Serials::setSeasons(int sSeasons) { seasons = sSeasons; }
void Serials::setSeries(int sSeries) { series = sSeries; }
void Serials::setYearRelease(int sYearRelease) { YearRelease = sYearRelease; }

string Serials::getName() const { return name; }
string Serials::getGenre() const { return genre; }
string Serials::getCountry() const { return country; }
int Serials::getSeasons() const { return seasons; }
int Serials::getSeries() const { return series; }
int Serials::getYearRelease() const { return YearRelease; }