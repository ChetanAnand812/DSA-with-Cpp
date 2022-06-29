#include <iostream>
using namespace std;

int main() {
    int a = 12;
    cout<<"Size of a is " << sizeof(a)<<endl;

    float b = 3.1;
    cout<<"b = " << b<<endl; 
    cout<<"Size of b is "<<b<<endl;

    char c;
    cout<<"Size of char is "<<sizeof(c)<<endl;

    bool d;
    cout<<"Size of bool is "<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"Size of shortint "<<sizeof(si)<<endl;
    cout<<"Size of long int "<<sizeof(li)<<endl;
}