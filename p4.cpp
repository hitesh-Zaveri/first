#include<iostream>
#include<string>
using namespace std;
int main() {

    int n;
    cin>>n;
    int i;
    string A[10];
    for (i=0;i<n;i++)
    {
       /* int j=0;
        while(1)
        {
            cin>>A[i][j];
            j++;B[i]++;
            if(A[i][j]=='\0')
            {
                break;
            }
        }*/
        cin>>A[i];
    }
    /*for(i=0;i<n;i++)
    {
         char temp1[100],temp2[100];
         int k=0,p=0;
        for(int j=0;j<B[i];j++)
        {

            if(j%2==0)
            {
                temp1[k]=A[i][j];
                j++;k++;
            }
            else
            {
                temp2[p]=A[i][j];
                j++;p++;
            }
        }
        cout<<temp1[100]<<" "<<temp2[100]<<endl;
        cout<<A[i]<<endl;
    }*/
    string B[10],C[10];
    int j,k;
    for(i=0;i<n;i++)
    {
        k=A[i].size();
        for(j=0;j<k;j++)
        {

            if(j%2==0)
            {
                B[j]=A[i][j];
                j++;
                i++;
            }
            else
            {

                C[j]=A[i][j];
                j++;
                i++;
            }
            //cout<<B[i];
        }

    }
    for(i=0;i<n;i++)
    {
        //cout<<"m";

        cout<<B[i]<<" "<<C[i]<<endl;
    }

    return 0;
}
