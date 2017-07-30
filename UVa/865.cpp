//
//  865.cpp
//
//
//  Created by 楊承昊 on 2017/3/17.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    int T;
    scanf("%d\n",&T);
    //cout<<T;
    

    while(T--)
    {A:
        if(T<=-1)break;
        char s[111],plan[1000]={0},sub[1000]={0};
        char enter[100000]={0};
        fgets(plan,1000,stdin);
        fgets(sub,1000,stdin);
        cout<<sub;
        cout<<plan;
        int ser=strlen(plan),su=1;
        while(fgets(enter,100000,stdin))
        {
            int strn=strlen(enter);
            //cout<<strn<<endl;
            if(strn-1==0) {if(su){cout<<endl;T--;goto A;}else su=0;}
            for(int i=0;i<strn;i++)
            {
                for(int j=0;j<=ser;j++)
                {
                    if(j==ser) cout<<enter[i];
                    if(plan[j]==enter[i])
                    {
                        cout<<sub[j];
                        break;
                    }
                }
                
            }
            
        }
    }
    //cout<<endl;
    return 0;
}
