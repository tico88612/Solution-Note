#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lowbit(x) ((x)&(-x))
using namespace std;
const int MAXN = 1000000+2;
int Origin[MAXN+1]={0};
int BITS[MAXN+1]={0};
int N,Q;
int xxor(int x){
	int ans=0;
	for(;x;x-=lowbit(x))
		ans^=BITS[x];
	return ans;
}
void init(int n) {
	for(int x = 1; x <= n; ++x) {
		BITS[x] = Origin[x];
		int y = x - lowbit(x);
		for(int i = x-1; i > y; i -= lowbit(i))
			BITS[x] ^= BITS[i];
	} 
}
void update(int x,int val){
	for(int i=x;i<=N;i+=lowbit(i))
		BITS[i]^=val;
}
int main(){
	_
	cin>>N>>Q;
	for(int i=1;i<=N;i++)
		cin>>Origin[i];
	init(N);
	while(Q--){
		int choice,x,y;
		cin>>choice>>x>>y;
		if(choice==0){
			cout<<(xxor(y)^xxor(x-1))<<'\n';
		}
		else{
			int OO=Origin[x]^y;
			Origin[x]=y;
			update(x,OO);
		}
	}
	return 0;
}