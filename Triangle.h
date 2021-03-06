//
// Created by malck on 22.03.2022.
//

#ifndef LABA4PROG_TRIANGLE_H
#define LABA4PROG_TRIANGLE_H

#include "IPhysObject.h"
#include "IGeoFig.h"
#include "IPrintable.h"
#include "IDialogInitiable.h"
#include "BaseCObject.h"
#include "BaseCertainForm.h"

namespace lab {
    class Triangle: public IPhysObject, public IDialogInitiable, public BaseCertainForm{
    private:
        double side;
        double massVar;
    public:
        Triangle(){
            this->side=1;
            this->massVar=0.1;
        }
        Triangle(double Side, double Mass){
            this->side=Side;
            this->massVar=Mass;
        }
        const char *classname() override;

        unsigned int size() override;

        void initFromDialog() override;

        double square() override;

        double perimeter() override;

        double mass() const override;

        Vector2D position() override;

        bool operator ==(const IPhysObject &ob) const override;

        bool operator<(const IPhysObject &ob) const override;

        void draw() override;
    };
}

#endif //LABA4PROG_TRIANGLE_H
