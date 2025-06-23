#include<iostream>
using namespace std;
//  class className {

//  };
class Student{
    public: 
    string name;
    int age;
    int id;

    // void getAge(){
    //     cout << "Age of student is " << age << endl;
    // }
    int getAge(){
        return age;
    }
};
int main()
{
    Student s1;
    Student s2;

    s1.name = "Person1";
    s2.age = 20;

    cout << s2.getAge();


}



//Create a class Box
//Define data members - length, width, height
//define member function - calculateArea, calculateVolume
// Create objects box1 and box2
//calculate and print area and volume for both boxes