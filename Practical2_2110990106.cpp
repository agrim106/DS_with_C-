#include <iostream>
using namespace std;
int findinterest(int n1,int n2,string n3){
    double simple_interest,total_amount;
    if (n3=="M"){
            simple_interest=n1*0.1*(n2)/365;
            total_amount=n1+simple_interest;
            cout<<simple_interest<<endl;
            cout<<total_amount<<endl;

    }
    else{
            simple_interest=n1*0.2*n2/365;
            total_amount=n1+simple_interest;
            cout<<simple_interest<<endl;
            cout<<total_amount<<endl;
    }
}
int main(){
    int a,b;
    string c;
    cout<<"enter priniciple amount "<<endl;
    cin>>a;
    cout<<"enter number of days "<<endl;
    cin>>b;
    cout<<"enter M or F"<<endl;
    cin>>c;
    findinterest(a,b,c);

}
