#include <bits/stdc++.h>
using namespace std;

int main(){
    //question 1
    cout<<"Question 1:"<<endl;
    for (int i = 1; i <= 10; ++i) {
        // Skips 4 and 7
        if (i == 4 || i == 7) {
            continue;
        }

        std::cout << i << " ";
    }

    std::cout << "\n";
    cout<<endl;
    //question 2
    cout<<"Question 2:"<<endl;
    int i = 1;
    while (i <= 10) {
        if (i % 5 == 0) {
            ++i;
            continue;
        }

        std::cout << i << " ";
        ++i;
    }

    std::cout << "\n";
    return 0;
}