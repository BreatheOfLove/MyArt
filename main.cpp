#include <iostream>
#include <string>
#include "classMusic.h"
#include "classMovies.h"
#include "classSerials.h"
#include "classBooks.h"
#include "Login.h"
#include "Menu.h"
using namespace std;

class OnlineArt : protected Movies,
    protected Serials,
    protected Music,
    protected Books {
public:
};

int main() {
    setlocale(LC_ALL, "rus");
}
