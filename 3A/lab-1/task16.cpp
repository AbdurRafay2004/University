#include <bits/stdc++.h>
using namespace std;
//for Q1
struct Rectangle {
    double width = 5.0;
    double height = 8.0;
};
//for Q2
struct Point {
    double x;
    double y;
};
void printPoint(const Point& p) {
    std::cout << "Point: (" << p.x << ", " << p.y << ")\n";
}

int main(){
    
    //question 1
    cout<<"Question 1:"<<endl;
    //
    Rectangle myRectangle;
    //structure call
    myRectangle.width;
    myRectangle.height;
    std::cout << "Rectangle Properties:\n";
    std::cout << "Width: " << myRectangle.width << " units\n";
    std::cout << "Height: " << myRectangle.height << " units\n";

    cout<<endl;
    //question 2
    cout<<"Question 2:"<<endl;
    Point point1 = {3.5, 2.0};
    Point point2 = {-1.0, 4.5};

    // Print the points using the printPoint function
    printPoint(point1);
    printPoint(point2);
    return 0;
}