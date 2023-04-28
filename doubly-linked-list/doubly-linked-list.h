#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

class DoublyLinkedList {
    public:
        typedef int DataType;

    private:
        friend class DoublyLinkedListTest;

        static const unsigned int CAPACITY = 65536;

        struct Node {
            Node(DataType value);
            DataType value;
            Node* next;
            Node* prev;
        };

        Node* getNode(unsigned int index) const;

        Node* head_;
        Node* tail_;
        unsigned int size_;

        DoublyLinkedList(const DoublyLinkedList& rhs) {}
        DoublyLinkedList& operator=(const DoublyLinkedList& rhs) {}

    public:
        DoublyLinkedList();
        ~DoublyLinkedList();

        // Accessors
        unsigned int size() const;

        unsigned int capacity() const;

        bool empty() const;

        bool full() const;

        DataType select(unsigned int index) const;

        unsigned int search(DataType val) const;

        void print() const;
};

#endif