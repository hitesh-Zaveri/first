#include<iostream>
using namespace std;
int main() {
     int n,q;
    cin>>n;
    cin>>q;
    int A[100][300];
    int i,j;
    for (i=0;i<n;i++)
    {
        cin>>A[i][0];
        for (j=1;j<=(A[i][0]);j++)
        {
           cin>>A[i][j];
        }
    }
    int B[100][2];
    for(i=0;i<q;i++)
    {
        for (j=0;j<2;j++)
        {
            cin>>B[i][j];
        }
    }
    int k=0;
    while(k<q){
   for (i=0;i<q;i++)
   {
       if (i==B[k][0])
       {
              for (j=0;j<A[i][0];j++)
           {
               if(j==B[k][1])
               {
                   cout<<A[i][j+1]<<"\n";
                   k++;
               }
           }
       }
   }}
    return 0;
}
