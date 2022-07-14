#include <bits/stdc++.h>
using namespace std;

int add(int array[], int size){
    int sum = 0;
    for (int i=0;i<size;i++){
        sum = sum + array[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter size of array: \n";
    cin>>size;
    int array[size];

    cout<<"Enter elements of array: \n";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    cout<<add(array,size)<<endl;

    return 0;
}