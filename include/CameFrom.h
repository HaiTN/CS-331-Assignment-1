#ifndef CAMEFROM_H
#define CAMEFROM_H
#include "ClosedList.h"
#include <cstdlib>

const int TABLE_SIZE = 128;

class CameFrom
{
    private:
        ClosedList **table;

    public:
        CameFrom();
        int get(int);
        void put(int, int);

        virtual ~CameFrom();

};

#endif // CAMEFROM_H
