//
//  11559.cpp
//  
//
//  Created by 楊承昊 on 2017/4/27.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int N;
    while(cin>>N)
    {
        int p,B,H,W,mincost=2147483647;
        cin>>B>>H>>W;
        for(int i=0;i<H;i++)
        {
            int legal=0;
            cin>>p;
            int a;
            for(int j=0;j<W;j++)
            {
                cin>>a;
                if(N<=a)
                    legal=1;
            }
            if(legal) mincost=min(p,mincost);
        }
        if((mincost*N)<=B&&mincost!=2147483647)
        {
            cout<<mincost*N<<endl;
        }
        else
        {
            cout<<"stay home"<<endl;
        }
    }
    return 0;
}
