#include "Exchange.h"
#include <vector>

template<typename T>
void exchenge_sort(std::vector<T>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] > arr[j]) {
                T x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }
}


template void exchenge_sort<int>(std::vector<int>&);
template void exchenge_sort<double>(std::vector<double>&);
template void exchenge_sort<float>(std::vector<float>&);
template void exchenge_sort<char>(std::vector<char>&);