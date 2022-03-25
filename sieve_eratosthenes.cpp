#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=100 , i;
    vector<int> lp(n,0) , hp(n,0) ;
    vector<bool> is_prime(n , true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            lp[i] = hp[i] = i;
            for (int j = 2 * i; j <= n; j += i)
            {
                is_prime[j] = false;
                hp[j]=i;
                if(lp[j]==0)
                    lp[j]=i;
            }
    }   
}
cout<<lp[6]<<" "<<hp[6]<<" "<<endl;
return 0;
}