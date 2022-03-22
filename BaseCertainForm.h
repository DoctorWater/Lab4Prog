//
// Created by malck on 22.03.2022.
//

#ifndef LABA4PROG_BASECERTAINFORM_H
#define LABA4PROG_BASECERTAINFORM_H
#include "IGeoFig.h"
#include "BaseCObject.h"

class BaseCertainForm: public lab::IGeoFig, public lab::BaseCObject, public lab::IPrintable{
public:
    virtual const char *classname() override =0 ;

    virtual unsigned int size() override =0;

    virtual double square() override =0;

    virtual double perimeter() override =0;

    virtual void draw() override =0;

};


#endif //LABA4PROG_BASECERTAINFORM_H
