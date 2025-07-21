#include<iostream>
using namespace std;
 //A virtual function is a member function in base class that we expect to redefine in derieved class
 class Base{
    public:
    virtual void print(){
        cout << "From base " << endl;
    }
 };

 class Derieved : public Base{
    public:
    void print() override{
        cout << "From Derieved " << endl;
    }
 };
int main()
{
    Derieved d1;
    Base *b = &d1 ;
    b->print();

 
}