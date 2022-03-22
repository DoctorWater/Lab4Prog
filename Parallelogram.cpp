//
// Created by malck on 22.03.2022.
//
#include <iostream>
#include "Parallelogram.h"
#include <cmath>

using namespace std;
namespace lab {
    const char *Parallelogram::classname() {
        return "Parallelogram";
    }

    unsigned int Parallelogram::size() {
        return sizeof(Parallelogram);
    }

    void Parallelogram::initFromDialog() {
        cout << "Введите длину стороны A" << endl;
        cin >> this->a;
        cout << "Введите длину стороны B" << endl;
        cin >> this->b;
        cout << "Введите массу объекта" << endl;
        cin >> this->massVar;
        cout << "Введите острый угол объекта в градусах" << endl;
        cin >> this->angle;
    }

    double Parallelogram::square() {
        return this->a * this->b * sin(this->angle / 180 * M_PI);
    }

    double Parallelogram::perimeter() {
        return 2 * this->a + 2 * this->b;
    }

    double Parallelogram::mass() const {
        return this->massVar;
    }

    Vector2D Parallelogram::position() {
        return Vector2D();
    }

    bool Parallelogram::operator==(const IPhysObject &ob) const {
        if (ob.mass() == this->massVar)
            return true;
        else
            return false;
    }

    bool Parallelogram::operator<(const IPhysObject &ob) const {
        if (ob.mass() < this->massVar)
            return true;
        else
            return false;
    }

    void Parallelogram::draw() {
        cout << "Масса объекта: " << this->mass() << " Сторона A: " << this->a << " Сторона B: " << this->b << " Острый угол в градусах: " << this->angle;
    }
}