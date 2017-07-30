//
//  10035.cpp
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
    char a[12],b[12];
    while(cin>>a>>b)
    {
        if(!strcmp(a,"0")&&!strcmp(b,"0"))
            break;
        else
        {
            int aa[12]={0},bb[12]={0},ans=0;
            int stra=strlen(a),strb=strlen(b);
            for(int i=stra-1;i>=0;i--)
            {
                aa[stra-1-i]=a[i]-'0';
            }
            for(int i=strb-1;i>=0;i--)
            {
                bb[strb-1-i]=b[i]-'0';
            }
            for(int i=0;i<max(stra,strb);i++)
            {
                aa[i]+=bb[i];
                if(aa[i]>=10)
                {
                    aa[i+1]+=1;
                    aa[i]-=10;
                    ans++;
                }
            }
            if(ans==0)
                cout<<"No ";
            else
                cout<<ans<<" ";
            cout<<"carry operation";
            if(ans>=2)
                cout<<"s";
            cout<<"."<<endl;
        }
    }
    return 0;
}
