#include<bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;
vector < int > solve(vector < int > grades,int n)
{
    for (int p=0;p<n;p++)
    {
            int i;
            i=grades[p]/5;
            vector<int> k[n];
            k[p] = (i+1)*5;
            if(k[p] - grades[p]<3)
            {
                return k[p];
            }
            else
            {
                return grades[p];
            }
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result(n) = solve(grades,n);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
