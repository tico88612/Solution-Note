#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define MAXN 700000
bool CAL[MAXN+2]={1};

int main(){
	_
	int N;
	cin>>N;
	for(int i=0,x;i<N;i++){
		cin>>x;
		queue<int> q;
		for(int i=MAXN;i>=0;i--){
			if(CAL[i]){
				int plus=i+x;
				if(plus>MAXN)
					q.push(plus-MAXN);
				else
					CAL[plus]=1;
			}
		}
		while(q.size()){
			CAL[q.front()]=1;
			q.pop();
		}
	}
	for(int i=MAXN;i>=0;i--)
		if(CAL[i]){
			cout<<i<<'\n';
			break;
		}

	return 0;
}