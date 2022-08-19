#include <iostream>
using namespace std;

class Data
{
private:
    string name;
    char gender;
    string subject;
    float marks;

public:
    void SetData(void)
    {
        cout<<"Enter name "<<endl;
        cin>>name;
        cout<<"Enter Gender "<<endl;
        cin>>gender;
        cout<<"Enter Subject "<<endl;
        cin>>subject;
        cout<<"Enter Marks "<<endl;
        cin>>marks;

    }

    void GetData()
    {
        cout << "Name   " << name << endl;
        cout << "gender   " << gender << endl;
        cout << "subject   " << subject << endl;
        cout << "marks obtained by student are  " << marks << endl;
    }
};

int main()
{
    Data Agrim;
    Agrim.SetData();
    Agrim.GetData();
    return 0;
}
