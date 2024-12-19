#include <iostream>
#include <sstream>
#include "Login.h"
#include "Menu.h"
using namespace std;

void mainMenu() {
    setlocale(LC_ALL, "rus");
    int act;
    cout << "��������� ����" << endl
        << "1. ����� ��� ������������������" << endl
        << "2. ������� ���� � ��������/���������/�������/������-�������" << endl
        << "0. ��������� ���������" << endl
        << "������� ��������: ";
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
                cout << "�� ����� �� ����" << endl;
                return;
                break;
            default:
                cout << "���� ������ ��������" << endl;
                break;
        }
        mainMenu();
    } while (act != 0);
}

void authMenu() {
    int act;
    cout << "���� �����" << endl
        << "1. �����" << endl
        << "2. ������������������" << endl
        << "0. �����" << endl
        << "������� ��������: ";
    cin >> act;

    do {
        switch (act) 
        {
            case 1:
                break;
            case 2:
                break;
            case 0:
                cout << "�� ����� �� ����" << endl;
                return;
                break;
            default:
                cout << "���� ������ ��������" << endl;
                break;
        }
        authMenu();
    } while (act != 0);
}

void contentMenu() {
    int act;
    cout << "���� ������������" << endl
        << "1. ������" << endl
        << "2. �������" << endl
        << "3. ������" << endl
        << "4. ������-�����" << endl
        << "0. �����" << endl
        << "������� ��������: ";
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
            cout << "�� ����� �� ����" << endl;
            return;
            break;
        default:
            cout << "���� ������ ��������" << endl;
            contentMenu();
            break;
        }
    } while (act != 0);
}

void adminMenu() {
    int act;
    cout << "1. �������� �������" << endl
        << "2. ������� �������" << endl
        << "0. ��������� ���������" << endl
        << "������� ��������: ";
    cin >> act;

    do {
        switch (act) {
        case 1:
            break;
        case 2:
            break;
        case 0:
            cout << "�� ����� �� �����-����" << endl;
            break;
        default:
            cout << "���� ������ ��������" << endl;
            adminMenu();
            break;
        }
    } while (act != 0);
}
