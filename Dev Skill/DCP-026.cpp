//
//  DCP-026.cpp
//  
//
//  Created by 楊承昊 on 2017/3/16.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    char e[2];
    fgets(e,2,stdin);
    while(T--)
    {
        char enter[100000]={0};
        fgets(enter,100000,stdin);
        int strn=strlen(enter);
        for(int i=strn-2;i>=0;i--)
                cout<<enter[i];
        cout<<endl;
        
    }
    return 0;
}

