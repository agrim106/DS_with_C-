#include<iostream>
using namespace std;
void delindex(int arr[],int size,int index){
    for (int i = index; i <size; i++)
    {
        arr[i]=arr[i+1];
    }

}
void printarr(int arr[],int size){
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
int size;
cout<<"Enter Size Of The Element"<<endl;
cin>>size;
int arr[size];
for (int i = 0; i < size; i++)

{
    cout<<"Enter Element "<<i<<endl;
    cin>>arr[i];
}

int index;
cout<<"Enter The Index You Want to Delete "<<endl;
cin>>index;
cout<<"Before Deletion "<<endl;
printarr(arr,size);
delindex(arr,size,index);
size-=1;
cout<<"After Deletion"<<endl;
printarr(arr,size);


return 0;
}
