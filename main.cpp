#include <iostream>
#include <vector>
#include "ch1/exchange_sort.h"

int main() {
    std::vector<int> arr1 = {64, 34, 25, 12, 22, 11, 90};

    // Selection Sort
    exchangesort(arr1);

    std::cout << "Selection Sorted array: ";

    for(int i = 0; i < arr1.size(); i++){
        std::cout << arr1[i] << std::endl;
    }
    return 0;
}
