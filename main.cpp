#include <iostream>
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
    Movies(string name, string genre, string country, int durationMin,
        int YearRelease) {
        this->name = name;
        this->genre = genre;
        this->country = country;
        this->durationMin = durationMin;
        this->YearRelease = YearRelease;
    }
    void print() const {
        cout << "Название фильма: " << name << endl;
        cout << "Жанр: " << genre << endl;
        cout << "Страна: " << country << endl;
        cout << "Длительность: " << durationMin << " минут" << endl;
        cout << "Год выпуска: " << YearRelease << endl;
    }
};

class Serials {
private:
    string name;
    string genre;
    string country;
    int seasons;
    int series;
    int YearRelease;

public:
     Serials(string name, string genre, string country, int seasons, int series,
        int YearRelease) {
        this->name = name;
        this->genre = genre;
        this->country = country;
        this->seasons = seasons;
        this->series = series;
        this->YearRelease = YearRelease;
    }
    void print() const {
        cout << "Название фильма: " << name << endl;
        cout << "Жанр: " << genre << endl;
        cout << "Страна: " << country << endl;
        cout << "Сезонов: " << seasons << " минут" << endl;
        cout << "Серий в 1 сезоне: " << series << endl;
        cout << "Год выпуска: " << YearRelease << endl;
    }
};

class Music {
private:
    string name;
    string executor;
    string album;
    string language;
    int timeSec;
    int YearRelease;
public:
    Music(string name, string executor, string album, string language, int timeSec, int YearRelease) {
        this->name = name;
        this->executor = executor;
        this->album = album;
        this->language = language;
        this->timeSec = timeSec;
        this->YearRelease = YearRelease;
    }
    void print() const {
        cout << "Трек: " << name << endl;
        cout << "Исполнитель: " << executor << endl;
        cout << "Альбом: " << album << endl;
        cout << "Язык: " << language << endl;
        cout << "Длительность(сек): " << timeSec << endl;
        cout << "Год выпуска: " << YearRelease << endl;
    }
};

class Books {
private:
    string name;
    string genre;
    string author;
    string language;
    int pages;
    int YearRelease;
public:
    Books(string name, string genre , string author, string language, int pages, int YearRelease) {
        this->name = name;
        this->genre = genre;
        this->author = author;
        this->language = language;
        this->pages = pages;
        this->YearRelease = YearRelease;
    }
    void print() const {
        cout << "Название книги: " << name << endl;
        cout << "Жанр: " << genre << endl;
        cout << "Автор: " << author << endl;
        cout << "Язык: " << language << endl;
        cout << "Страниц: " << pages << endl;
        cout << "Год выпуска: " << YearRelease << endl;
    }
};

class OnlineArt : protected Movies,
    protected Serials,
    protected Music,
    protected Books {
public:
};

void Menu(int& act) {
    cout << "1. Фильмы" << endl
        << "2. Сериалы" << endl
        << "3. Музыка" << endl
        << "4. Онлайн-книги" << endl
        << "0. Выход" << endl
        << "Введите действие: ";
    cin >> act;
}

void adminMenu(int& act) {
    cout << "1. Добавить контент" << endl
        << "2. Удалить контент" << endl
        << "0. Закончить программу" << endl;
    cin >> act;
}

void adminLogin() {
    string user, password;
    while (user != "1" && password != "1") {
        cout << "Введите имя пользователя: ";
        cin >> user;
        cout << "Введите пароль: ";
        cin >> password;
        if (user != "1" || password != "1") {
            cout << "Неверное имя пользователя или пароль" << endl;
        }
    }
    cout << "Добро пожаловать" << endl;
    int admAct = 0;
    do {
        adminMenu(admAct);

        switch (admAct) {
        case 1:
            break;
        case 2:
            break;
        case 0:
            cout << "Программа завершена" << endl;
            break;
        default:
            cout << "Нема такого действия" << endl;
            break;
        }
    } while (admAct != 0);
}

int main() {
    setlocale(LC_ALL, "rus");
    int act = 0;
    do {
        Menu(act);
        cout << endl;
        switch (act) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 0:
            cout << "Вы вышли из меню" << endl;
            break;
        default:
            cout << "Неверное действие" << endl;
            break;
        }
    } while (act != 0);
}

