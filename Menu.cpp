#include <iostream>
#include "Menu.h"
using namespace std;

void userMenu() {
    int act;
    cout << "1. ������" << endl
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
        case 0:
            cout << "�� ����� �� ����" << endl;
            break;
        default:
            cout << "���� ������ ��������" << endl;
            userMenu();
            break;
        }
        userMenu();
    } while (act != 0);
}

void adminMenu() {
    int act;
    cout << "1. �������� �������" << endl
        << "2. ������� �������" << endl
        << "0. ��������� ���������" << endl;
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
