#include <iostream>
using namespace std;

int Add(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    int n1,n2;
    cout<<"Enter n1 & n2: \n";
    cin>>n1>>n2;

    cout<<Add(n1,n2)<<endl;
    return 0;
}
