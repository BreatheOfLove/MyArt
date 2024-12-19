#include <iostream>
#include <sstream>
#include "Login.h"
#include "Menu.h"
using namespace std;

void mainMenu() {
    setlocale(LC_ALL, "rus");
    int act;
    cout << "Íŕ÷ŕëüíîĺ ěĺíţ" << endl
        << "1. Âîéňč čëč çŕđĺăčńňđčđîâŕňüń˙" << endl
        << "2. Âűâĺńňč ěĺíţ ń ôčëüěŕěč/ńĺđčŕëŕěč/ěóçűęîé/îíëŕéí-ęíčăŕěč" << endl
        << "0. Çŕęîí÷čňü ďđîăđŕěěó" << endl
        << "Ââĺäčňĺ äĺéńňâčĺ: ";
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
                cout << "Âű âűřëč čç ěĺíţ" << endl;
                return;
                break;
            default:
                cout << "Íĺěŕ ňŕęîăî äĺéńňâč˙" << endl;
                break;
        }
        mainMenu();
    } while (act != 0);
}

void authMenu() {
    int act;
    cout << "Ěĺíţ âőîäŕ" << endl
        << "1. Âîéňč" << endl
        << "2. Çŕđĺăčńňđčđîâŕňüń˙" << endl
        << "0. Âűőîä" << endl
        << "Ââĺäčňĺ äĺéńňâčĺ: ";
    cin >> act;

    do {
        switch (act) 
        {
            case 1:
                break;
            case 2:
                break;
            case 0:
                cout << "Âű âűřëč čç ěĺíţ" << endl;
                return;
                break;
            default:
                cout << "Íĺěŕ ňŕęîăî äĺéńňâč˙" << endl;
                break;
        }
        authMenu();
    } while (act != 0);
}

void contentMenu() {
    int act;
    cout << "Ěĺíţ ďîëüçîâŕňĺë˙" << endl
        << "1. Ôčëüěű" << endl
        << "2. Ńĺđčŕëű" << endl
        << "3. Ěóçűęŕ" << endl
        << "4. Îíëŕéí-ęíčăč" << endl
        << "0. Âűőîä" << endl
        << "Ââĺäčňĺ äĺéńňâčĺ: ";
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
            cout << "Âű âűřëč čç ěĺíţ" << endl;
            return;
            break;
        default:
            cout << "Íĺěŕ ňŕęîăî äĺéńňâč˙" << endl;
            contentMenu();
            break;
        }
    } while (act != 0);
}

void adminMenu() {
    int act;
    cout << "1. Äîáŕâčňü ęîíňĺíň" << endl
        << "2. Óäŕëčňü ęîíňĺíň" << endl
        << "0. Çŕęîí÷čňü ďđîăđŕěěó" << endl
        << "Ââĺäčňĺ äĺéńňâčĺ: ";
    cin >> act;

    do {
        switch (act) {
        case 1:
            break;
        case 2:
            break;
        case 0:
            cout << "Âű âűřëč čç ŕäěčí-ěĺíţ" << endl;
            break;
        default:
            cout << "Íĺěŕ ňŕęîăî äĺéńňâč˙" << endl;
            adminMenu();
            break;
        }
    } while (act != 0);
}
