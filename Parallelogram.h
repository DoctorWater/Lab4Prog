//
// Created by malck on 22.03.2022.
//

#ifndef LABA4PROG_PARALLELOGRAM_H
#define LABA4PROG_PARALLELOGRAM_H

#include "IPhysObject.h"
#include "IGeoFig.h"
#include "IPrintable.h"
#include "IDialogInitiable.h"
#include "BaseCObject.h"
#include "BaseCertainForm.h"

namespace lab {

    class Parallelogram
            : public IPhysObject, public IDialogInitiable,  public BaseCertainForm {
    private:
        double massVar, a, b, angle;
    public:
        Parallelogram() {
            this->massVar = 0.1;
            this->a = 1;
            this->b = 1;
        }

        Parallelogram(double massVar, double a, double b) {
            this->massVar = massVar;
            this->a = a;
            this->b = b;
        }

        const char *classname() override;

        unsigned int size() override;

        void initFromDialog() override;

        double square() override;

        double perimeter() override;

        double mass() const override;

        Vector2D position() override;

        bool operator==(const IPhysObject &ob) const override;

        bool operator<(const IPhysObject &ob) const override;

        void draw() override;
    };
}

#endif //LABA4PROG_PARALLELOGRAM_H
