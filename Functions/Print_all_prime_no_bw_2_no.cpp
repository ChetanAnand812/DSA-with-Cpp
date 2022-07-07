#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int n){
    bool flag = 0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a, b;
    cout<<"Enter a & b: \n";
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}