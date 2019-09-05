/*
 *Chapter 9 Pointers
 *  10.    Reverse Array 
 Write a function that accepts an  int  array and the array’s
 *  size as arguments. The function should create a copy of the array,
 *  except that the element values should be reversed in the copy.
 *  The function should return a pointer to the new array.
 *  Demonstrate the function in a complete program. 
 */

/* 
 * File:   main.cpp
 * Author: Meghan
 *
 *
 */

#include <cstdlib>
#include<iomanip>
#include<fstream>
#include<iostream>

using namespace std;

/*
 * 
 */

int * reverseArr(int *, int);
void printArray(int [], int);

int main() {
    int arr[]={ 1, 2, 3, 4, 5 };
    int size = (sizeof (arr) / sizeof (*arr));

    reverseArr(arr, size);
    printArray(arr, size);
    return 0;
}

int * reverseArr(int *ar, int size) {
    const int SIZE = 5;
    short numbers[] = {10, 20, 30, 40, 50};
    short *pInt = numbers;
    for (int i = 0; i < SIZE; i++) {
        cout << *pInt++ << " ";
    }
    cout << endl;
    pInt = numbers;
    for (int i = 0; i < SIZE; i++) {
        cout << pInt[i] << " "; //using pointer as the array with index i

    }
    for (int i = 0; i < SIZE; i--) {
        cout << *(pInt + i) << "  ";
    }
    cout << endl;
}

void printArray(const int arr[], int size) {
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}
