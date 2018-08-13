#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
char Judge(int A,int B){
	if(A==0){
		if(B==0)
			return 'C';
		else if(B==1)
			return 'B';
		else if(B==2)
			return 'A';
		else if(B==3)
			return 'A';
		else if(B==4)
			return 'B';
	}
	else if(A==1){
		if(B==0)
			return 'A';
		else if(B==1)
			return 'C';
		else if(B==2)
			return 'B';
		else if(B==3)
			return 'A';
		else if(B==4)
			return 'B';
	}
	else if(A==2){
		if(B==0)
			return 'B';
		else if(B==1)
			return 'A';
		else if(B==2)
			return 'C';
		else if(B==3)
			return 'B';
		else if(B==4)
			return 'A';
	}
	else if(A==3){
		if(B==0)
			return 'B';
		else if(B==1)
			return 'B';
		else if(B==2)
			return 'A';
		else if(B==3)
			return 'C';
		else if(B==4)
			return 'A';
	}
	else if(A==4){
		if(B==0)
			return 'A';
		else if(B==1)
			return 'A';
		else if(B==2)
			return 'B';
		else if(B==3)
			return 'B';
		else if(B==4)
			return 'C';
	}
	return 'C';
}
int main(){
	int N,A,B;
	cin>>N>>A>>B;
	int enterA[200],enterB[200];
	for(int i=0;i<A;i++)
		cin>>enterA[i];
	for(int i=0;i<B;i++)
		cin>>enterB[i];
	int winA=0,winB=0;
	for(int i=0;i<N;i++){
		if(Judge(enterA[i%A],enterB[i%B])=='A')
			winA++;
		else if(Judge(enterA[i%A],enterB[i%B])=='B')
			winB++;
	}
	cout<<winA<<" "<<winB<<'\n';
	return 0;
}