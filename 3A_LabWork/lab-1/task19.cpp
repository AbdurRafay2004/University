#include <bits/stdc++.h>
using namespace std;

void printGreeting(const std::string& name, int age) {
    std::cout << "Hello, " << name << "! You are " << age << " years old.\n";
}
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}
int main(){
    //question 1
    cout<<"Question 1:"<<endl;
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    printGreeting(name, age);

    cout<<endl;
    //question 2
    cout<<"Question 2:"<<endl;
    float base, height;

    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;

    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // float area = ;
    std::cout << "The area of the triangle with base " << base 
    << " and height " << height << " is: " 
    << calculateTriangleArea(base, height) << "\n";//function call
    cout<<endl<<endl;
    return 0;
}