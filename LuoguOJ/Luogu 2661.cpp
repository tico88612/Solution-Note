#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int MAXN=2e6+10;
int disjoint[MAXN],dis[MAXN]={0},ans=2e6+10;
int getjoint(int s){
	if(disjoint[s]!=s){
		int last=disjoint[s];
		disjoint[s]=getjoint(disjoint[s]);
		dis[s]+=dis[last];
	}
	return disjoint[s];
}
void link(int s,int t){
	int x=getjoint(s),y=getjoint(t);
	if(x!=y){
		disjoint[x]=y;
		dis[s]=dis[t]+1;
	}
	else
		ans=min(ans,dis[s]+dis[t]+1);
}
int main(){
	int N;
	cin>>N;
	for(int i=1;i<=N;i++)
		disjoint[i]=i;
	for(int i=1;i<=N;i++){
		int k;
		cin>>k;
		link(i,k);
	}
	cout<<ans<<'\n';
	return 0;
}