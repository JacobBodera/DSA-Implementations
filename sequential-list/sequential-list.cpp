#include "sequential-list.h"
#include <iostream>

// Constructor
SequentialList::SequentialList(unsigned int cap) {
    data_ = new DataType[cap];
    size_ = 0;
    capacity_ = cap;
}
// Destructor
SequentialList::~SequentialList() {
    delete [] data_;
}

unsigned int SequentialList::size() const {
    return size_;
}

unsigned int SequentialList::capacity() const {
    return capacity_;
}

bool SequentialList::empty() const {
    return size_ == 0;
}

bool SequentialList::full() const {
    return size_ == capacity_;
}

SequentialList::DataType SequentialList::select(unsigned int index) const {
    return (index < 0 || index >= capacity_) ? data_[capacity_] : data_[index];
}

unsigned int SequentialList::search(SequentialList::DataType value) const {
    for (int i = 0; i < size_; i++) {
        if (data_[i] == value) {
            return i;
        }
    }
    return size_;
}

void SequentialList::print() const {
    std::cout << "[ ";
    for (int i = 0; i < size_; i++) {
        std::cout << data_[i] << " ";
    }
    std::cout << "]";
}

bool SequentialList::insert(SequentialList::DataType value, unsigned int index) {
    if (size_ == capacity_ || index < 0 || index > size_) {
        return false;
    }
    for (int i = size_; i >= index; i--) {
        data_[i] = data_[i-1];
        if (i == index) {
            data_[i] = value;
        }
    }
    size_++;
    return true;
} 

bool SequentialList::insertFront(SequentialList::DataType value){
    SequentialList::insert(value, 0);
}

bool SequentialList::insertBack(SequentialList::DataType value){
    SequentialList::insert(value, size_);
}

bool SequentialList::remove(unsigned int index){
    if (size_ == 0 || index < 0 || index >=size_) {
        return false;
    }
    for (int i = index; i < size_ - 1; i++) {
        data_[i] = data_[i + 1];
    }
    size_--;
    return true; 
}

bool SequentialList::removeFront(unsigned int index){
    remove(0);
}

bool SequentialList::removeBack(unsigned int index){
    removeBack(size_-1);
}

bool SequentialList::replace(unsigned int index, SequentialList::DataType value){
    if (index < 0 || index >= size_) {
        return false;
    }
    data_[index] = value;
    return true;
}