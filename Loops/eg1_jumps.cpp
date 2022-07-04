#include <iostream>
using namespace std;

int main(){
    int pocketmoney=3000;
    for (int date=1;date<=30;date++){
        
        if (date%2==0){
            continue;    // skip to the next iternation of the loop
        }
        if (pocketmoney==0){
            break;           // Terminate the loop
        }
        cout<< "Go out today!"<<endl;
        pocketmoney=pocketmoney-300;
    }
    return 0;
}