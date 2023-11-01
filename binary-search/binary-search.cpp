#include <iostream>
#include <vector>
#include <cmath>
#include "binary-search.h"


int binarySearch(std::vector<int> array, int target) {

    if (array.empty()) {
        return -1;
    }

    int startIndex = 0;
    int endIndex = array.size() - 1;

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