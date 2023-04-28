#ifndef TEST_H
#define TEST_H

#include "binary-search.h"

#define ASSERT_TRUE(T) if (!(T)) return false;
#define ASSERT_FALSE(T) if ((T)) return false;

class BinarySearchTest {
    public:

        bool test1() {
            int array[] = {};
            int value = 0;

            ASSERT_TRUE(binarySearch(array, value) == -1)
            return true;
        }

        bool test2() {
            int array[] = {5};
            int value = 5;
            
            ASSERT_TRUE(binarySearch(array, value) == 0)
            return true;
        }

        bool test3() {
            int array[] = {1, 2, 3, 5, 7, 11, 13};
            int value = 2;

            ASSERT_TRUE(binarySearch(array, value) == 1)
            return true;
        }

        bool test4() {
            int array[] = {1, 2, 3, 5, 7, 11, 13};
            int value = 11;

            ASSERT_TRUE(binarySearch(array, value) == 5)
            return true;
        }

        bool test5() {
            int array[] = {1, 2, 3, 5, 7, 11, 13, 17};
            int value = 2;

            ASSERT_TRUE(binarySearch(array, value) == 1)
            return true;
        }

        bool test6() {
            int array[] = {1, 2, 3, 5, 7, 11, 13, 17};
            int value = 13;

            ASSERT_TRUE(binarySearch(array, value) == 6)
            return true;
        }

        bool test7() {
            int array[] = {1, 2, 3, 4, 5, 6, 7};
            int value = 0;

            ASSERT_TRUE(binarySearch(array, value) == -1)
            return true;
        }
};


#endif