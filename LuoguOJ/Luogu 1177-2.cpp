

#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int maxn=100000+5;
int n,a[maxn];
void QuickSort(int l,int r)
{
    int i=l, j=r, p=a[rand()%(r-l+1)+l];
    while(i<=j)
    {
        while(a[i]<p) i++;
        while(a[j]>p) j--;
        if(i<=j) swap(a[i],a[j]), i++, j--;
    }
    if(l<j) QuickSort(l,j);
    if(i<r) QuickSort(i,r);
}
int main()
{
    srand(5064860);

    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    QuickSort(1,n);
    for(int i=1;i<=n;i++) printf("%d%c",a[i],i==n?'\n':' ');
}

