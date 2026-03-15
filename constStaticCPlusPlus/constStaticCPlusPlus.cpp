#include <iostream>

using namespace std;

/*
static keyword provides only 1 memory space for variable and remains same memory space with its value.
Variable's value is same at variables memory at any time when accessing same variable.
*/
void func1()
{
	static int counter = 0;
	counter++;

	cout << "count: " << counter << endl;
}

void func2()
{
	static int counter = 0;
	counter++;

	cout << "count: " << counter << endl;
}

int main()
{
	func1();
	func1();
	func1();
	/*
	output:
	1
	2
	3
	*/

	func1();
	func1();
	func1();
	
	func2();

	func1();

	/*
	output:
	4
	5
	6
	1
	7
	*/

	//const variables are declared once for constant numbers. It can not change after declaration.
	//declaration + initialization must be done at first for constants.

	const int pi = 3.14;


	return 0;
}