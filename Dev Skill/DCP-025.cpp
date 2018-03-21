//
//  DCP-025.cpp
//  
//
//  Created by 楊承昊 on 2017/3/29.
//
//

#include <bits/stdc++.h>
using namespace std;
char tolow(char qqq)
{
    if(qqq<='Z'&&'A'<=qqq) return tolower(qqq);
    else return qqq;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        char enter[200]={0};
        cin>>enter;
        int judge=1,strn=strlen(enter);
        for(int i=0;i<strn;i++)
        {
            enter[i]=tolow(enter[i]);
        }
        for(int i=0;i<strn/2&&judge;i++)
        {
            if(enter[i]!=enter[strn-1-i])
                judge=0;
        }
        if(judge) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
