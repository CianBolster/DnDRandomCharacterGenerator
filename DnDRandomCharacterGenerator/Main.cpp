#include "Character.h"
#include <iostream>

using namespace std;

int main() {

	Character c{ 3,2 };
	cout << c.getClass() << endl;
	cout << c.getLevel() << endl;
	system("pause");
	return 0;
}