#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        GCD(b,a%b);
    }
}
int main()
{
    int a=10,b=15,n;
    //cin>>a>>b;
    n=GCD(a,b);
    cout<<n;
    return 0;
}