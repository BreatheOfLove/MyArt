#pragma once
#include <string>
using namespace std;
class Serials {
private:
    string name;
    string genre;
    string country;
    int seasons;
    int series;
    int YearRelease;
public:
    Serials();
    Serials(string name, string genre, string country, int seasons, int series, int YearRelease);
    ~Serials();
    void print() const;

    void setName(string sName);
    void setGenre(string sGenre);
    void setCountry(string sCountry);
    void setSeasons(int sSeasons);
    void setSeries(int sSeries);
    void setYearRelease(int sYearRelease);

    string getName() const;
    string getGenre() const;
    string getCountry() const;
    int getSeasons() const;
    int getSeries() const;
    int getYearRelease() const;
};