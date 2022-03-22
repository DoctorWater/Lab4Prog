//
// Created by malck on 22.03.2022.
//
#include <iostream>
#include "Menu.h"
#include "Triangle.h"
#include "Parallelogram.h"
using namespace std;
namespace lab {
    void Menu::add() {
        cout << "Вы хотите создать треугольник (1) или параллелограмм (2) ?" <<endl;
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: {
                Triangle triangle;
                triangle.initFromDialog();
                this->arr.push_back(triangle);
                break;
            }
            case 2: {
                Parallelogram parallelogram;
                parallelogram.initFromDialog();
                this->arr.push_back(parallelogram);
                break;
            }
            default:{
                cout << "Вы ввели неверное значение!" <<endl;
                break;
            }
        }
    }

    void Menu::display() {
        while(!this->arr.empty()){
            this->arr.back().draw();
        }
    }

    void Menu::sumSquare() {
        double sum=0;
        while(!this->arr.empty()){
            sum+=this->arr.back().square();
        }
        cout << "Суммарная площадь фигур: " << sum << endl;
    }

    void Menu::sumPerimeter(){
        double sum=0;
        while(!this->arr.empty()){
            sum+=this->arr.back().perimeter();
        }
        cout << "Суммарный периметр фигур: " << sum << endl;
    }

    void Menu::sumMemory() {
        double sum=0;
        while(!this->arr.empty()){
            sum+=this->arr.back().size();
        }
        cout << "Суммарный объем памяти фигур: " << sum << endl;
    }

    void Menu::sortArray() {
        BaseCertainForm *temp;
        auto iteri = this->arr.begin();
        auto iterj = this->arr.begin();
        while(iteri!=this->arr.end()){
            while(iterj!=this->arr.end()-1){
                if (iterj->square()<(iterj+1)->square()){
                    temp=&*iterj;
                    *iterj=*(iterj+1);
                    *(iterj+1)=*temp;
                }
            }
        }
    }

    void Menu::displayMenu() {
        cout << "выберите желаемое действие: "
                "1) Внести новый объект в коллекцию"
                "2) Вывести суммарную площадь"
                "3) Вывести суммарный периметр"
                "4) Отобразить всю коллекцию"
                "5) Отсортировать коллекцию"
                "6) Вывести суммарный объем занимаемой памяти"
                "7) Выйти из программы" <<endl;
    }

    void Menu::exit() {
        ::exit(1);
    }
}