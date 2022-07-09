#include <iostream>
using namespace std;

int Sum(int n){
    int sum=0;
    for (int i=1;i<=n; i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter n: \n";
    cin>>n;

    cout<<Sum(n)<<endl;
    return 0;
}