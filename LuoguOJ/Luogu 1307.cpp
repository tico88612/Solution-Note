#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	string enter;
	while(cin>>enter){
		if(enter[0]=='-'){
			int fail=1;
			for(int i=enter.length()-1;i>=1;i--){
				if(fail&&enter[i]!='0'){
					fail=0;
					cout<<"-"<<enter[i];
				}
				else if(!fail){
					cout<<enter[i];
				}
			}
			if(fail){
				cout<<"0";
			}
			cout<<'\n';
		}
		else{
			int fail=1;
			for(int i=enter.length()-1;i>=0;i--){
				if(fail&&enter[i]!='0'){
					fail=0;
					cout<<enter[i];
				}
				else if(!fail){
					cout<<enter[i];
				}
			}
			if(fail){
				cout<<"0";
			}
			cout<<'\n';
		}
	}
	return 0;
}