//
//  DCP-117.cpp
//  
//
//  Created by 楊承昊 on 2017/3/13.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        long long int sum,n;
        cin>>n;
        sum=(1+n)*n/2;
        cout<<sum<<endl;
    }
    return 0;
}
