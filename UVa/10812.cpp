//
//  10812.cpp
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
        long long int pl,mi,sum;
        cin>>pl>>mi;
        sum=pl+mi;
        long long int a=sum/2,b=pl-a;
        if(a>=0&&b>=0&&(a+b)==pl&&abs(a-b)==mi)
        {
            if(b>a)
            {
                long long int tmp=b;
                b=a;
                a=tmp;
            }
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }
        
        
    }
    return 0;
}

