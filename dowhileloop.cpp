#include <iostream>

int main() { // main function

  int i = 1; // Initialize the counter variable

  do { // Loop statement
  
    std::cout << i << " "; // Print the current number
    
    i++; // Increment the counter variable
  } 
    while (i <= 10); // Loop condition: check after the loop execution

  std::cout << std::endl; // Print a newline at the end

  return 0;
}

