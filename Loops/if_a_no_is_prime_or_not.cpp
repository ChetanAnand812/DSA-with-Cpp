#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: \n";
    cin >> n;
    int i;

    for (i=2;i<n;i++){
        if (n%i==0){
            cout << "Non prime \n";
            break;
        }
    }
    if (i==n){
        cout << "Prime \n";
    }
    return 0;
}