#ifndef TEST_H
#define TEST_H

#include <string>
#include <iostream>

using namespace std;

const int NUM_TESTS = 10;

string getPassFailString(bool status) {
    return status ? "TEST PASSED" : "TEST FAILED";
}

int main() {
    string binarySearchTestDescriptions[NUM_TESTS] = {
        "Test 1: "
    };

    bool binarySearchTestResults[NUM_TESTS];

    cout << "---------BINARY SEARCH TEST RESULTS---------";
    for (int i = 0; i < NUM_TESTS; i++) {
        cout << binarySearchTestDescriptions[i] << endl << binarySearchTestResults[i] << endl; 
    }
}


#endif