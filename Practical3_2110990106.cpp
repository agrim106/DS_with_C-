#include<iostream>
using namespace std;
void swapByValue(int a,int b)
{
 int temp = a;
    a = b;
    b = temp;
}
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swap(int *x, int *y)
{
 int swap;
 swap=*x;
 *x=*y;
 *y=swap;
}

int main(){
int x=500;
int y=100;
cout<<"Call By Value"<<endl;//Call By Value
 cout<<"Value of x is: "<<x<<endl;
 cout<<"Value of y is: "<<y<<endl;
cout<<"After Swapping using call By Value"<<endl;
 cout<<"Value of x is: "<<x<<endl;
 cout<<"Value of y is: "<<y<<endl;
swapByValue(x,y);
cout<<"Call By Address"<<endl; //Call By Address
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    cout<<"After Swaping using Pointer"<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
 cout<<"Call By Reference"<<endl;//Call BY Reference
 cout<<"Value of x is: "<<x<<endl;
 cout<<"Value of y is: "<<y<<endl;
 cout<<"After Swapping using Reference Variable"<<endl;
 swap(&x, &y);  // passing value to function
 cout<<"Value of x is: "<<x<<endl;
 cout<<"Value of y is: "<<y<<endl;
return 0;
}
