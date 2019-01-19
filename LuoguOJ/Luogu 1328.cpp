#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int N,Na,Nb;
	cin>>N>>Na>>Nb;
	vector<int> enterA(Na),enterB(Nb);
	for(int i=0;i<Na;i++){
		cin>>enterA[i];
	}
	for(int i=0;i<Nb;i++){
		cin>>enterB[i];
	}
	int AnsA=0,AnsB=0;
	for(int i=0;i<N;i++){
		int nowa=enterA[i%Na];
		int nowb=enterB[i%Nb];
		if(nowa==0){
			if(nowb==1)
				AnsB++;
			else if(nowb==2)
				AnsA++;
			else if(nowb==3)
				AnsA++;
			else if(nowb==4)
				AnsB++;
		}
		else if(nowa==1){
			if(nowb==0)
				AnsA++;
			else if(nowb==2)
				AnsB++;
			else if(nowb==3)
				AnsA++;
			else if(nowb==4)
				AnsB++;
		}
		else if(nowa==2){
			if(nowb==0)
				AnsB++;
			else if(nowb==1)
				AnsA++;
			else if(nowb==3)
				AnsB++;
			else if(nowb==4)
				AnsA++;
		}
		else if(nowa==3){
			if(nowb==0)
				AnsB++;
			else if(nowb==1)
				AnsB++;
			else if(nowb==2)
				AnsA++;
			else if(nowb==4)
				AnsA++;
		}
		else if(nowa==4){
			if(nowb==0)
				AnsA++;
			else if(nowb==1)
				AnsA++;
			else if(nowb==2)
				AnsB++;
			else if(nowb==3)
				AnsB++;
		}
	}
	cout<<AnsA<<" "<<AnsB<<'\n';
	return 0;
}