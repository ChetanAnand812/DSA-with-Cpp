#include <iostream>
using namespace std;

int main(){

    int sidea, sideb, sidec;
    cout<<"Enter sides of traingle: \n";
    cin>> sidea >> sideb >> sidec;

    if (sidea == sideb && sideb == sidec){
        cout<<"This is an equilateral triangle \n";
    }
    else if (sidea == sideb || sideb == sidec || sidec == sidea){
        cout<<"This is an isosceles triangle \n";
    }
    else{
        cout<<"This is a scalene triangle. \n ";
    }
    
    return 0;
}
