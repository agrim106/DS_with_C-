#include <iostream>
using namespace std;

int main()
{
  int arr[1000],size,i,inserted_ele,index;

cout<<"Enter the size of the array :";
cin>>size;

cout<<"Enter the elements :";
for(i=0;i<size;i++)
  {
    cin>>arr[i];
  }

  cout<<"Enter the element you want to insert :";
  cin>>inserted_ele;

  cout<<"Enter the index for inserted element :";
  cin>>index;

  for(i=size;i>index;i--)
  {
      arr[i]=arr[i-1];
  }
  arr[index]=inserted_ele;

  cout<<"New array is :";
  for(i=0;i<size+1;i++)
  {
      cout<<arr[i]<<' ';
  }
}
