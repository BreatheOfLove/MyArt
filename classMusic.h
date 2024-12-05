#pragma once
#include <string>
using namespace std;
class Music {
private:
    string name;
    string executor;
    string album;
    string language;
    int timeSec;
    int YearRelease;
public:
    Music();
    Music(string name, string executor, string album, string language, int timeSec, int YearRelease);
    ~Music();
    void print() const;
    
    void setName(string sName);
    void setExecutor(string sExecutor);
    void setAlbum(string sAlbum);
    void setLanguage(string sLanguage);
    void setTimeSec(int sTimeSec);
    void setYearRelease(int sYearRelease);

    string getName() const;
    string getExecutor() const;
    string getAlbum() const;
    string getLanguage() const;
    int getTimeSec() const;
    int getYearRelease() const;
};