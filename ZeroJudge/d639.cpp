#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef struct{
	int t[3][3];
}Martix;
Martix O,Mopy,Cal;
Martix Muitl(Martix A,Martix B){
	Martix TT=O;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				TT.t[i][j]+=(A.t[i][k]*B.t[k][j])%10007;
				TT.t[i][j]%=10007;
			}
		}
	}
	return TT;
}
int ANS(int S){
	Martix X=Cal,Y=Mopy;
	while(S){
		if(S%2)
			X=Muitl(X,Y);
		Y=Muitl(Y,Y);
		S/=2;
	}
	return X.t[0][0];
}
int main(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			O.t[i][j]=Mopy.t[i][j]=Cal.t[i][j]=0;
		}
	}
	Cal.t[0][0]=5;
	Cal.t[1][0]=Cal.t[0][1]=3;
	Cal.t[2][0]=Cal.t[1][1]=Cal.t[0][2]=1;
	Cal.t[2][1]=Cal.t[1][2]=Cal.t[2][2]=1;

	Mopy.t[0][0]=1;
	Mopy.t[0][1]=1;
	Mopy.t[1][0]=1;
	Mopy.t[2][0]=1;
	Mopy.t[1][2]=1;

	int N;
	while(cin>>N){
		if(N<=3)
			printf("1\n");
		else if(N==4)
			printf("3\n");
		else
			printf("%d\n",ANS(N-5));
	}
	return 0;
}