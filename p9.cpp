#include <bits/stdc++.h>

using namespace std;

int solve(int year){
    int a=12,b=13,c=28;
    if (year >= 1700 && year <= 1917)
    {
        if(year%4==0)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
    else if (year>1918 && year<=2070)
    {
        if (year%400==0 || (year%4==0 && year%100!=0))
        {
            return a;
        }
        else
        {
            return b;
        }
    }
    else if (year==1918)
    {
        return c;
    }
}

int main() {
    int year;
    cin >> year;
    int result = solve(year);
    cout <<result<<".09."<<year<<endl;
    return 0;
}
