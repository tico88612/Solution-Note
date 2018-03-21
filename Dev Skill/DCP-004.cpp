//
//  DCP-004.cpp
//  
//
//  Created by 楊承昊 on 2017/3/16.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int CT,N;
    while(cin>>CT>>N)
    {
        int q=0;
        while(N--)
        {
            int tmp;
            cin>>tmp;
            q+=tmp;
        }
        int sum=CT/q;
        if(CT%q) sum++;
        if(sum>=2) cout<<"Project will finish within "<<sum<<" days."<<endl;
        else cout<<"Project will finish within 1 day."<<endl;
    }
    return 0;
}
