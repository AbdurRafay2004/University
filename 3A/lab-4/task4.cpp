#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape {
private:
    string name;
    float base, height, radius;
public:
    Shape(string nm="", float b = 0.0, float h=0.0, float r=0.0) : 
    name(nm), base(b), height(h), radius(r){}

    //setter
    void set_name(string nm){this->name= nm;}
    void set_base(float b){this->base= b;}
    void set_height(float h){this->height= h;}
    void set_radius(float r){this->radius= r;}
    //getter
    string get_name(){return name;}
    float get_base(){return base;}
    float get_height(){return height;}
    float get_radius(){return radius;}


    virtual void details() = 0; 

};

class Triangle: public Shape{
public:
    Triangle(float b, float h):Shape("Details of Triangle:", b, h, 0) {}

    void details() {
        cout<< get_name()<< endl;
        cout<< "Base = "<< get_base() <<endl;
        cout<< "Height = " << get_height() <<endl;
        cout<< "Radius = " << get_radius() <<endl;
        cout<< "Area = " << (get_base()*get_height())/2 << endl;
    }
};

class Circle: public Shape{
public:
    Circle(float r): Shape("Details of Circle", 0, 0, r){}

    void details(){
        cout<< get_name()<< endl;
        cout<< "Base = "<< get_base() <<endl;
        cout<< "Height = " << get_height() <<endl;
        cout<< "Radius = " << get_radius() <<endl;
        cout<< "Area = " << M_PI * pow(get_radius(), 2) << endl;
    }

};

int main() {
    Shape *sp;
    Shape* adsp;

    Triangle tng(3.6, 5.5);
    sp = &tng;
    sp->details();

    cout<<endl;

    Circle cir(3.6);
    adsp = &cir;
    adsp->details();

    return 0;
}
