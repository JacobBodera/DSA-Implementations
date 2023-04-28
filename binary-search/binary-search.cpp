#include <iostream>
#include <vector>
#include <cmath>
#include "binary-search.h"


int binarySearch(int array[], int target) {

    if (sizeof(array) / sizeof(int) == 0) {
        return -1;
    }

    int startIndex = 0;
    int endIndex = sizeof(array) / sizeof(int) - 1;

    while (true) {
    int midIndex = floor((endIndex - startIndex) / 2 + startIndex);
        if (array[midIndex] < target)
            startIndex = midIndex;
        else if (array[midIndex] > target)
            endIndex = midIndex;

        if (array[midIndex] == target)
            return midIndex;

        if (startIndex == endIndex) {
            return -1;
        }
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    std::cout << binarySearch(arr, 2);
    return 0;
}