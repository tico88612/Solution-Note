#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct item {
	int height,power;
};
bool cmp(item a,item b){
	return a.power<b.power;
}
int main(){
	item enter[5002];
	int N,S;
	cin>>N>>S;
	int A,B;
	cin>>A>>B;
	for(int i=0;i<N;i++)
		cin>>enter[i].height>>enter[i].power;
	sort(enter,enter+N,cmp);
	int ans=0;
	for(int i=0;i<N&&S>0;i++){
		if(enter[i].height<=A+B){
			if(S>=enter[i].power){
				ans++;
				S-=enter[i].power;
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}