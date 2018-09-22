#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	int N;
	while(cin>>N){
		string cand1,cand2;
		cin>>cand1>>cand2;
		int total1=0,total2=0;
		for(int i=0;i<N;i++){
			int S,v1,v2;
			cin>>S>>v1>>v2;
			if(v1>v2)
				total1+=S;
			else if(v2>v1)
				total2+=S;
		}
		if(total1>total2)
			cout<<cand1<<'\n';
		else if(total1<total2)
			cout<<cand2<<'\n';
		else
			cout<<"Tie"<<'\n';
	}
	return 0;
}