#include "test.h"
#include "binary-search.h"
#include <string>
#include <iostream>

using namespace std;

const int NUM_TESTS = 7;

string getPassFailString(bool status) {
    return status ? "TEST PASSED" : "TEST FAILED";
}

int main() {
    BinarySearchTest binSearchTest;

    string binarySearchTestDescriptions[NUM_TESTS] = {
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


    cout << "---------BINARY SEARCH TEST RESULTS---------" << endl;
    for (int i = 0; i < NUM_TESTS; i++) {
        cout << binarySearchTestDescriptions[i] << endl << binarySearchTestResults[i] << endl; 
    }
}