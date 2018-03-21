//
//  DCP-027.cpp
//  
//
//  Created by 楊承昊 on 2017/3/29.
//
//

#include <bits/stdc++.h>
using namespace std;
int prime[10001]={0};
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    for(int i=2;i<=10000;i++)
    {
        int judge=1;
        for(int j=2;j<=sqrt(i)&&judge;j++)
        {
            if(i%j==0) judge=0;
        }
        //if(judge) cout<<i<<endl;
        prime[i]=judge;
    }
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        if(prime[N]) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
