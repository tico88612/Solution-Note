#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int
using namespace std;

inline long long mod_mul(long long a,long long b,long long m){
    a%=m,b%=m;
    long long y=(long long)((double)a*b/m+0.5);/* fast for m < 2^58 */
    long long r=(a*b-y*m)%m;
    return r<0?r+m:r;
}
template<typename T>
inline T pow(T a,T b,T mod){//a^b%mod
    T ans=1;
    for(;b;a=mod_mul(a,a,mod),b>>=1)
    if(b&1)ans=mod_mul(ans,a,mod);
    return ans;
}

int sprp[3]={2,7,61};//int範圍可解

bool miller_rabin(unsigned int n)
{
    if(n==2) return true;
    if (n < 2||n % 2 == 0) return false;
    
    unsigned int u = n-1, t = 0;
    while (u % 2 == 0){
        u >>= 1;
        t++;
    }
    for (int i=0; i<3; i++)
    {
        unsigned int a = sprp[i]%n;
        if(a==0||a==1||a==n-1)
        continue;
        unsigned int x = pow(a, u, n);   // x = a ^ u % n;
        
        if (x == 1 || x == n-1)
        continue;
        
        for(unsigned int j=1;j<t;j++){
            x = mod_mul(x,x,n);   // x = x * x % n;
            if (x == 1) return false;
            if (x == n-1) break;
        }
        if (x == n-1) continue;
        return false;
    }
    return true;
}
int main(){
    _
    int N;
    while(cin>>N){
        if(miller_rabin(N))
            cout<<"It's a prime!!!\n";
        else
            cout<<"It's not a prime!!!\n";
    }
    
    return 0;
}