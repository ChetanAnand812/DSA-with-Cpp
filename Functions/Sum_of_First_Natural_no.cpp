#include <iostream>
using namespace std;

int Sum(int n){
    int sum=0;
    for (int i=1;i<=n; i++){
        int sum = sum + i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter n: \n";
    cin>>n;

    cout<<(n*(n+1)/2);
    return 0;
}