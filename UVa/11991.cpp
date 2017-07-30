//
//  11991.cpp
//  
//
//  Created by 楊承昊 on 2017/5/2.
//
//

#include <bits/stdc++.h>
using namespace std;
vector<int> SJ[1000001];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int N,M;
    while(cin>>N>>M)
    {
        int tmp;
        for(int i=0;i<N;i++)
        {
            cin>>tmp;
            SJ[tmp].push_back(i);
        }
        for(int i=0;i<M;i++)
        {
            int k,v;
            cin>>k>>v;
            if(SJ[v].size()<k) printf("0\n");
            else
            {
                printf("%d\n",SJ[v][k-1]+1);
            }
        }
    }
    return 0;
}
