//
//  1339.cpp
//  
//
//  Created by 楊承昊 on 2017/4/12.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    char a[1000],b[1000];
    while(cin>>a>>b)
    {
        int judge=1;
        int apha[26]={0},aphb[26]={0};
        if(strlen(a)!=strlen(b))
            judge=0;
        else
        {
            int strn=strlen(a);
            for(int i=0;i<strn;i++)
            {
                apha[a[i]-'A']++;
                aphb[b[i]-'A']++;
            }
            sort(apha,apha+26);
            sort(aphb,aphb+26);
            for(int i=0;i<26;i++)
                if(apha[i]!=aphb[i])
                {
                    judge=0;
                    break;
                }
        }
        if(judge) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
