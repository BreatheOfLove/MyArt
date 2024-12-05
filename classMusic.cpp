#include <iostream>
#include "classMusic.h"
Music::Music() : name("NULL"), executor("NULL"), album("NULL"), language("NULL"), timeSec(0), YearRelease(0) {};
Music::Music(string name, string executor, string album, string language, int timeSec, int YearRelease) {
        this->name = name;
        this->executor = executor;
        this->album = album;
        this->language = language;
        this->timeSec = timeSec;
        this->YearRelease = YearRelease;
}
Music::~Music() {}
void Music::print() const {
    cout << "Трек: " << name << endl;
    cout << "Исполнитель: " << executor << endl;
    cout << "Альбом: " << album << endl;
    cout << "Язык: " << language << endl;
    cout << "Длительность(сек): " << timeSec << endl;
    cout << "Год выпуска: " << YearRelease << endl;
}
void Music::setName(string sName) { name = sName; }
void Music::setExecutor(string sExecutor) { executor = sExecutor; }
void Music::setAlbum(string sAlbum) { album = sAlbum; }
void Music::setLanguage(string sLanguage) {language = sLanguage; }
void Music::setTimeSec(int sTimeSec) { timeSec = sTimeSec; }
void Music::setYearRelease(int sYearRelease) { YearRelease = sYearRelease; }

string Music::getName() const { return name; }
string Music::getExecutor() const { return executor; }
string Music::getAlbum() const { return album; }
string Music::getLanguage() const { return language; }
int Music::getTimeSec() const { return timeSec; }
int Music::getYearRelease() const { return YearRelease; }