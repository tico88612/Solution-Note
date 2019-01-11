#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	double maxx,now=2,total=0;
	cin>>maxx;
	for(int i=1;i;i++){
		total+=now;
		now*=0.98;
		if(total>=maxx){
			cout<<i<<'\n';
			break;
		}
	}
	return 0;
}