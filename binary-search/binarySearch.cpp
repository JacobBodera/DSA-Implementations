#include <iostream>
#include <vector>
#include <cmath>
#include "binarySearch.h"

int binarySearch(std::vector<int> array, int target) {
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

int main() {
    std::vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

    std::cout << binarySearch(arr, 2);
    return 0;
}