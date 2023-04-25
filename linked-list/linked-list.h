#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class LinkedList {
    public:

        typedef int DataType;

    private:

        DataType *data;
        unsigned int capacity;
        unsigned int size;

        LinkedList(const LinkedList& rhs);
        LinkedList& operator=(const LinkedList& rhs);
};


#endif