/*
    Problem: Student Information System
*/
#include <bits/stdc++.h>
using namespace std;

class Student{
private:
    static int studentNo;//static member to track amount of students
    int rollNumber;
    string name;
    float marks;
public:
    //without marks
    Student(const int &rollNumber,const string &name) : rollNumber(0), name(name){
        studentNo++;
        cout<<"Student "<<studentNo<<" created with no marks."<<endl;
    }
    //with marks
    Student(const int &rollNumber,const string &name,const float &marks) : rollNumber(0), name(name), marks(marks){
        studentNo++;
        cout<<"Student "<<studentNo<<" created with marks "<< marks <<" ";
        calculateGrade();
    }

    void calculateGrade(){
        if(marks >= 90){
            cout << "Grade: A." <<endl;
        } else if (marks >= 80){
            cout<< "Grade: B."<< endl;
        } else if (marks >= 70){
            cout<< "Grade: C."<< endl;
        } else if (marks >= 60){
            cout<< "Grade: D."<< endl;
        } else {
            cout<<"Grade: F."<< endl;
        }
    }
};
int Student::studentNo = 0;

int main(){
    Student student1(101, "Tom");
    Student student2(102,"Lisa", 75);
    return 0;
}