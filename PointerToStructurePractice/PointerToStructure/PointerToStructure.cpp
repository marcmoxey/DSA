// PointerToStructure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


struct Rectangle
{
	int length;
	int breadth; 
};

int main()
{
   
	struct Rectangle r = { 10,5 };
	cout << r.length << endl;
	cout << r.breadth << endl;
	

	// cant use (.) have to use -> for pointers
	struct Rectangle* p = &r;
	cout << p->length << endl;
	cout << p->breadth << endl;
	//cout << (*p).length<< endl;
	//cout << (*p).breadth << endl;


	// heap 
	Rectangle *t;
	t = new Rectangle;
	t->length = 15;
	t->breadth = 7;

	cout << t->length << endl;
	cout << t->breadth << endl;

	delete t;


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
