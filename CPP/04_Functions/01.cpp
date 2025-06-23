#include<iostream>
using namespace std;
 
// void func1(){
//     func2();
//     cout << "1";
// }

// void func2(){
//     cout << "2";
// }

int add(int a, int b){
    
    int ans = a + b;

    return ans;
    
}

int main()
{
    cout << add(4,5);
}