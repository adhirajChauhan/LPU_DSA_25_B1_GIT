#include<iostream>
using namespace std;

void add(float num2){
    cout << "1";
}

void add(int num1){
    cout << "2";
}

int add(int num1, int num2){
    return num1;
}
 
int main()
{
    // add(5.5f);
}