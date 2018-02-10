#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int N,M,K;
    cin>>N>>M>>K;
    int maxx=0;
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++){
            int q;
            cin>>q;
            maxx=max(maxx,q);
        }
    double a=(double)maxx;
    cout<<fixed<<setprecision(K)<<a<<endl;
    return 0;
}

