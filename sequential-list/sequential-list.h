#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class SequentialList {
    public:

        typedef int DataType;

    private:

        DataType *data_;
        unsigned int capacity_;
        unsigned int size_;

        friend class SequentialListTest;

        SequentialList(const SequentialList& rhs);
        SequentialList& operator=(const SequentialList& rhs);
    
    public: 
        // Constuctor
        SequentialList(unsigned int cap);
        // Destructor
        ~SequentialList();

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