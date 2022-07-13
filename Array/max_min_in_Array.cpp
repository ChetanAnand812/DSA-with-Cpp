#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: \n";
    cin>>n;

    int array[n];

    cout<<"Enter elements of array: \n";
    for (int i=0;i<n;i++){
        cin>>array[i];
    }
    
    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i=0;i<n;i++){
        if(array[i]>maxNo){    // maxNo = max(maxNo,array[i]);
            maxNo = array[i];
        }
        if(array[i]<minNo){    // minNo = min(minNo,array[i]);
            minNo = array[i];
        }
    }
    cout<<maxNo<<" "<<minNo<<endl;
    
    return 0;
}