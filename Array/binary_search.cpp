#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int n, int key){
    int start = 0;
    int end = n;

    while (start<=end){
        int mid = (start + end)/2;

        if(array[mid] == key){
            return mid;
        }
        else if(array[mid] > key){
            end = mid - 1;
        }
        else{                                 // Time complexity -- O(log n base 2)
            start = mid + 1;
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

    cout<<binarySearch(array,n,key)<<endl;

}