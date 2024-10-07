//Juwon Hong
// CIS 25
// 7/ 10/ 2024

// linearSearch.cpp
#include "linearSearch.h"

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
