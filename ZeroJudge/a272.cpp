#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef struct a272 {
	int t[2][2];
}Martix;
Martix zero,init,moply;
Martix Muitl(Martix A,Martix B){
	Martix TT=zero;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				TT.t[i][j]+=(A.t[i][k]*B.t[k][j])%10007;
				TT.t[i][j]%=10007;
			}
		}
	}
	return TT;
}
int ANS(int N){
	Martix A=init,B=moply;
	while(N){
		if(N&1)
			A=Muitl(A,B);
		B=Muitl(B,B);
		N/=2;
	}
	return A.t[0][0];
}
int main(){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			zero.t[i][j]=init.t[i][j]=moply.t[i][j]=0;
		}
	}
	init.t[0][0]=1;
	moply.t[0][0]=moply.t[1][0]=moply.t[0][1]=1;
	int N;
	while(cin>>N){
		cout<<ANS(N)<<'\n';
	}
	return 0;
}