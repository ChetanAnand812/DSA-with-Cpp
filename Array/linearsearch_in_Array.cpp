#include <bits/stdc++.h>
using namespace std;

int linearSearch(int array[], int n, int key){
    for (int i=0;i<n;i++){
        if (array[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter size of array: \n";
    cin>>n;

    int array[n];

    cout<<"Enter elements of array: \n";
    for (int i=0;i<n;i++){
        cin>>array[i];
    }

    int key;
    cout<<"Enter key: \n";
    cin>>key;

    cout<<linearSearch(array, n, key)<<endl;

    return 0;
}