//
//  SkyOJ001.cpp
//  
//
//  Created by 楊承昊 on 2017/4/12.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int Q,P;
    while(scanf("%d/%d = ?",&Q,&P)!=EOF)
    {
        int qqqqqq;
        if((Q>0&&P>0)||(Q<0&&P<0)||Q==0) qqqqqq=0;
        else qqqqqq=1;
        if(qqqqqq) cout<<"-";
        Q=abs(Q);
        P=abs(P);
        int sum=Q/P;
        cout<<sum;
        int q=Q%P,p=P,cnt2=0,cnt5=0;
        int ggg=__gcd(q,p);
        q/=ggg;
        p/=ggg;
        P=p;
        while(p%2==0){p/=2; cnt2++;}
        p=P;
        while(p%5==0){p/=5; cnt5++;}
        p=P;
        int len_noloop=max(cnt2,cnt5);
        if(q==0) len_noloop=0;
        
        for(int i=0;i<len_noloop;i++)
        {
            if(i==0) cout<<".";
            q*=10;
            cout<<q/p;
            q%=p;
        }
        int len_loop=0,looppp[1000000]={0};
        
        Q=q;
        do
        {
            q*=10;
            looppp[len_loop]=q/p;
            q%=p;
            len_loop++;
        }while(q!=Q);
        int qwe=len_loop;
        if((qwe!=1||looppp[0]!=0)&&len_noloop==0) cout<<".";
        if(qwe!=1||looppp[0]!=0)
        cout<<"(";
        if(qwe!=1||looppp[0]!=0)
        for(int i=0;i<qwe;i++)
        {

            cout<<looppp[i];
        }
        if(qwe!=1||looppp[0]!=0)
        cout<<")";
        cout<<endl;
    }
    return 0;
}

