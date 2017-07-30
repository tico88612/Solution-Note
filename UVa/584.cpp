//
//  584.cpp
//  
//
//  Created by 楊承昊 on 2017/4/26.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    char enter[10000]={0};
    while(fgets(enter,10000,stdin)!=NULL)
    {
        if(!strcmp(enter,"Game Over\n"))
            break;
        else
        {
            int qqq=0,score[30]={0},check[30]={0},strn=strlen(enter);
            for(int i=0;i<strn;i++)
            {
                if(enter[i]==' ')
                    continue;
                else
                {
                    if(enter[i]=='X')
                    {
                        score[qqq]=10;
                        check[qqq++]=2;
                        
                    }
                    else if(isdigit(enter[i]))
                    {
                        if(enter[i+2]=='/')
                        {
                            score[qqq++]=enter[i]-'0';
                            score[qqq++]=10-score[qqq-2];
                            
                        }
                        else if(isdigit(enter[i+2]))
                        {
                            score[qqq++]=enter[i]-'0';
                            score[qqq++]=enter[i+2]-'0';
                            
                        }
                        else
                        {
                            score[qqq++]=enter[i]-'0';
                        }
                        
                        i+=2;
                    }
                }
            }
            int sum=0,round=1;
            //cout<<sum<<" ";
//            for(int i=0;i<23;i++)
//                cout<<score[i]<<" ";
            for(int i=0;i<23;i++)
            {
                //cout<<score[i]<<" ";
                if(round==10)
                {
                    if(score[i]==10)
                    {
                        sum+=score[i]+score[i+1]+score[i+2];
                    }
                    else if((score[i]+score[i+1])==10)
                    {
                        sum+=score[i]+score[i+1]+score[i+2];
                    }
                    else
                    {
                        sum+=score[i]+score[i+1];
                    }
                    break;
                }
                else
                if(score[i]==10)
                {
                    sum+=score[i]+score[i+1]+score[i+2];
                    round++;
                }
                else
                {
                    if(score[i]+score[i+1]==10)
                    {
                        sum+=10+score[i+2];
                        
                    }
                    else
                    {
                        sum+=score[i]+score[i+1];
                    }
                    i++;
                    round++;
                }
                //cout<<sum<<" ";
            }
            
            cout<<sum<<endl;
        }
    }
    return 0;
}
