/*
    write BBAStudent class for Output:
    Name: default Department: BBA
    Name: Humpty Dumpty Department: BBA
    Name: Little Bo Peep Department: BBA

*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    string department;

public:
    Student(string name = "Just a student", string dept = "nothing") : name(name), department(dept) {}

    void setDepartment(string dept)
    {
        department = dept;
    }
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string toString()
    {
        return "Name: " + name + " Depertment: " + department;
    }
};

// ######################
class BBAStudent : public Student
{
public:
    // BBAStudent(){
    //     setName("default");
    //     setDepartment("BBA");
    // }
    BBAStudent(string name = "default") : Student(name, "BBA") {}
};
// ######################

int main()
{
    cout << BBAStudent().toString() << endl;
    cout << BBAStudent("Humpty Dumpty").toString() << endl;
    cout << BBAStudent("Little Bo Peep").toString() << endl;
    return 0;
}
