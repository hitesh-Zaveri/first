#include <iostream>
using namespace std;
class employee
{
    static int j;
    string fname,lname;
    int salary;
public:
    employee()
    {
        fname='\0';
        lname='\0';
        salary=0;
    }
    void getdata(void);
    string get_emp_name(void)
    {
        string q;
        q=fname+" "+lname;
        return q;
    }
    int get_salary(void)
    {
        return salary;
    }
    int  yearly_salary(void);
    friend void cmp(employee a,employee b);
   int raise_salary(void);
   static void show_count(void)
   {
       cout<<endl<<j;
   }

};
int employee ::j;
int employee :: yearly_salary()
{
    int  d;
    d=salary;
    d=d*12;
    return d;
}
int employee::raise_salary()
{
    int  e=salary;
    e=(e+e*0.1)*12;
    return e;
}
void employee ::getdata()
{
    cout<<"\n first name-\t";
    cin>>fname;
    cout<<"\n last name-\t";
    cin>>lname;
    cout<<"\n salary-\t";
    cin>>salary;j++;
}
void cmp (employee a,employee b)
{
        int i=a.salary;
        int j=b.salary;
        if (i>j)
        {
            cout<<"\n"<<a.fname<<" has higher salary";
        }
        else{
            cout<<"\n"<<b.fname<<" has higher salary";
        }
}
int main()
{
    employee a[10];

    int i,A[10],B[10];
    for (i=0;i<2;i++)
    {
        a[i].getdata();
        A[i]=a[i].yearly_salary();
        B[i]=a[i].raise_salary();
        cout<<"\n yearly income of "<<i<<" employee before 10% raise is  "<<A[i];
        cout<<"\n yearly income of "<<i<<" employee after 10% raise is  "<<B[i];
    }
    cmp(a[0],a[1]);
    employee::show_count();
    return 1;
}
