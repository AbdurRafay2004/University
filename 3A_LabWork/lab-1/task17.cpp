#include <bits/stdc++.h>
using namespace std;

int main(){
    //question 1
    cout<<"Question 1:"<<endl;
    int myInt = 42;
    float myFloat = 3.14;
    char myChar = 'A';

    int* intPointer = &myInt;
    float* floatPointer = &myFloat;
    char* charPointer = &myChar;

    std::cout << "Address of myInt: " << intPointer << "\n";
    std::cout << "Address of myFloat: " << floatPointer << "\n";
    std::cout << "Address of myChar: " << static_cast<void*>(charPointer) << "\n";
    
    cout<<endl;
    //question 2
    cout<<"Question 2:"<<endl;
    int myArray[] = {10, 20, 30, 40, 50};

    int* arrayPointer = myArray;

    std::cout << "Array elements using pointer:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i + 1 << ": " << *arrayPointer << "\n";
        arrayPointer++; // Move the pointer to the next element
    }

    return 0;
}