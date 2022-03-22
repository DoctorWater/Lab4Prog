//
// Created by malck on 22.03.2022.
//

#ifndef LABA4PROG_IPHYSOBJECT_H
#define LABA4PROG_IPHYSOBJECT_H

#include "Vector2D.h"

namespace lab {
    class IPhysObject {
    public:
        virtual double mass() const = 0;
        virtual Vector2D position() = 0;
        virtual bool operator ==(const IPhysObject &ob)const=0;
        virtual bool operator <(const IPhysObject &ob)const=0;
    };
}

#endif //LABA4PROG_IPHYSOBJECT_H
