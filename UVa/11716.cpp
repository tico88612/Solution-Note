//
//  11716.cpp
//  
//
//  Created by 楊承昊 on 2017/5/2.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int fc[102]={0};
    for(int i=1;i<=100;i++)
        fc[i]=i*i;
    int T;
    cin>>T;
    char q[2];
    fgets(q,2,stdin);
    while(T--)
    {
        char enter[999999];
        memset(enter,0,sizeof(enter));
        fgets(enter,999999,stdin);
        int strn=strlen(enter);
        enter[strn-1]=0;
        strn--;
        int take=0;
        for(int i=1;i<=100&&take==0;i++)
        {
            if(strn==fc[i])
            {
                take=i;
            }
        }
//        cout<<enter;
//        cout<<strn;
        if(take==0) cout<<"INVALID";
        else
        {
            for(int i=0;i<take;i++)
            {
                for(int j=0;j<take;j++)
                {
                    cout<<enter[i+j*take];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
