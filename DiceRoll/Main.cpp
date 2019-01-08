// Robert M Wood Jr.
// CPW 218
// 01/08/19
// Dice

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	
	// use time() to get and int value
	int elapsed_seconds = time(nullptr);

	// seed the random number generator
	srand(elapsed_seconds);

	// roll the first die
	int die1 = 1 + rand() % 6; // die1 is >=0 and < 6
	
	// roll die2
	int die2 = 1 + rand() % 6; // die2 is >=0 and < 6
	
	// wirte output to console
	cout << "Your roll: " << die1 << " " << die2 << endl;

	system("pause");

	return 0; 
	// or 
	// return EXIT_SUCCESS;
}