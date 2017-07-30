//
//  10323.cpp
//  
//
//  Created by 楊承昊 on 2017/5/1.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    long long int fc[15]={1};
    for(int i=1;i<=14;i++)
        fc[i]=fc[i-1]*i;
    int N;
    while(cin>>N)
    {
        if(N>=14)
            cout<<"Overflow!"<<endl;
        else
        {
            if(N<0)
            {
                if(abs(N)%2)
                    cout<<"Overflow!"<<endl;
                else
                    cout<<"Underflow!"<<endl;
            }
            else
            {
                if(fc[N]<10000)
                    cout<<"Underflow!"<<endl;
                else
                    cout<<fc[N]<<endl;
            }
        }
    }
    return 0;
}
