/*
    Problem: Car Rental System
*/
#include <bits/stdc++.h>
using namespace std;

class Car{
private:
    static int carNo; //static member to track amount of cars
    string model, make;
    float rentalFee;
public:
    //with rentalFee
    Car(const string &model,const string &make,const float &rentalFee) : model(model), make(make), rentalFee(0){
        carNo++;
        cout<<"Car "<< carNo <<" created with rental fee "<<rentalFee<<endl;
        cout<<"Rental Fee: "<<rentalFee<<"."<<endl;
    }
    //without rentalFee
    Car(const string &model,const string &make) : model(model), make(make){
        carNo++;
        cout<<"Car "<< carNo <<" created with no rental fee."<<endl;
    }
};
int Car::carNo=0;

int main(){
    Car sedan("Sedan", "Toyota");
    Car suv("SUV", "Ford", 50);
    return 0;
}