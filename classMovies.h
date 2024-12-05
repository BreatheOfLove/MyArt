#pragma once
#include <string>
using namespace std;
class Movies {
private:
    string name;
    string genre;
    string country;
    int durationMin;
    int YearRelease;
public:
    Movies();
    Movies(string name, string genre, string country, int durationMin, int YearRelease);
    ~Movies();
    void print() const;

    void setName(string sName);
    void setGenre(string sGenre);
    void setCountry(string sCountry);
    void setDurationMin(int sDurationMin);
    void setYearRelease(int sYearRelease);

    string getName() const;
    string getGenre() const;
    string getCountry() const;
    int getDurationMin() const;
    int getYearRelease() const;
};