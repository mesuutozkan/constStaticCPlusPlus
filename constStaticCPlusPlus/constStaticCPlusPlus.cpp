#include <iostream>

using namespace std;

int main()
{
	int divide, divided, output;

	cin >> divided;
	cin >> divide;

	// try - catch can be used for catching errors. like dividing a number to 0:

	try								 // insert error side.
	{
		if (divide == 0)
			throw 99;				 // identify error code.		
		output = divided / divide;
	}
	catch (int errorCode)			// generate error code based situational algorithm.	
	{
		cout << "Error code: " << errorCode << endl;
	}

	return 0;
}