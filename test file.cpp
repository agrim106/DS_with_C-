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
        cout<<"Enter name  "<<endl;
        cin>>name;
        cout<<"Enter Gender "<<endl;
        cin>>gender;
        cout<<"Enter subject  "<<endl;
        cin>>subject;
        cout<<"Enter marks  "<<endl;
        cin>>marks;

    }

    void GetData()
    {
        cout << "Name of student is " << name << endl;
        cout << "gender of student is " << gender << endl;
        cout << "subject of student is " << subject << endl;
        cout << "marks of student is " << marks << endl;
    }
};

int main()
{
    Data Amit;
    Amit.SetData();
    Amit.GetData();
    return 0;
}
