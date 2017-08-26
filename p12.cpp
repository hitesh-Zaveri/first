#include <bits/stdc++.h>
#include<vector>

using namespace std;
int getMoneySpent(vector <int> keyboards,vector <int>drives ,int s);
int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    int t=keyboards[0]+drives[0];
   if(t<=s)
{


        return t;
   }
   else
    return 0;
}
void sort (vector <int>a,int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=a[j];
                cout<<endl;
            }
        }
    }
}
int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    sort(keyboards,n);
    sort(drives,m);
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    for(int i=0;i<n;i++)
    {
        cout<<keyboards[i]<<" ";
    }
    return 0;
}
