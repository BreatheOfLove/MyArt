#include <iostream>
#include <string>
#include "classMusic.h"
#include "classMovies.h"
#include "classSerials.h"
#include "classBooks.h"
using namespace std;

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
