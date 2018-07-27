#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
	_
	int N;
	cin>>N;
	pair<int ,int > p[1000+2];
	for(int i=0;i<N;i++)
		cin>>p[i].first>>p[i].second;
	sort(p,p+N);
	for(int i=0;i<N;i++)
		cout<<p[i].first<<" "<<p[i].second<<'\n';
	return 0;
}