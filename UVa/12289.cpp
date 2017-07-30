//
//  12289.cpp
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
    int T;
    cin>>T;
    while(T--)
    {
        char enter[12]={0};
        cin>>enter;
        if(strlen(enter)==5)
        {
            cout<<"3";
        }
        else
        {
            int oneac=0,twoac=0;
            if(enter[0]=='o') oneac++;
            if(enter[1]=='n') oneac++;
            if(enter[2]=='e') oneac++;
            if(enter[0]=='t') twoac++;
            if(enter[1]=='w') twoac++;
            if(enter[2]=='o') twoac++;
            if(oneac>twoac) cout<<"1";
            if(twoac>oneac) cout<<"2";
        }
        cout<<endl;
    }
    return 0;
}
