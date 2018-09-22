#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef struct d539 {
	long long int Max;
}Seg;
Seg segment[2000000+8];
long long int enter[500000+2];
void init(int L,int R,int id){
	if(L==R){
		segment[id].Max=enter[L];
		return;
	}
	int mid=(L+R)/2;
	init(L,mid,id*2+1);
	init(mid+1,R,id*2+2);
	segment[id].Max=max(segment[id*2+1].Max,segment[id*2+2].Max);
}
long long int Query(int l,int r,int L,int R,int id){
	if(L==l&&R==r)
		return segment[id].Max;
	int Mid=(L+R)/2;
	if(r<=Mid)
		return Query(l,r,L,Mid,id*2+1);
	if(Mid<l)
		return Query(l,r,Mid+1,R,id*2+2);
	return max(Query(l,Mid,L,Mid,id*2+1),Query(Mid+1,r,Mid+1,R,id*2+2));
}
int main(){
	_
	int N;
	cin>>N;
	for(int i=1;i<=N;i++)
		cin>>enter[i];
	init(1,N,1);
	int M;
	cin>>M;
	for(int i=0;i<M;i++){
		int LL,RR;
		cin>>LL>>RR;
		if(RR>LL)
			cout<<Query(LL,RR,1,N,1)<<'\n';
		else
			cout<<Query(RR,LL,1,N,1)<<'\n';
	}
	return 0;
}