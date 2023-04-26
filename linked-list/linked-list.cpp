#include "linked-list.h"
#include <iostream>

// Constructor
LinkedList::LinkedList(unsigned int cap) {
    data_ = new DataType[cap];
    size_ = 0;
    capacity_ = cap;
}
// Destructor
LinkedList::~LinkedList() {
    delete [] data_;
}

unsigned int LinkedList::size() const {
    return size_;
}

unsigned int LinkedList::capacity() const {
    return capacity_;
}

bool LinkedList::empty() const {
    return size_ == 0;
}

bool LinkedList::full() const {
    return size_ == capacity_;
}

LinkedList::DataType LinkedList::select(unsigned int index) const {
    return (index < 0 || index >= capacity_) ? data_[capacity_] : data_[index];
}

unsigned int LinkedList::search(LinkedList::DataType value) const {
    for (int i = 0; i < size_; i++) {
        if (data_[i] == value) {
            return i;
        }
    }
    return size_;
}

void LinkedList::print() const {
    std::cout << "[ ";
    for (int i = 0; i < size_; i++) {
        std::cout << data_[i] << " ";
    }
    std::cout << "]";
}

bool LinkedList::insert(LinkedList::DataType value, unsigned int index) {
    if (size_ == capacity_) {
        return false;
    }
    for (int i = index; i <= size_; i++) {
        LinkedList::DataType temp = data_[i];
        
    }
}

bool LinkedList::insertFront(LinkedList::DataType value){
    if (size_ == capacity_) {
        return false;
    }
}

bool LinkedList::insertBack(LinkedList::DataType value){
    if (size_ == capacity_) {
        return false;
    }
}

bool LinkedList::remove(unsigned int index){

}

bool LinkedList::removeFront(unsigned int index){

}

bool LinkedList::removeBack(unsigned int index){

}

bool LinkedList::replace(unsigned int index, LinkedList::DataType value){

}