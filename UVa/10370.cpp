//
//  10370.cpp
//  
//
//  Created by 楊承昊 on 2017/5/2.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        double stugra[1000+5],sum=0;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>stugra[i];
            sum+=stugra[i];
        }
        sum/=N;
        double ans=0;
        for(int i=0;i<N;i++)
        {
            if(sum<stugra[i]) ans++;
        }
        ans/=N;
        ans*=100;
        printf("%.3lf%%\n",ans);
    }
}
