#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class LinkedList {
    public:

        typedef int DataType;

    private:

        DataType *data_;
        unsigned int capacity_;
        unsigned int size_;

        LinkedList(const LinkedList& rhs);
        LinkedList& operator=(const LinkedList& rhs);
    
    public: 
        // Constuctor
        LinkedList(unsigned int cap);
        // Destructor
        ~LinkedList();

        // Constant member functions
        unsigned int size() const;
        
        unsigned int capacity() const;
        
        bool empty() const;
        
        bool full() const;
        
        DataType select(unsigned int index) const;

        unsigned int search(DataType value) const;

        void print() const;

        // Non-constant member functions
        bool insert(DataType value, unsigned int index);

        bool insertFront(DataType value);

        bool insertBack(DataType value);

        bool remove(unsigned int index);

        bool removeFront(unsigned int index);

        bool removeBack(unsigned int index);

        bool replace(unsigned int index, DataType value);


};


#endif