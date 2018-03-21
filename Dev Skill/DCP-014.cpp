//
//  DCP-014.cpp
//  
//
//  Created by 楊承昊 on 2017/3/15.
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
        double a,b,c;
        cin>>a>>b>>c;
        double sum=sqrt(pow(a,2)+pow(b,2)+pow(c,2));
        printf("%.2lf\n",sum);
    }
    return 0;
}
