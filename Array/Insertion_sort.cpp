/* Insert an element from unsorted array to its correct  position in sorted array
12, 45, 23, 51, 19, 8
12, 45, 23, 51, 19, 8
12, 23, 45, 51, 19, 8
12, 23, 45, 51, 19, 8
12, 19, 23, 45, 51, 8
8, 12, 19, 23, 45, 51  */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: \n";
    cin>>n;

    int array[n];

    for (int i=0;i<n;i++){
        cin>>array[i];
    }

    for (int i=1;i<n;i++){
        int current = array[i];
        int j = i - 1;
        while (array[j] > current && j>=0){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = current;
    }
    for (int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}