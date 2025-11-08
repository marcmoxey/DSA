// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  

    // int takes 4 bytes
    int A[10] = { 2,4,6,8,10,12};
    // int A[5];
    //A[0] = 12;
    //A[1] = 15;
    //A[2] = 25;

    //for (int i = 0; i < 10; i++) {
    //    cout << A[i] << endl;
    //}

    // foreach loop
    // type var : arrayName
    for (int x:A)
    {
        cout << x << endl;
    }


    //cout << sizeof(A) << endl; 
    //cout << A[2] << endl;
    //printf("%d\n", A[3]);




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
