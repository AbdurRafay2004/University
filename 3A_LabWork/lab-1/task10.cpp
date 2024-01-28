#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    //question 1
    cout<<"Question 1:"<<endl;
    cout<< "First 10 Multiples of 3: {";
    for(int i= 1; i<=10; i++){
        //formula for multiples of 3
        int multiples = 3 * i;
        cout<< multiples;
        if(i!=10){
            cout<<", ";
        }
    }
    cout<< "}"<< endl;
    cout<<endl;
    //question 2
    cout<<"Question 2:"<<endl;
    cout<< "Square of 1 to 5: "<<endl;
    for(int i = 1; i<=5; i++){
        //formula
        int square = pow(i,2);
        cout<<"               "<< i << "x"<< i << " : " <<square<<endl;
    }
    return 0;
}