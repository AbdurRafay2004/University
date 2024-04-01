#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string Name, Id, Dept;

public:
    Student(const string &Name, const string &Id, const string &Dept) : Name(Name), Id(Id), Dept(Dept)
    {

    }
    void details() {}
};

int main()
{
    Student s1("Alice", "65465165", "CSE");
    Student s2("bob", "3565464", "EEE");
    {
        Student s3 = s2;
        s3.setName("Carol");
        s3.setId("65465465");
        s3.setDept("CSE");
    }
    printf("##############");
    printf(s1.details());
    printf("##############");
    printf(s2.details());
    printf("##############");
    s1.advise("CSE110", "MAT110", "PHY111");
    printf("##############");
    s2.advise("BUS101", "MAT120");
    printf("##############");
    s3.advise("MAT110", "PHY111", "ENG102", "CSE111", "CSE230");

    return 0;
}


Object Destroyed with name : Carol
##############
Name: Alice
ID: 20103012
Department: CSE
##############
Name: Bob
ID: 18301254
Department: EEE
##############
Alice, you have taken 9.0 credits.
List of courses: CSE110, MATIIO, PHY111
Status: ok
##############
Bob, you have taken 6.0 credits.
List of courses: BUSIOI, MAT120
Status: You have to take at least 1 more
course.
##############
Carol, you have takan 45.0 credits.
List of courses: MATIIO, PHYIII, ENG102,
CSE111, CSE230
Status: You have to drop at icast 1 course.
Object Destroyed with name : Bob
Object Destroyed with name : Alice