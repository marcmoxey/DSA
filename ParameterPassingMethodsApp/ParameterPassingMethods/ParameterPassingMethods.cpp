// ParameterPassingMethods.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

// call by value
int add(int a, int b) {
    int output; 
    output = a + b;

    return output;
}

// call by address
void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// call by refernece - may be come and inline function
void swapRef(int& x, int& y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}


int main()
{
    int num1 = 10;
    int num2 = 15;
    int sum;

    sum = add(num1, num2);
    cout << "Sum is: " << sum << endl;


    swap(&num1, &num2);
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    swapRef(num1, num2);
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

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
