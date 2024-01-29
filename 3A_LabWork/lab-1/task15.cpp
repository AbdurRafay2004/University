#include <bits/stdc++.h>
using namespace std;

int main(){
    //question 1
    cout<<"Question 1:"<<endl;
    int numbers[6] = {1, 2, 3, 4, 5, 6};

    std::cout << "Original array:\n";
    for (int i = 0; i < 6; ++i) {
        std::cout << numbers[i] << " ";
    }

    std::cout << "\n";

    for (int i = 0; i < 3; ++i) {
        int temp = numbers[i];
        numbers[i] = numbers[5 - i];
        numbers[5 - i] = temp;
    }

    std::cout << "Reversed array:\n";
    for (int i = 0; i < 6; ++i) {
        std::cout << numbers[i] << " ";
    }

    std::cout << "\n";
    cout<<endl;

    //question 2
    cout<<"Question 2:"<<endl;
    char myString[] = "Hello, World!";
    std::cout << "Original string: " << myString << "\n";

    myString[9] = 'R';

    std::cout << "Modified string: " << myString << "\n";

    return 0;
}