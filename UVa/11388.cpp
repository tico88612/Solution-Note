//
//  11388.cpp
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
        long long int ans=0;
        long long int G,L,sum;
        cin>>G>>L;
        sum=G*L;
        if(L%G)
        {
            ans=0;
        }
        else
        {
            ans=G;
        }
        if(ans!=0)
            cout<<ans<<" "<<sum/ans<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}

