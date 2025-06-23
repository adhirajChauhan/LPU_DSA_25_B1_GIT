#include<iostream>
using namespace std;

void test(string name = "John"){
    cout << "Hello " << name;
}
int main()
{
    test("David");
}