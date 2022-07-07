#include <iostream>
using namespace std;

int fact(int n){
    int factorial =1;
    for (int i=1;i<=n;i++){
        factorial = factorial * i;
    }
    return factorial;   
}

int main(){
    int n, r;
    cout<<"Enter n & r: \n";
    cin>>n>>r;

    cout<<fact(n)/(fact(r)*fact(n-r));
    
    return 0;
}