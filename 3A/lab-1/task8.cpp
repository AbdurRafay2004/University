#include <bits/stdc++.h>
using namespace std;

int main(){
    //question 1
    cout<<"Question 1:"<<endl;
    int num = 2;
    if (num%2==0){
        cout<< "Is even" << endl;
    }
    else 
    cout << "Is odd" << endl;
    cout<<endl;

    //question 2
    cout<<"Question 2:"<<endl;
    int num1 = 5, num2 = 10;
    if(num1 > num2){
        cout<<"Num1 is greater"<<endl;
    }
    else if(num1 < num2){
        cout<<"Num2 is greater"<<endl;
    }
    else{
        cout<<"Both are equal"<<endl;
    }
    return 0;
}