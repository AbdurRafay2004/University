#include <bits/stdc++.h>
using namespace std;

class Employee{
private:
    static int employeeNo;
    int employeeID;
    string name;
    int salary;
    int annualSalary;
public:
    //with salary case
    Employee(const int &empoyeeID, const string &name, const int &salary) : employeeID(0), name(name), salary(salary){
        employeeNo++;
        cout<<"Employee "<<employeeNo<< " created with salary "<<salary<<". ";
        calculateSalary();
    }
    //whithout salary case
    Employee(const int &empoyeeID, const string &name) : employeeID(0), name(name){
        employeeNo++;
        cout<<"Employee "<<employeeNo<< " created with no salary."<<endl;
    }

    void calculateSalary(){
        annualSalary = 12*salary;
        cout<<"Annual Salary: "<< annualSalary<<endl;
    }
};
int Employee::employeeNo = 0;//initialized static member
int main(){
    Employee emp1(001, "John");
    Employee emp2(002,"Jane", 5000);
    return 0;
}