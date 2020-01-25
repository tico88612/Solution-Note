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
	printf("%d",v[0]);
	for(int i=1;i<N;++i){
		printf(" %d",v[i]);
	}
	printf("\n");
	return 0;
}