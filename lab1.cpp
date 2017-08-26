#include<iostream>
#include<vector>
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
int invoice::i=0;
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

int main()
{
    int a;
    cout<<"click 0 to create invoice"<<"\n";
    cin>>a;
    if (a==0)
    {
        int t;
        cout<<"\n enter no of invoices to be created--\t";
        cin>>t;
        int j;
        int B[100];
        invoice A[100];
        for(j=0;j<t;j++)
        {
            A[j].get_datai();
            B[j]=A[j].get_invoice_amount();
            cout<<endl<<"total invoice amount--\t"<<B[j]<<endl;
        }
        int m;
        m=max_quantity(A[0],A[t-1]);
        cout<<endl<<m<<endl;
        invoice::show_count();
    }
    return 0;
}
