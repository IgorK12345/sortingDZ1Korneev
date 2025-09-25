#include "Bubble.h"
#include <vector>

template<typename T>
void bubble_sort(std::vector<T>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;
            }
        }
    }
}


template void bubble_sort<int>(std::vector<int>&);
template void bubble_sort<double>(std::vector<double>&);
template void bubble_sort<float>(std::vector<float>&);
template void bubble_sort<char>(std::vector<char>&);
