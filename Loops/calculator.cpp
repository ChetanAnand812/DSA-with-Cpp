#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout << "Enter 2 numbers: \n";
    cin >> n1>> n2;

    char op;
    cout << "Enter an operator: \n";
    cin >> op;

    switch (op){
    case '+':
        cout<<"sum of n1 & n2 is: "<<n1+n2<<endl;
        break;

    case '-':
        cout<<"sub of n1 & n2 is: "<<n1-n2<<endl;
        break;

    case '*':
        cout<<"multi of n1 & n2 is: "<<n1*n2<<endl;
        break;

    case '/':
        cout<<"div of n1 & n2 is: "<<n1/n2<<endl;
        break;  
    
    case '%':
        cout<<"mod of n1 & n2 is: "<<n1%n2<<endl;
        break;
    
    default:
        cout<<"I am still learning more!";
        break;
    }
}