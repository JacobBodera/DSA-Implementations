#include <string>
#include <iostream>
#include "test.h"

using namespace std;

const int NUM_TESTS = 3;

string getPassFailString(bool status) {
    return status ? "TEST PASSED" : "TEST FAILED";
}

int main() {
    SequentialListTest seqListTest;

    string SequentialListTestDescriptions[NUM_TESTS] = {
        "Test 1: Empty array",
        "Test 2: Single element",
        "Test 3: Odd number of elements, value in first half"
    };

    bool sequentialListTestResutls[NUM_TESTS];
    sequentialListTestResutls[0] = seqListTest.test1();
    sequentialListTestResutls[1] = seqListTest.test2();
    sequentialListTestResutls[2] = seqListTest.test3();
    // sequentialListTestResutls[3] = seqListTest.test4();
    // sequentialListTestResutls[3] = seqListTest.test5();
    // sequentialListTestResutls[3] = seqListTest.test6();
    // sequentialListTestResutls[3] = seqListTest.test7();


    cout << "---------SEQUENTIAL LIST TEST RESULTS---------" << endl;
    for (int i = 0; i < NUM_TESTS; i++) {
        cout << SequentialListTestDescriptions[i] << endl << sequentialListTestResutls[i] << endl; 
    }
}