#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int N;
	cin>>N;
	priority_queue<long long int,vector<long long int>,greater<long long int>> pq;
	for(int i=0;i<N;i++){
		long long int enter;
		cin>>enter;
		pq.push(enter);
	}
	long long int ans=0;
	while(pq.size()>1){
		long long int a=pq.top();
		pq.pop();
		long long int b=pq.top();
		pq.pop();
		ans+=a+b;
		pq.push(a+b);
	}
	cout<<ans<<'\n';
	return 0;
}