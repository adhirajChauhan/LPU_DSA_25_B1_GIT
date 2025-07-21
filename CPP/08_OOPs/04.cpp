#include<iostream>
using namespace std;

//-----------------------------
//Multilevel 

// class A{
//     public: 
//     int a = 5;
// };

// class B : public A{

// };

// class C : public B{

// };
//-----------------------------
//Multiple

// class A{
//     public:
//     void print(){
//         cout << "From A" << endl;
//     }
// };

// class B{
//     public:
//     void print(){
//         cout << "From B" << endl;
        
//     }
// };

// class C : public A, public B{

// };

//-----------------------------

//Hierarchical

class A{

};


class B : public A{

};

class C : public A{
    
};


 
int main()
{
    // B b1;
    C c1;

    
 
}