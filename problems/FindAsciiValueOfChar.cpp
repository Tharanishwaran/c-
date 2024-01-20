// C++ Program to find ASCII value of a character 
#include <iostream> 
using namespace std; 

int main() 
{ 
	char ch; 

	ch = 'A'; 

	
	cout << "The ASCII value of " << ch << " is " << int(ch) //convert char into int so we get ASCII value
		<< endl; 

	return 0; 
}
