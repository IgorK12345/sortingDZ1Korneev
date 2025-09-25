#include "OptimizedBubble.h"
#include <vector>
#include <iostream>


template<typename T>
void optimizedbubble_sort(std::vector<T>& arr) {
    
    for (int i = 0; i < arr.size(); i++) {
        int f = 0;
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;
                f = 1;
            }
        }
        if (f == 0) {
            break;
        }
    
    }

}


template void optimizedbubble_sort<int>(std::vector<int>&);
template void optimizedbubble_sort<double>(std::vector<double>&);
template void optimizedbubble_sort<float>(std::vector<float>&);
template void optimizedbubble_sort<char>(std::vector<char>&);