#include <bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
    int flag=0;
    cout<<"enter no of scores to be entered:";
    cin>>n;
    vector <int>s(n);
    cout<<endl<<"enter nos"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    vector<int>b(n);
    int k=1;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            b[i]=b[i+1]=k;
        }
        else
        {
            b[i]=k++;
        }
    }
    cout<<"enter no of scores of alice to be entered:";
    cin>>m;
    vector <int >a(m);
    cout<<endl<<"enter nos:"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        for(int j=0;j<n;j++)
        {
            if(a[i]>=s[j])
            {
                cout<<"rank:"<<b[j]<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"rank:"<<k<<endl;
        }
    }
   /*vector<int>t(n+m);
    for(int i=0;i<n;i++)
    {
        t[i]=s[i];
    }
    for(int i=0;i<m;i++)
    {
        t[i+n]=a[i];
    }
    int r=n+m;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(s[j]<s[j+1])
            {
                int temp;
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }*/
    return 0;
}
