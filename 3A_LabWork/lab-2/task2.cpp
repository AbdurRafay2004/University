#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Customer{
    private:
    string name;
    int age = 0;
    double ticketPrice = 0;
    int numberOfTickets = 0;
    public:
    Customer(){
        cout<<"Welcome to ABC Memorial Park"<<endl;
    }
    void buyTicket(string n, int a){
        if(numberOfTickets>=3){ return;}

        name = n;
        age = a;
        if(age>10){
            ticketPrice += 100;
        } else ticketPrice += 50;
        numberOfTickets++;
        cout<<"Successfully purchased a ticket for"<<" "<<name<<"!"<<endl;
    }
    void showDetails(){
        cout<<"Amout of tickets: "<<numberOfTickets<<endl;
        cout<<"Total price: "<<ticketPrice<<" Taka"<<endl;
    }

};
int main(){
    cout<<endl<<"1-------------------------"<<endl;
    Customer customer1;
    cout<<"2-------------------------"<<endl;
    customer1.buyTicket("Bob", 23);
    customer1.buyTicket("Henry", 7);
    customer1.buyTicket("Alexa", 30);
    customer1.buyTicket("Jonas", 43);
    cout<<"3-------------------------"<<endl;
    customer1.showDetails();
    cout<<"4-------------------------"<<endl;
    Customer customer2;
    cout<<"5-------------------------"<<endl;
    customer2.buyTicket("Harry", 60);
    customer2.buyTicket("Tomas", 28);
    cout<<"6-------------------------"<<endl;
    customer2.showDetails();
    return 0;
}