#include <iostream>
#include <exception>

using namespace std;

int numerical_error(int x, int y)
{
	if (y == 0) throw 0;
	return x / y;
}

//EXAMPLE 1

int main()
{
	//example 1 catch by reference (BEST PRACTICE)
	try
	{
		numerical_error(10, 0);
	}
	catch (int& z)
	{
		cout << "Error, you can't divide by: " << z;
	}

	cin.get();
	return 0;
}


//EXAMPLE2

//int main()
//{
//	//example 2 input validation
//	//NOT BEST PRACTICE
//	int input;
//	cout << "Program start..." << endl;
//	cout << endl;
//
//	try
//	{
//		cout << "Input validation example." << endl;
//		throw 1;
//		cout << "we are getting out of the try block" << endl;
//	}
//	catch (int i)
//	{
//		cout << "Error, the exception number caught is: " << i << endl;
//	}
//	cout << "Now out of the catch block" << endl;
//
//	system("PAUSE");
//	return 0;
//}

