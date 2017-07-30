//
//  11494.cpp
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
    int x1,x2,y1,y2;
    while(cin>>x1>>y1>>x2>>y2)
    {
        if(x1||x2||y1||y2)
        {
            if(x1==x2&&y1==y2)
                cout<<"0"<<endl;
            else if(x1==x2||y1==y2)
                cout<<"1"<<endl;
            else if(abs(x2-x1)==abs(y2-y1))
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
    }
    return 0;
}
