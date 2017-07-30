//
//  10141.cpp
//  
//
//  Created by 楊承昊 on 2017/4/27.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    int n,p,TESTCASE=1;
    while(cin>>n>>p)
    {
        char ch[10];
        fgets(ch,10,stdin);
        if(n==0&&p==0)
            break;
        else
        {
            if(TESTCASE>=2) cout<<endl;
            char cheapcom[100]={0};
            double cheapcost=0;
            int maxx=-1;
            char orderlist[1000][85]={0};
            for(int i=0;i<n;i++)
                fgets(orderlist[i],85,stdin);
            char company[100]={0};
            double comcost;
            for(int i=0;i<p;i++)
            {
                int r;
                fgets(company,100,stdin);
                char tor[1000];
                cin>>comcost>>r;
                fgets(ch,10,stdin);
                for(int j=0;j<r;j++)
                    fgets(tor,1000,stdin);
                if(r>maxx)
                {
                    cheapcost=comcost;
                    strcpy(cheapcom,company);
                    maxx=r;
                }
                else if(r==maxx)
                {
                    if(comcost<cheapcost)
                    {
                        cheapcost=comcost;
                        strcpy(cheapcom,company);
                    }
                }
            }
            cout<<"RFP #"<<TESTCASE++<<endl<<cheapcom;
        }
    }
    return 0;
}
