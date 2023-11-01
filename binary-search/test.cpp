#include "test.h"
#include <string>
#include <iostream>

const int NUM_TESTS = 7;

std::string getPassFailString(bool status) {
    return status ? "TEST PASSED" : "TEST FAILED";
}

int main() {
    BinarySearchTest binSearchTest;

    std::string binarySearchTestDescriptions[NUM_TESTS] = {
        "Test 1: Empty array",
        "Test 2: Single element",
        "Test 3: Odd number of elements, value in first half",
        "Test 4: Odd number of elements, value in second half",
        "Test 5: Even number of elements, value in first half",
        "Test 6: Even number of elements, value in second half",
        "Test 7: Target not found"
    };

    bool binarySearchTestResults[NUM_TESTS];
    binarySearchTestResults[0] = binSearchTest.test1();
    binarySearchTestResults[1] = binSearchTest.test2();
    binarySearchTestResults[2] = binSearchTest.test3();
    binarySearchTestResults[3] = binSearchTest.test4();
    binarySearchTestResults[3] = binSearchTest.test5();
    binarySearchTestResults[3] = binSearchTest.test6();
    binarySearchTestResults[3] = binSearchTest.test7();


    std::cout << "---------BINARY SEARCH TEST RESULTS---------" << std::endl;
    for (int i = 0; i < NUM_TESTS; i++) {
        std::cout << binarySearchTestDescriptions[i] << "-----" << getPassFailString(binarySearchTestResults[i]) << std::endl; 
    }
}