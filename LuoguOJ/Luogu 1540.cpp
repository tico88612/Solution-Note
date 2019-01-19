#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int M,N;
	cin>>M>>N;
	int ans=0;
	deque<int> d;
	for(int i=0;i<N;i++){
		int enter;
		cin>>enter;
		int legal=1;
		for(auto j=d.begin();legal&&j!=d.end();j++){
			if(enter==*j)
				legal=0;
		}
		if(legal){
			ans++;
			d.push_back(enter);
			if(d.size()>M)
				d.pop_front();
		}
	}
	cout<<ans<<'\n';
	return 0;
}