#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    int a =34;
    cout<<"The value of a was: "<<a;
    a=45;
    cout<<"The value of a is: "<<a;
    //constants in c++
    const int a=3;
    cout<<"the value of a was: "<<a<<endl;
    a= 45; // you will get an error because a is constant
    cout<<"the value of a is: "<<a<<endl;
}
