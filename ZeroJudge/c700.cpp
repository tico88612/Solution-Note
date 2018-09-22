#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	string enter;
	int total1=0,total2=0;
	while(cin>>enter){
		if(enter=="push"){
			long long int a;
			cin>>a;
			total1++;
			cout<<1;
		}
		else{
			if(total2){
				cout<<4;
				total2--;
			}
			else{
				for(int i=0;i<total1;i++){
					cout<<5;
				}
				total2+=total1;
				if(total2){
					cout<<4;
					total2--;
				}
				total1=0;
			}
		}
	}
	return 0;
}