//A constructor is a special member function which is called automatically when an object is created.
//It will have same name as that of class.
//It does not have a return type;

#include<iostream>
using namespace std;
class Student{
    public:
    int age;
    string name;

    Student(int age, string name){
        age = age;
        name = name;
        // cout << "Constructor called" << endl;   
    }
};

int main()
{
    Student s1(20, "Student1");
    cout << s1.age << " " << s1.name << endl;
}