//
//  DCP-312.cpp
//  
//
//  Created by 楊承昊 on 2017/4/25.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    int T;
    cin>>T;
    char skip[2],compa[7]={"Sharif"};
    fgets(skip,2,stdin);
    for(int counter=1;counter<=T;counter++)
    {
        char enter[1000+5]={0};
        fgets(enter,1005,stdin);
        int strn=strlen(enter);
        cout<<"Case "<<counter<<": ";
        for(int i=0;i<strn;i++)
        {
            char choose[10]={0};
            if(i==0)
            {
                if(enter[i]=='S')
                {
                    for(int j=0;j<6;j++)
                    {
                        choose[j]=enter[i+j];
                    }
                    if(!strcmp(choose,compa)&&!isalpha(enter[i+6]))
                    {
                        cout<<"Officer";
                        i+=5;
                    }
                    else
                    {
                        cout<<enter[i];
                    }
                }
                else
                {
                    cout<<enter[i];
                }
            }
            else
            {
                if(enter[i]=='S')
                {
                    for(int j=0;j<6;j++)
                    {
                        choose[j]=enter[i+j];
                    }
                    if(!strcmp(choose,compa)&&!isalpha(enter[i+6])&&!isalpha(enter[i-1]))
                    {
                        cout<<"Officer";
                        i+=5;
                    }
                    else
                    {
                        cout<<enter[i];
                    }
                }
                else
                {
                    cout<<enter[i];
                }
            }
        }
        
    }
    return 0;
}

