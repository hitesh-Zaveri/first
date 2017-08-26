#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int i,j=0,k=0,p;
        string a;
        cin>>a;
        p=a.size()-1;
        char b[p/2+1],c[p/2];
        for(i=0;a[i]!='\0';i++){
            if(i%2==0){
                b[j]=a[i];
                j++;
            }
            else{
                c[k]=a[i];
                k++;
            }
        }
        for(i=0;i<(strlen(b)-1);i++)
            cout<<b[i];
        cout<<" ";
        for(i=0;i<(strlen(c)-1);i++)
            cout<<c[i];
    }

    return 0;
}
