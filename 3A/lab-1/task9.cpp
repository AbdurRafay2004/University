#include <bits/stdc++.h>
using namespace std;

int main(){
    //question 1
    cout<<"Question 1:"<<endl;
    int age;
    double height;
    age = 18;
    height = 6.6;//feet

    if(age<18 && height<3){
        cout<<"Not eligible"<<endl;
    }
    else if(age >= 18 && height>3 && height<10){
        cout<<"Eligible"<<endl;
    }
    //question 2
    cout<<"Question 2:"<<endl;
    double cost, weight;
    // cost = 100;
    weight = 5;

    if(weight<5){
        cost = 100;
        cout<<"Cost = "<< cost <<endl;
    }
    else if(weight>=5 && weight < 20){
        cost = 500;
        cout<<"Cost = "<< cost <<endl;
        
    }
    else if(weight>=20){
        cost = 1000;
        cout<<"Cost = "<< cost <<endl;
    }

    return 0;
}