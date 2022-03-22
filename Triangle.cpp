//
// Created by malck on 22.03.2022.
//

#include <iostream>
#include <cmath>
#include "Triangle.h"

using namespace std;
namespace lab {
    const char *lab::Triangle::classname() {
        return "Triangle";
    }

    unsigned int lab::Triangle::size() {
        return sizeof(Triangle);
    }

    void lab::Triangle::initFromDialog() {
        cout << "Введите длину стороны" << endl;
        cin >> this->side;
        cout << "Введите массу объекта" <<endl;
        cin >> this->massVar;
    }

    double lab::Triangle::square() {
        return sqrtf(3) / 4 * this->side;
    }

    double lab::Triangle::perimeter() {
        return 3 * this->side;
    }

    double Triangle::mass() const {
        return this->massVar;
    }

    lab::Vector2D lab::Triangle::position() {
        return Vector2D{};
    }

    bool Triangle::operator==(const IPhysObject &ob) const {
        if (ob.mass() == this->mass())
            return true;
        else
            return false;
    }

    bool lab::Triangle::operator<(const lab::IPhysObject &ob) const {
        if (ob.mass() <this->mass())
            return true;
        else
            return false;
    }

    void lab::Triangle::draw() {
        cout << "Масса объекта: " << this->mass() << " Сторона треугольника: " << this->side;
    }


}