#include <iostream>
using namespace std;
class info
{
    int age ;
    string fname,lname;
public:
    void getdata(void);
    void putdata();
};
void info::getdata()
{
    cout<<"enter  name"<<endl;
    cin>>fname;
    cout<<"enter last name"<<endl;
    cin>>lname;
    cout<<"enter age"<<endl;
    cin>>age;
}
void info::putdata()
{

    cout<<"first name-"<<fname<<endl<<"last name-"<<lname<<endl<<"age-"<<age<<endl<<endl;
}
int main()
{
    info a[100];
    int i,n;
    cout<<"enter no of entries to be entered"<<endl;
    cin>>n;
    if(n>100)
    {
        cout<<"not enough space"<<endl;
        return 1;
    }
    else
{


    for (i=0;i<n;i++)
    {
        a[i].getdata();
    }
    for(i=0;i<n;i++)
    {
        a[i].putdata();
    }
    return 0;
}
}
