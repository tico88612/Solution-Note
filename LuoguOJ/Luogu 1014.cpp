#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	long long int enter;
	while(cin>>enter){
		int prev=1,now=1;
		int total=0;
		for(int i=1;total<enter&&total<10000000;i++){
			if(total+i>=enter){
				prev=i;
				now=total;
			}
			total+=i;
		}
		if(prev%2){
			now++;
			int a=prev,b=1;
			while(now!=enter){
				a--;
				b++;
				now++;
			}
			cout<<a<<"/"<<b<<'\n';
		}
		else{
			now++;
			int b=prev,a=1;
			while(now!=enter){
				a++;
				b--;
				now++;
			}
			cout<<a<<"/"<<b<<'\n';
		}
		//cout<<prev<<" "<<now<<'\n';
	}
	return 0;
}