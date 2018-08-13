#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef struct{
	long long int t[2][2];
}Martix;
Martix O,Mopy,Cal;
Martix Muitl(Martix A,Martix B){
	Martix TT=O;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				TT.t[i][j]+=(A.t[i][k]*B.t[k][j])%100000007;
				TT.t[i][j]%=100000007;
			}
		}
	}
	return TT;
}
long long int ANS(int S){
	Martix X=Cal,Y=Mopy;
	while(S){
		if(S&1)
			X=Muitl(X,Y);
		Y=Muitl(Y,Y);
		S/=2;
	}
	return (X.t[0][1]+X.t[0][0])%100000007;
}
int main(){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			O.t[i][j]=Mopy.t[i][j]=Cal.t[i][j]=0;
		}
	}
	Mopy.t[0][0]=Mopy.t[1][0]=Mopy.t[0][1]=1;
	long long int N;
	while(cin>>Cal.t[0][1]>>Cal.t[0][0]>>N){
		printf("%lld\n",ANS(N));
		Cal=O;
	}

	return 0;
}