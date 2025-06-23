#include<iostream>
using namespace std;
 
int main()
{
    int a = 5;
    
    int *ptr = &a;

    // int &ref = a;

    // cout << ref;
    cout << &a << endl; // address of a
    cout << ptr << endl;
    cout << *ptr << endl; // derefrencing


}