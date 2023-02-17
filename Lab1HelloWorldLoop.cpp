//============================================================================
// Name        : Lab1HelloWorldLoop.cpp
// Author      : Nicholas Requena
// Version     : v0.2
// Description : Hello World using for loops.
//============================================================================

#include <iostream>
using namespace std;


	int main() {
		int n;
		cout << "How many times would you like to repeat Hello World?\n";
		cin >> n;					//sets value n to the user's input.

		for (int i=0; i<n; i++)		//Repeat the iteration, n times.
		 {
		 cout << "HelloWorld!\n";	//Prints Hello World in console.
		 }
		return 0;
	}

