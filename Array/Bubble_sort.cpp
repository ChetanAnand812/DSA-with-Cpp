/* Bubble Sort --> Reapetedly swap two elements if they are in wrong order(L > R)
iteration 1
12, 45, 23, 51, 19, 8
12, 23, 45, 51, 19, 8
12, 23, 45, 51, 19, 8
12, 23, 45, 19, 51, 8
12, 23, 45, 19, 8, 51

n - 1 iterations before we get our sorted array
do upto iteration 5 (sorted array)   */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array; \n";
    cin>>size;

    int array[size];

    for (int i=0;i<size;i++){
        cin>>array[i];
    }
    
    int counter = 1;
    while (counter < size){
        for (int i=0;i<size-counter;i++){
            if(array[i] > array[i+1]){
                int temp = array[i];
                array[i] = array [i+1];
                array[i+1] = temp;
            }
        }
        counter++;
    }
    
    for (int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}