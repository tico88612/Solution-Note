#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int
using namespace std;
typedef pair<ll,ll> pii;
pii enter[10001];
bool cmp(pii one,pii two){
	if(one.first==two.first)
		return one.second > two.second;
	return one.first < two.first;
}
int main(){
	_
	int N;
	while(cin>>N){
		for(int i=0;i<N;i++)
			cin>>enter[i].first>>enter[i].second;
		sort(enter,enter+N,cmp);
		ll sum = enter[0].second - enter[0].first;
		ll R = enter[0].second;
		for(int i=1;i<N;i++){
			if(enter[i].first!=enter[i-1].first&&enter[i].second>R){
				sum += (enter[i].second-enter[i].first)-(R-enter[i].first)*((R-enter[i].first)>0);
				R = enter[i].second;
			}
		}
		cout<<sum<<'\n';
	}
	// Ready-Set-Code!
	return 0;
}