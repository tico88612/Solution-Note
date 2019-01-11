#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long int word[22][22][22]={0};
long long int w(int a,int b,int c){
	if(a<=0||b<=0||c<=0)
		return 1;
	else if(a>20||b>20||c>20){
		if(!word[20][20][20])
			return w(20,20,20);
		return word[20][20][20];
	}
	else if(a<b&&b<c){
		long long int sum = 0;
		if(!word[a][b][c-1]){
			word[a][b][c-1] = w(a,b,c-1);
		}
		sum+=word[a][b][c-1];
		if(!word[a][b-1][c-1]){
			word[a][b-1][c-1] = w(a,b-1,c-1);
		}
		sum+=word[a][b-1][c-1];
		if(!word[a][b-1][c]){
			word[a][b-1][c] = w(a,b-1,c);
		}
		sum-=word[a][b-1][c];
		return sum;
	}
	else{
		long long int sum = 0;
		if(!word[a-1][b][c]){
			word[a-1][b][c] = w(a-1,b,c);
		}
		sum+=word[a-1][b][c];
		if(!word[a-1][b-1][c]){
			word[a-1][b-1][c] = w(a-1,b-1,c);
		}
		sum+=word[a-1][b-1][c];
		if(!word[a-1][b][c-1]){
			word[a-1][b][c-1] = w(a-1,b,c-1);
		}
		sum+=word[a-1][b][c-1];
		if(!word[a-1][b-1][c-1]){
			word[a-1][b-1][c-1] = w(a-1,b-1,c-1);
		}
		sum-=word[a-1][b-1][c-1];
		return sum;
	}
}
int main(){
	_
	for(int i=0;i<=20;i++){
		for(int j=0;j<=20;j++){
			for(int k=0;k<=20;k++){
				word[i][j][k]=w(i,j,k);
			}
		}
	}
	int a,b,c;
	while(cin>>a>>b>>c){
		if(a==-1&&b==-1&&c==-1)
			break;
		cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<'\n';
	}
	
	return 0;
}