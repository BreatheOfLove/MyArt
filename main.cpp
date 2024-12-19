#include <iostream>
#include "classMusic.h"
#include "classMovies.h"
#include "classSerials.h"
#include "classBooks.h"
#include "Login.h"
#include "Library.h"
#include "Menu.h"

class OnlineArt : protected Movies,
    protected Serials,
    protected Music,
    protected Books {
public:
};

int main() {
    mainMenu();
    _mC();
}
