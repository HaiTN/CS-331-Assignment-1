#ifndef CLOSEDLIST_H
#define CLOSEDLIST_H


class ClosedList
{
    private:
        int key;
        int value;
    public:
        ClosedList();
        ClosedList(int key, int value);

        int getKey() {return key;}
        int getValue() {return value;}
        virtual ~ClosedList();
};

#endif // CLOSEDLIST_H
