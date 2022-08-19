#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[7]={11,1,2,2,3,4,5};
    int freq_arr[100]={0};
    for(int x:arr){
        freq_arr[x]++;
    }
    for(int i=0;i<100;i++){
        if(freq_arr[i]>=2){
            cout<<"freq of "<<i<<":"<<freq_arr[i]<<endl;
        }
    }
    return 0;
}
