#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct c471 {
	long long int a,b;
};
bool cmp(const c471 &AA,const c471 &BB){
	return AA.a*BB.b < AA.b*BB.a; 
}//return AA.a*BB.b <= AA.b*BB.a; RE??
c471 enter[600000];
int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>enter[i].a;
	}
	for(int i=0;i<N;i++){
		cin>>enter[i].b;
	}
	sort(enter,enter+N,cmp);
	long long int ans=0,plus=0;
	for(int i=0;i<N;i++){
		ans+=plus*enter[i].b;
		plus+=enter[i].a;
	}
	cout<<ans<<'\n';
	return 0;
}