//
//  DCP-238.cpp
//  
//
//  Created by 楊承昊 on 2017/3/15.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        long long int sum=0,a;
        cin>>a;
        if(a%2==0) sum+=a;
        long long int i=2;
        for(i=2;i<=sqrt(a);i+=2)
        {
            if(a%i==0) {if(i%2==0)sum+=i;
                if((a%(a/i))==0) if((a/i)%2==0)sum+=a/i;}
        }
        cout<<sum<<endl;
    }
    return 0;
}
