#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef struct Number
{
	bool isNegative;
	string NUM;
}Number;
bool cmp(Number A,Number B){
	if(!A.isNegative&&!B.isNegative){
		if(A.NUM.length()==B.NUM.length()){
			return A.NUM<B.NUM;
		}
		else{
			return A.NUM.length()<B.NUM.length();
		}
	}
	else if(A.isNegative!=B.isNegative){
		return A.isNegative;
	}
	else{
		if(A.NUM.length()==B.NUM.length()){
			return A.NUM>B.NUM;
		}
		else{
			return A.NUM.length()>B.NUM.length();
		}
	}
}
int main(){
	_
	Number enter[1000+2];
	int N;
	while(cin>>N){
		for(int i=0;i<N;i++){
			string s;
			cin>>s;
			if(s[0]=='-'){
				enter[i].isNegative=true;
				enter[i].NUM=s.substr(1,s.length()-1);
			}
			else{
				enter[i].isNegative=false;
				enter[i].NUM=s;
			}
		}
		sort(enter,enter+N,cmp);
		for(int i=0;i<N;i++){
			if(enter[i].isNegative)
				cout<<"-";
			cout<<enter[i].NUM<<'\n';
		}
	}
	return 0;
}