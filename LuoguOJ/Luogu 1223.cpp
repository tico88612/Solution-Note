#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long int;
struct Item
{
	int id;
	ll value;
};
bool cmp(Item a,Item b){
	if(a.value==b.value)
		return a.id<b.id;
	return a.value<b.value;
}
int main(){
	int N;
	cin>>N;
	vector<Item> enter(N);
	for(int i=0;i<N;i++){
		cin>>enter[i].value;
		enter[i].id=i+1;
	}
	sort(enter.begin(), enter.end(), cmp);
	double ans=0,now=0;
	for(int i=0;i<N;i++){
		cout<<enter[i].id<<" \n"[i==N-1];
	}
	now+=(double)enter[0].value;
	for(int i=1;i<N;i++){
		ans+=now;
		now+=(double)enter[i].value;
	}
	ans/=N;
	cout<<fixed<<setprecision(2)<<ans<<'\n';
	return 0;
}