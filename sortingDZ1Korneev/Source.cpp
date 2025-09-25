#include "Bubble.h"
#include "OptimizedBubble.h"
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> a = {1, 2, 3, 4, 5, 6};
	std::vector<int> b = {6, 5, 4, 3, 2, 1};
	std::vector<int> c = {2, 5, 3, 1, 6, 4};

	optimizedbubble_sort(a);
	optimizedbubble_sort(b);
	optimizedbubble_sort(c);
	
	for (int i = 0; i < a.size(); ++i) {
		std::cout << a[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < b.size(); ++i) {
		std::cout << b[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < c.size(); ++i) {
		std::cout << c[i] << " ";
	}
	std::cout << "\n";

	return 0;
}