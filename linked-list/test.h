#ifndef TEST_H
#define TEST_H

#include "sequential-list.h"

#define ASSERT_TRUE(T) if (!(T)) return false;
#define ASSERT_FALSE(T) if ((T)) return false

class SequentialListTest {
    public:
        // creation of list
        bool test1() {
            unsigned int capacity = 5;
            SequentialList list(capacity);

            ASSERT_TRUE(list.size() == 0)
            ASSERT_TRUE(list.capacity() == capacity)
            ASSERT_TRUE(list.empty() == true)
            ASSERT_TRUE(list.full() == false)
            return true;
        }
        // insertFront, insertBack on empty list
        bool test2() {
            unsigned int capacity = 5;
            SequentialList list1(capacity);
            SequentialList list2(capacity);

            ASSERT_TRUE(list1.insertFront(100))
            ASSERT_TRUE(list2.insertBack(100))
            ASSERT_TRUE(list1.size() == list2.size() && list1.size() == 1)
            // ASSERT_TRUE(list1.data_ != NULL)
            // ASSERT_TRUE(list2.data_ != NULL)
            ASSERT_TRUE(list1.select(0) == list2.select(0) && list1.select(0) == 100)
            return true;
        }
        // select and search work
        bool test3() {

        }
};

#endif