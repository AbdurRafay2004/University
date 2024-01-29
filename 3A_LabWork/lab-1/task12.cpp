#include <bits/stdc++.h>
using namespace std;

int main(){
    //question 1
    cout<<"Question 1:"<<endl;
    int input;
    while(true){
        cout<< "Enter -1 to exit: ";
        cin >> input;
        if(input == -1) break;
    }
    cout<< "Your are free now!"<< endl;
    cout<<endl;
    //question 2
    cout<<"Question 2:"<<endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " ";

        // Stop the loop when it reaches 6
        if (i == 6) {
            std::cout << "\nStopping the loop at 6.\n";
            break;
        }
    }
    return 0;
}