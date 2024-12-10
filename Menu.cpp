#include <iostream>
#include "Menu.h"
using namespace std;

void userMenu() {
    int act;
    cout << "1. Фильмы" << endl
        << "2. Сериалы" << endl
        << "3. Музыка" << endl
        << "4. Онлайн-книги" << endl
        << "0. Выход" << endl
        << "Введите действие: ";
    cin >> act;

    do {
        switch (act) {
        case 1:
            break;
        case 2:
            break;
        case 0:
            cout << "Вы вышли из меню" << endl;
            break;
        default:
            cout << "Нема такого действия" << endl;
            userMenu();
            break;
        }
        userMenu();
    } while (act != 0);
}

void adminMenu() {
    int act;
    cout << "1. Добавить контент" << endl
        << "2. Удалить контент" << endl
        << "0. Закончить программу" << endl;
    cin >> act;

    do {
        switch (act) {
        case 1:
            break;
        case 2:
            break;
        case 0:
            cout << "Вы вышли из админ-меню" << endl;
            break;
        default:
            cout << "Нема такого действия" << endl;
            adminMenu();
            break;
        }
    } while (act != 0);
}
