#include <iostream>

#include "Menu.h"
using namespace lab;
int main() {
    Menu menu;
    int choice;
    while(true)
    {
        menu.displayMenu();
        cin>>choice;
        switch (choice) {
            case 1:{
                menu.add();
                break;
            }
            case 2:{
                menu.sumSquare();
                break;
            }
            case 3:{
                menu.sumPerimeter();
                break;
            }
            case 4:{
                menu.display();
                break;
            }
            case 5:{
                menu.sortArray();
                break;
            }
            case 6:{
                menu.sumMemory();
            }
            case 7:{
                menu.exit();
                break;
            }
            default:
                break;
        }
    }
}
