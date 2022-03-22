//
// Created by malck on 22.03.2022.
//

#ifndef LABA4PROG_MENU_H
#define LABA4PROG_MENU_H

#include <vector>
#include "IPhysObject.h"
#include "IGeoFig.h"
#include "IPrintable.h"
#include "IDialogInitiable.h"
#include "BaseCertainForm.h"

using namespace std;
namespace lab {
    class Menu {
    private:
        vector<BaseCertainForm> arr;
    public:
        void add();
        void display();
        void sumSquare();
        void sumPerimeter();
        void sumMemory();
        void sortArray();
        void displayMenu();
        void exit();
    };
}

#endif //LABA4PROG_MENU_H
