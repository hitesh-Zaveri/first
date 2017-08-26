#include<iostream>
using namespace std;
class invoice
{
    static int i;
    int a,b,c;
    string name;
public:
    invoice()
    {
        a=0;
        name='\0';
        b=0;
        c=0;
    }
    void get_datai(void);
    int get_invoice_amount(void);
    friend int  max_quantity(invoice A,invoice B);
    string get_item_name(void)
    {
        return name;
    }
    int get_quantity(void)
    {
        return b;
    }
    int get_price(void)
    {
        return c;
    }
    int get_item_no(void)
    {
        return a;
    }
    static void show_count(void)
    {
        cout<<endl<<i;
    }
};
int invoice::i;
void invoice::get_datai()
{
    cout<<"\n item no--\t";
    cin>>a;
    cout<<"\n item name--\t";
    cin>>name;
    cout<<"\n item quantity--\t";
    cin>>b;
    cout<<"\n item price--\t";
    cin>>c;
    i++;
}
int invoice::get_invoice_amount()
{
    int d;
    d=b*c;
    return d;
}
int max_quantity(invoice a,invoice b)
{
    int d,e;
    d=a.get_quantity();
    e=b.get_quantity();
    if(d>e){return d;}
    else {return e;}
}

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

class departmental_store:public employee,public invoice
{
    string d_store_name,d_store_add;
    employee e[10];
    invoice in[30];
public:
    departmental_store()
    {
        d_store_name="atoz";
        d_store_add="sec-128";
    }
    void sales(void);
    int find_item(string s,int n);
};
void departmental_store::sales()
{
    invoice a;
    a.get_datai();
    employee b;
    b.getdata();
}
int departmental_store::find_item(string s,int n)
{
    int i,t=0,A[30];
    for(int j=0;j<n;j++)
    {
        i=strcmpi(s,in[j].get_item_name());
        if(i==0)
        {
           t++; A[t-1]=j;
        }
    }
    if(t==1)
    {
        cout<<emdl<<e[A[0]].get_emp_name();
    }
    else if(t==0)
    {
        cout <<"no item sold\n";
    }
    else if (t>1)
    {
        int j,temp, g=in[A[0]].get_quantity();
        for(j=0;j<t;j++)
        {
            if(in[A[j+1].get_quantity()>g)
            {
                temp=g;
                g=in[A[j+1].get_quantity();
                in[A[j+1].get_quantity()=temp;
            }
        }

    }
    return t;
}
