#include <iostream>
#include <string>
using namespace std;
class person
{
    string name;
    int age;
public:
    void getdata(void);
    void putdata(void);
};
void person :: getdata()
{
    cout<<"enter name"<<endl;
  getline(cin,name);
    cout<<"enter age"<<endl;
    cin>>age;
}
void person ::putdata()
{
    cout<<"name-"<<name<<endl;
    cout<<"age--"<<age<<endl;
}
int main()
{
    int a;
    person per[100];
    cout<<"enter no of entries to be entered"<<"\t";
    cin>>a;
    for (int i=0;i<a;i++)
    {
        per[i].getdata();
    }
for (int j=0;j<a;j++)
    {
        per[j].putdata();
    }
}

