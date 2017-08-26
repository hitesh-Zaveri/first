#include<iostream>
using namespace std;
int maxi(int A[],int n)
{
    int t=A[0];
    for(int i=1;i<n;i++)
    {
        if(t<A[i])
        {
            t=A[i];
        }
    }
    return t;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int A[100],B[100];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>B[j];
    }
    int t1,t2;
    t1=maxi(A,n);
    t2=maxi(B,m);
    int r=0;
    for(int i=t1;i<t2;i++)
    {
        int flag1=0,flag2=0;
        for(int j=0;j<n;j++)
        {
            if(i%A[j]==0)
            {
                flag1=1;
            }
            else
            {
                flag1=0;break;
            }
        }
        if(flag1==1){
            for(int j=0;j<m;j++)
            {
                if(B[j]%i==0)
                {
                    flag2=1;
                }
                else
                {
                    flag2=0;
                    break;
                }
            }
        }
        if(flag2==1)
        {
            r++;
        }
    }
    cout<<endl<<r;
}
