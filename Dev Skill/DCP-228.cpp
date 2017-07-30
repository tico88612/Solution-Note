//
//  DCP-228.cpp
//  
//
//  Created by 楊承昊 on 2017/3/29.
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
        char A[10001]={0},B[100001]={0};
        cin>>A>>B;
        int strna=strlen(A),strnb=strlen(B),indexx=0;
        for(int i=0;i<strnb;i++)
        {
            if(A[indexx]==B[i])
            {
                cout<<A[indexx++];
            }
        }
        cout<<endl;
    }
    return 0;
}
