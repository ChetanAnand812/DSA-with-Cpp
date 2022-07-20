/* Selection Sort --> Find the minimum element in unsorted array and swap it with element at begining
12, 45, 23, 51, 19, 8
8, 45, 23, 51, 19, 12
8, 12, 23, 51, 19, 45
8, 12, 19, 51, 23, 45
8, 12, 19, 23, 45, 51
8, 12, 19, 23, 45, 51  */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array: \n";
    cin>>size;

    int array[size];
    // input array
    for (int i=0;i<size;i++){
        cin>>array[i];
    }
    //for swapping
    for (int i=0;i<size-1;i++){
        for (int j=i+1;i<size;i++){
            if(array[j]<array[i]){
                int temp =array[j];    
                array[j]=array[i];
                array[i]=temp;
            }
        }
        
    }
    
    for (int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    
    return 0;
}