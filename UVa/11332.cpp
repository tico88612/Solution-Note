//
//  11332.cpp
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
    long long int N;
    while(cin>>N)
    {
        if(N==0) break;
        while(N>=10)
        {
            long long int q=N;
            N=0;
            while(q>0)
            {
                N+=q%10;
                q/=10;
            }
        }
        cout<<N<<endl;
    }
    return 0;
}

