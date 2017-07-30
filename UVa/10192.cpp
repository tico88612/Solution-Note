//
//  10192.cpp
//  
//
//  Created by 楊承昊 on 2017/5/5.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int TEST=0;
    string q,w;
    while(getline(cin,q))
    {
        string fin("#");
        if(fin==q)
            break;
        getline(cin,w);
        int lcs[101][101]={0};
        for(int i=1;i<=q.size();i++)
            for(int j=1;j<=w.size();j++)
            {
                if(q[i-1]==w[j-1])
                    lcs[i][j]=lcs[i-1][j-1]+1;
                else
                    lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);
            }
        cout<<"Case #"<<++TEST<<": you can visit at most "<<lcs[q.size()-1][w.size()-1]<<" cities."<<endl;
    }
    return 0;
}
