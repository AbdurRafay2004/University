/*
    create class Vehicle2010
    create "equals" method for x,y position comparisn
*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

class Vehicle
{
public:
    int x, y;
    // Constructor without parameters
    Vehicle()
    {
        x = 0;
        y = 0;
    }

    // Move methods
    void moveUp() { y += 1; }
    void moveDown() { y -= 1; }
    void moveRight() { x += 1; }
    void moveLeft() { x -= 1; }

    // ###############
    // position broadcast method
    string position()
    {
        return "(" + to_string(x) + "," + to_string(y) + ")";
    }
    // ###############
};

// ###############[Subtask-1]
class Vehicle2010 : public Vehicle
{
public:
    // initializing as parent class' constructor
    Vehicle2010() : Vehicle() {}

    // movement mehtod
    void moveUpperRight()
    {
        moveUp();
        moveRight();
    }
    void moveUpperLeft()
    {
        moveUp();
        moveLeft();
    }
    void moveLowerRight()
    {
        moveDown();
        moveRight();
    }
    void moveLowerLeft()
    {
        moveDown();
        moveLeft();
    }

    // ###############[Subtask-2]
    bool equals(Vehicle2010 &v)
    {
        return this->x == v.x && this->y == v.y;
    }
    // ###############
};
// ###############

int main()
{
    // Part 1
    cout << "Part 1" << endl;
    cout << "------" << endl;

    Vehicle car;
    cout << car.position() << endl;
    car.moveUp();
    cout << car.position() << endl;
    car.moveLeft();
    cout << car.position() << endl;
    car.moveDown();
    cout << car.position() << endl;
    car.moveRight();
    cout << car.position() << endl;

    // Part 2
    cout << "------" << endl;
    cout << "Part 2" << endl;
    cout << "------" << endl;

    Vehicle2010 car1;
    cout << car1.position() << endl;
    car1.moveLowerLeft();
    cout << car1.position() << endl;

    Vehicle2010 car2;
    car2.moveLeft();
    cout << (car1.equals(car2) ? "true" : "false") << endl;
    car2.moveDown();
    cout << (car1.equals(car2) ? "true" : "false") << endl;

    return 0;
}