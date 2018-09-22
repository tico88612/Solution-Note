#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	int N;
	while(cin>>N){
		string enter;
		cin>>enter;
		for(int i=0;i<N;i++){
			if(enter[i]>='A'&&enter[i]<='Z')
				cout<<char(enter[i]-'A'+'a');
			else
				cout<<char(enter[i]-'a'+'A');
		}
		cout<<'\n';
	}
	return 0;
}