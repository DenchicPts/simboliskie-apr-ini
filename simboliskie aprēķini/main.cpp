#include "liba.h"



int main() {

	int userChoice(0);
	cin >> userChoice;

	switch (userChoice)
	{
	case 1:
		uzdevums_A(); 
		break;
	case 2:
		uzdevums_B();
		break;
	default:
		break;
	}

	

	return 0;
}