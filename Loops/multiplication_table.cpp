#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: \n";
    cin>>n;

    for (int i=1; i<=10;i++){
        int mul = n*i; 
        cout<<mul<<endl;
    }
    
    return 0;
    
}