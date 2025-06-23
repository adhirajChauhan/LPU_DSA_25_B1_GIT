#include<iostream>
using namespace std;
 
int main()
{
    int num1, num2;
    char oper;

    cout << "Enter an operator (+, -, *, /) : ";
    cin >> oper;

    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;

    switch(oper){

        case '+' :
        cout << num1 + num2 << endl;
        break;

        case '-':
        cout << num1 - num2 << endl;
        break;

        default :
        cout << "Invalid "; 

    }
}