#include <bits/stdc++.h>
using namespace std;

int main(){
    //question 1
    cout<<"Question 1:"<<endl;
    int i = 1;
    int factorial = 1; //4!
    while(i<5){
        factorial *= i; //factorial = factorial x i
        i++;
    }
    cout<<"Factorial of 4 = "<< factorial<<endl;
    cout<<endl;

    //question 2
    cout<<"Question 2:"<<endl;
    int num1 = 12, num2 = 5, remainder = 0;

    
    while(num2!=0){
        remainder = num1%num2;
        num1 = num2;
        num2 = remainder; 
    }// euclid's algorithm
    cout << "The greatest common divisor (GCD) of 12, 5 is: " << num1 << endl;
    
    return 0;
}