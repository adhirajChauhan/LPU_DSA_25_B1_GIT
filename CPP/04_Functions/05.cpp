#include<iostream>
using namespace std;
 
void myfunc(int &x){
    x++;
    cout << "Increment done, new value of x is " << x << endl;
}
int main()
{
    int a = 5;
    myfunc(a);
    cout <<  "new value of is a : " << a << endl;

}