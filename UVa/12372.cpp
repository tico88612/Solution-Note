//
//  12372.cpp
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
    for(int TEST=1;TEST<=T;TEST++)
    {
        int L,W,H;
        cin>>L>>W>>H;
        cout<<"Case "<<TEST<<": ";
        if(L<=20&&W<=20&&H<=20) cout<<"good"<<endl;
        else cout<<"bad"<<endl;
    }
    return 0;
}
