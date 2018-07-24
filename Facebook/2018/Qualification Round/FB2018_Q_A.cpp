#include <bits/stdc++.h>
using namespace std;
#define _ ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
int main(){
	_
	int T;
	cin>>T;
	for(int counter=1;counter<=T;counter++){
		cout<<"Case #"<<counter<<":";
		long long int N,K,V;
		cin>>N>>K>>V;
		string enter[51];
		for(int i=0;i<N;i++)
			cin>>enter[i];
		V--;
		long long int mark = K*V;
		mark%=N;
		long long int print[51];
		for(int i=0;i<K;i++)
			print[i]=(mark+i)%N;
		sort(print,print+K);
		for(int i=0;i<K;i++)
			cout<<" "<<enter[print[i]];
		cout<<endl;
	}
	return 0;
}