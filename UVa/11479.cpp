//
//  11479.cpp
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
    for(int i=1;i<=T;i++)
    {
        long long int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<"Case "<<i<<": ";
        if((a[0]+a[1])>a[2]&&a[0]>0&&a[1]>0&&a[2]>0)
        {
            if(a[0]==a[1]&&a[2]==a[1]&&a[0]==a[2])
                cout<<"Equilateral";
            else if(a[0]==a[1]||a[2]==a[1]||a[0]==a[2])
                cout<<"Isosceles";
            else
                cout<<"Scalene";
        }
        else
            cout<<"Invalid";
        cout<<endl;
    }
    return 0;
}
