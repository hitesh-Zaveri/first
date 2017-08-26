#include<bits/stdc++.h>
using namespace std;
void swapi(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int part(int a[],int l,int h)
{
    int pivot=a[h];
    int index=a[l];
    for(int i=l;i<h;i++)
    {
        if(a[i]<pivot)
        {
            swapi(a[i],a[index]);
            index++;
        }
    }
    swapi(a[index],a[h]);
    return index;
}
void quick(int a[],int l,int h)
{
    if(l<h)
    {
        int index;
        index=part(a,l,h);
        quick(a,l,index-1);
        quick(a,index+1,h);
    }
}

int main()
{

    int b;
    cin>>b;
    int a[100];
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }
    quick(a,0,b-1);
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
