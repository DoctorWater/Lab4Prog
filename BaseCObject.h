//
// Created by malck on 22.03.2022.
//

#ifndef LABA4PROG_BASECOBJECT_H
#define LABA4PROG_BASECOBJECT_H

namespace lab {
    class BaseCObject {
    public:
        virtual const char *classname() = 0;

        virtual unsigned int size() = 0;
    };
}

#endif //LABA4PROG_BASECOBJECT_H
