//
//  10300.cpp
//  
//
//  Created by 楊承昊 on 2017/4/28.
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
        long long int W,sum=0;
        cin>>W;
        while(W--)
        {
            long long int a,b,c;
            cin>>a>>b>>c;
            sum+=a*c;
        }
        cout<<sum<<endl;
    }
    return 0;
}
