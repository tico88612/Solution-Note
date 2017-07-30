//
//  12250.cpp
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
    int T=1;
    char enter[16]={0};
    while(cin>>enter)
    {
        if(!strcmp(enter,"#")) break;
        else
        {
            cout<<"Case "<<T++<<": ";
            if(!strcmp(enter,"HELLO")) cout<<"ENGLISH";
            else if(!strcmp(enter,"HOLA")) cout<<"SPANISH";
            else if(!strcmp(enter,"HALLO")) cout<<"GERMAN";
            else if(!strcmp(enter,"BONJOUR")) cout<<"FRENCH";
            else if(!strcmp(enter,"CIAO")) cout<<"ITALIAN";
            else if(!strcmp(enter,"ZDRAVSTVUJTE")) cout<<"RUSSIAN";
            else cout<<"UNKNOWN";
            cout<<endl;
        }
    }
    return 0;
}

