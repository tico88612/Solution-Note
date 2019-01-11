#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int maxx=8;
	int ans=0;
	for(int i=1;i<=7;i++){
		int a,b;
		cin>>a>>b;
		if(maxx<a+b){
			ans=i;
			maxx=a+b;
		}
	}
	cout<<ans<<'\n';
	return 0;
}