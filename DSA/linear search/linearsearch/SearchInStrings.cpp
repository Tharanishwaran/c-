#include <iostream>
#include <string>

// Linear search function for strings
int linearSearch(const std::string arr[], int n, const std::string& target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    const int size = 5;
    std::string array[size] = {"apple", "banana", "orange", "grape", "kiwi"};
    std::string target = "orange";

    int result = linearSearch(array, size, target);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found in the array" << std::endl;
    }

    return 0;
}
