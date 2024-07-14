//
// Created by 최영환1 on 7/14/24.
//

#include "binarySearch.h"

int binsearch(const std::vector<int> arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low<=high){
        int mid = low  + (high - low )/2;
        if (arr[target] == arr[mid])
            return mid;
        else if(arr[target] < arr[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}