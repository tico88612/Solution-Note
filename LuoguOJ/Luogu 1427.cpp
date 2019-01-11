#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	long long int a;
	long long int enter[105],ss=0;
	while(cin>>a&&a){
		enter[ss++]=a;
	}
	for(int i=ss-1;i>=0;i--){
		if(!i){
			cout<<enter[i]<<'\n';
		}
		else
			cout<<enter[i]<<' ';
	}
	return 0;
}