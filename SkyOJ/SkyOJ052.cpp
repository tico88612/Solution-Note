#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<string>
using namespace std;
#define MAXN 2000022
int n,x,y,k,i,j,m,a[200022];
char s[2];
struct node
{
    int l,r,max1;
}tr[MAXN*4];//一定要*4
void build(int id,int l,int r)
{
    tr[id].l=l;
    tr[id].r=r;
    if(l==r)
    {
        tr[id].max1=a[l];
    }
    else
    {
        int mid=(l+r)/2;
        build(id*2,l,mid);
        build(id*2+1,mid+1,r);
        tr[id].max1=max(tr[id*2].max1,tr[id*2+1].max1);
    }
}
int quary(int id,int l,int r)
{
    if(l<=tr[id].l&&tr[id].r<=r)
        return tr[id].max1;
    else
    {
        int mid=(tr[id].l+tr[id].r)/2;
        if(r<=mid)
            return quary(id*2,l,r);
        else if(l>mid)
            return quary(id*2+1,l,r);
        else
        {
            int x=quary(id*2,l,r);
            int y=quary(id*2+1,l,r);
            return max(x,y);
        }
    }
}
void update(int id,int pos,int val)
{
    if(tr[id].l==tr[id].r)
        tr[id].max1+=val;
    else
    {
        int mid=(tr[id].l+tr[id].r)/2;
        if(pos<=mid)
            update(id*2,pos,val);
        else
            update(id*2+1,pos,val);
        tr[id].max1=max(tr[id*2].max1,tr[id*2+1].max1);
    }
}
int main()
{
    while(~scanf("%d%d",&n,&m))
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        build(1,1,n);
        for(i=0;i<m;i++)
        {
            int qqq;
            scanf("%d%d%d",&qqq,&x,&y);
            if(qqq==1)
                printf("%d\n",quary(1,x,y));
            if(qqq==2)
                update(1,x,y);
        }
    }
    return 0;
}