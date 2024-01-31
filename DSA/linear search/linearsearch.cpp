#include <iostream>

// Linear search function


int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;
}

int main() {
    const int size = 10;
    int array[size] = {2, 5, 8, 12, 16, 23, 37, 42, 51, 64};
    int target = 23;

    int result = linearSearch(array, size, target);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found in the array" << std::endl;
    }

    return 0;
}
