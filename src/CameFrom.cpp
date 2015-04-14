#include "CameFrom.h"

CameFrom::CameFrom()
{
    table = new ClosedList*[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++)
        table[i] = NULL;
}

int CameFrom::get(int key) {
    int hash = (key % TABLE_SIZE);
    while (table[hash] != NULL && table[hash]->getKey() != key)
        hash = (hash + 1) % TABLE_SIZE;
    if (table[hash] == NULL)
        return -1;
    else
        return table[hash]->getValue();
}

void CameFrom::put(int key, int value) {
    int hash = (key % TABLE_SIZE);
    while (table[hash] != NULL && table[hash]->getKey() != key)
        hash = (hash + 1) % TABLE_SIZE;
    if (table[hash] != NULL)
        delete table[hash];
    table[hash] = new ClosedList(key, value);
}

CameFrom::~CameFrom()
{
    for (int i = 0; i < TABLE_SIZE; i++)
        if (table[i] != NULL)
            delete table[i];
    delete[] table;
}
