#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	int N;
	cin>>N;
	vector<int> v(N);
	for(int i=0;i<N;i++)
		cin>>v[i];
	sort(v.begin(), v.end());
	int is=1;
	for(int i=1;is&&i<N;i++)
		if(v[i-1]!=v[i]-1)
			is=0;
	if(is)
		printf("%d %d yes\n",v[0],v[N-1]);
	else
		printf("%d %d no\n",v[0],v[N-1]);
	return 0;
}