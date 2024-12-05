#pragma once
#include <string>
using namespace std;
class Books {
private:
    string name;
    string genre;
    string author;
    string language;
    int pages;
    int YearRelease;
public:
    Books();
    Books(string name, string genre, string author, string language, int pages, int YearRelease);
    ~Books();
    void print() const;

    void setName(string sName);
    void setGenre(string sGenre);
    void setAuthor(string sCountry);
    void setLanguage(string sLanguage);
    void setPages(int sPages);
    void setYearRelease(int sYearRelease);

    string getName() const;
    string getGenre() const;
    string getAuthor() const;
    string getLanguage() const;
    int getPages() const;
    int getYearRelease() const;
};
