#include <iostream>
#include <sstream>
#include "Login.h"
#include "Menu.h"
using namespace std;

void mainMenu() {
    setlocale(LC_ALL, "rus");
    int act;
    cout << "Начальное меню" << endl
        << "1. Войти или зарегистрироваться" << endl
        << "2. Вывести меню с фильмами/сериалами/музыкой/онлайн-книгами" << endl
        << "0. Закончить программу" << endl
        << "Введите действие: ";
    cin >> act;
    do {
        switch (act) 
        {
            case 1:
                _main_();
                break;
            case 2:
                contentMenu();
                break;
            case 0:
                cout << "Вы вышли из меню" << endl;
                return;
                break;
            default:
                cout << "Нема такого действия" << endl;
                break;
        }
        mainMenu();
    } while (act != 0);
}

void authMenu() {
    int act;
    cout << "Меню входа" << endl
        << "1. Войти" << endl
        << "2. Зарегистрироваться" << endl
        << "0. Выход" << endl
        << "Введите действие: ";
    cin >> act;

    do {
        switch (act) 
        {
            case 1:
                break;
            case 2:
                break;
            case 0:
                cout << "Вы вышли из меню" << endl;
                return;
                break;
            default:
                cout << "Нема такого действия" << endl;
                break;
        }
        authMenu();
    } while (act != 0);
}

void contentMenu() {
    int act;
    cout << "Меню пользователя" << endl
        << "1. Фильмы" << endl
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
        case 3:
            break;
        case 4:
            break;
        case 0:
            cout << "Вы вышли из меню" << endl;
            return;
            break;
        default:
            cout << "Нема такого действия" << endl;
            contentMenu();
            break;
        }
    } while (act != 0);
}

void adminMenu() {
    int act;
    cout << "1. Добавить контент" << endl
        << "2. Удалить контент" << endl
        << "0. Закончить программу" << endl
        << "Введите действие: ";
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
