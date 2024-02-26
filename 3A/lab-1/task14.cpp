#include <bits/stdc++.h>
using namespace std;

int main(){
    //question 1
    cout<<"Question 1:"<<endl;
    float numbers[5] = {1.2, 3.5, 7.0, 4.8, 9.2};
    std::cout << "Array elements:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << ", ";
    }

    std::cout << "\n";
    cout<<endl;

    //question 2
    cout<<"Question 2:"<<endl;
    int evenNumbers[10];
    for (int i = 1; i <= 10; ++i) {
        evenNumbers[i] = 2 * i;
    }
    std::cout << "First 10 even numbers:\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << evenNumbers[i] << ", ";
    }

    std::cout << "\n";

    return 0;
}