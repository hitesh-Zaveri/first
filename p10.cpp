#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int t=0,r=0;
    int a,b;
    for (int i=0;i<n;i+2)
    {
        if(i==p || (i+1)==p)
        {
            a=t;
            break;
        }
        t++;
    }
   int flag=0;
    if(n%2==0)
    {
        flag=1;
    }
    if(flag==1)
    {
        for (int j=(n+1);j!=0;j-2)
        {
            if(j==p || (j-1)==p)
            {
                b=r;
                break;
            }
            r++;
        }
    }
    else if (flag==0)
    {
        for (int j=n;j!=0;j-2)
        {
            if(j==p || (j-1)==p)
            {
                b=r;
                break;
            }
            r++;
        }
    }
    if (a<b)
    {
        cout<<a;
    }
    else if (b<a)
    {
        cout<<b;
    }
    return 0;
}
