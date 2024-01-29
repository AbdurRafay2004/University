#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}//using ternary operator instead of if-else.
double calculateCircleArea(double radius) {
    return M_PI * pow(radius, 2);
}
int main(){
    //question 1
    cout<<"Question 1:"<<endl;
    int num1, num2;

    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    int result = max(num1, num2);
    std::cout << "The larger of the two numbers is: " << result << "\n";

    cout<<endl;
    //question 2
    cout<<"Question 2:"<<endl;
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = calculateCircleArea(radius);
    std::cout << "The area of the circle with radius " << radius << " is: " << area << "\n";

    return 0;
}