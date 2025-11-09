// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


struct Rectangle {
	int length; 
	int breadth;
};

int main()
{
	int a = 10; 
	int* P; // pointer
	P = &a; 

	cout << "Address of a: " << P << endl;
	cout << "Value of a using pointer: " << *P << endl; // go to address and orint address
	cout << "Address of a using p: " << P << endl; 
	cout << "Address of a using &a: " << &a << endl;

	// point to array
	int A[5] = { 2,4,6,8,10 };
	int* p;
	p = A;

	for (int i = 0; i < 5; i++) {
		cout << p[i] << endl;
	}

	int size = 5;
	int* heapArray = new int[size];

	heapArray[0] = 10;
	heapArray[1] = 15;
	heapArray[2] = 2;
	heapArray[3] = 21;
	heapArray[4] = 31;

	for (int i = 0; i < 5; i++) {
		cout << heapArray[i] << endl;
	}

	delete[] heapArray; // must relase the memory when you finish using it (deallocating)


	int* p1;
	char p2; 
	float* p3;
	double* p4; 
	struct rectangle* p5; 


	// every pointers takes same byte no matter the data type
	cout << sizeof(p1) << endl;
	cout << sizeof(p2) << endl;
	cout << sizeof(p3) << endl;
	cout << sizeof(p4) << endl;
	cout << sizeof(p5) << endl;


	return 0; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
