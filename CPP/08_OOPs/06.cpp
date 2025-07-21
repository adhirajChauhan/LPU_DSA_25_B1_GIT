#include<iostream>
using namespace std;
 
 class Base{
    public:
    void print(){
        cout << "From Base" << endl;
    }
 };

 class Child : public Base{
    public:
    void print(){
        cout << "From Child" << endl;
    }
 };

int main()
{
    Child c1, c2;
    c1.print();

    c2.Base::print();

}