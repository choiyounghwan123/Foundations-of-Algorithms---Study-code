//
// Created by 최영환1 on 7/13/24.
//

#include "exchange_sort.h"
#include "iostream"

void exchangesort(std::vector<int>& arr){
    int n = arr.size();

    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n-1; j++){
            if (arr[i] > arr[j]){
                std::swap(arr[i],arr[j]);
            }
        }
    }
}

