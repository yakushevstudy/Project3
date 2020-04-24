#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main()
{
	cout << "Hello world" << endl;
	setlocale(LC_ALL, "ru");
	int choice;
	float a, b;
	cout << "Enter 2 numbers";
	cin >> a >> b;

	cout << "Choose operation" << endl;
	cout << "1) Sum" << endl
		<< "2) Subtraction" << endl
		<< "3) Product" << endl
		<< "4) Difference" << endl
		<< "5) Square root" << endl
		<< "6) Power" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Sum=" << a + b << endl;
		break;
	case 2:
		cout << "Subtraction=" << a - b << endl;
		break;
	case 3:
		cout << "Product=" << a * b << endl;
		break;
	case 4:
		if (b < 0)cout << "Difference=" << a / b << endl;
		else (b == 0);
		cout << "Ïîðà â äóðêó" << endl;
		break;
	case 5:
		cout << "Square root=" << (sqrt(a)) << endl;
		break;
	case 6:
		cout << "Power=" << (pow(a, b)) << endl;
		break;
	default:
		cout << "Error" << endl;
		break;





	}




}