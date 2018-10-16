//
//  a038.cpp
//  
//
//  Created by 楊承昊 on 2017/3/16.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char enter[100000]={0};
    while(fgets(enter,100000,stdin)!=NULL)
    {
        int strn=strlen(enter);
        int judge=1;
        for(int i=strn-1;i>=0;i--)
        {
            if(judge&&enter[i]=='0')
            {
                continue;
            }
            else
            {
                judge=0;
                cout<<enter[i];
            }
        }
        if(judge)
            cout<<"0";
        cout<<endl;
        memset(enter,0,sizeof(enter));
    }
    return 0;
}

