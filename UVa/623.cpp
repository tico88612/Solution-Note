//
//  623.cpp
//  
//
//  Created by 楊承昊 on 2017/5/1.
//
//

#include <bits/stdc++.h>
using namespace std;
int fc[1001][2600];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    memset(fc,-1,sizeof(fc));
    fc[0][0]=1;
    fc[1][0]=1;
    for(int i=2;i<1001;i++)
    {
        for(int j=0;fc[i-1][j]!=-1;j++)
        {
            fc[i][j]=fc[i-1][j]*i;
        }
        for(int j=0;fc[i][j]!=-1;j++)
        {
            if(fc[i][j]>=10&&fc[i][j+1]==-1)
            {
                fc[i][j+1]=0;
            }
            fc[i][j+1]+=fc[i][j]/10;
            fc[i][j]%=10;
        }
    }
    int N;
    while(cin>>N)
    {
        cout<<N<<"!"<<endl;
        for(int i=2599;i>=0;i--)
        {
            if(fc[N][i]==-1)
                continue;
            cout<<fc[N][i];
        }
        cout<<endl;
    }
    return 0;
}
