#include "Selection.h"
#include <vector>

template<typename T>
void selection_sort(std::vector<T>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        T min = arr[i];
        int min_id = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < min) {
                min = arr[j];
                min_id = j;
            }
        }
        arr[min_id] = arr[i];
        arr[i] = min;
    }
}


template void selection_sort<int>(std::vector<int>&);
template void selection_sort<double>(std::vector<double>&);
template void selection_sort<float>(std::vector<float>&);
template void selection_sort<char>(std::vector<char>&);