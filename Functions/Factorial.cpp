#include <iostream>
using namespace std;

void fact(int n){
    int factorial=1;
    for (int i=1;i<=n;i++){
        factorial = factorial * i;
    }
    cout<<factorial<<endl;
    return;
}

int main(){
    int n;
    cout<<"Enter n: \n";
    cin>>n;

    fact(n);

    return 0;
}