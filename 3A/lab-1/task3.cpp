#include <iostream>
using namespace std;
int main(){
    //question 1
    cout<< "Question 1:"<< endl;
    int a,b;//using two variables
    a = 12;
    b = 4;//added values in each variables

    cout << "12 + 4 = "<< 12+4 << endl<<endl;//prints out the addition of a and b and using endl to go to a new line

    //question 2
    cout<< "Question 2:"<< endl;
    int w, l; //here w = height/width and l= length
    w = 4;
    l = 8;

    int area_of_rect = w*l;

    cout << "Area of rectangle: " << endl << "Width = 4\nLength = 8" <<endl<< "width x length = " 
    << area_of_rect << endl;
    /*the formula of area of rectangle is A = wl, where w is the width of the rectangle and l is the length. 
    By multiplying the values of widh and length we can get the Area of rectangle.*/
    return 0;
}