#include <bits/stdc++.h>
using namespace std;

int main(){

    int size;
    cout<<"Enter size of array: \n";
    cin>>size;

    int array[size];
    
    cout<<"Enter elements of array: \n";
    // input
    for (int i=0;i<size; i++){
        cin>>array[i];
    }

    cout<<"Your array is: \n";
    //output
    for (int i=0;i<size; i++){
        cout<<array[i]<<" ";
    }
    
    return 0;
}