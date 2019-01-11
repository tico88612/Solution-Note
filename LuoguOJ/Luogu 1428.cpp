#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int N;
	cin>>N;
	vector<int> enter(N);
	for(int i=0;i<N;i++){
		cin>>enter[i];
		int ans=0;
		for(int j=0;j<i;j++){
			if(enter[i]>enter[j])
				ans++;
		}
		if(!i)
			cout<<ans;
		else
			cout<<" "<<ans;
	}
	return 0;
}