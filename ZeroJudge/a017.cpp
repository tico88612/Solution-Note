#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string enter;
int DFS(int L,int R){
	int cnt=0;
	for(int i=R-1;i>=L;i--){
		if(enter[i]=='(')
			cnt++;
		else if(enter[i]==')')
			cnt--;
		if(enter[i]=='+'&&cnt==0){
			int ans=DFS(L,i)+DFS(i+1,R);
			return ans;
		}
		if(enter[i]=='-'&&cnt==0){
			int ans=DFS(L,i)-DFS(i+1,R);
			return ans;
		}
	}
	for(int i=R-1;i>=L;i--){
		if(enter[i]=='(')
			cnt++;
		else if(enter[i]==')')
			cnt--;
		if(enter[i]=='*'&&cnt==0){
			int ans=DFS(L,i)*DFS(i+1,R);
			return ans;
		}
		if(enter[i]=='/'&&cnt==0){
			int ans=DFS(L,i)/DFS(i+1,R);
			return ans;
		}
		if(enter[i]=='%'&&cnt==0){
			int ans=DFS(L,i)%DFS(i+1,R);
			return ans;
		}
	}
	if(enter[L]=='('&&enter[R-1]==')'){
		int ans=DFS(L+1,R-1);
		return ans;
	}
	if(enter[L]==' '){
		int ans=DFS(L+1,R);
		return ans;
	}
	if(enter[R-1]==' '){
		int ans=DFS(L,R-1);
		return ans;
	}
	int num=0;
	for(int i=L;i<R;i++){
		num*=10;
		num+=enter[i]-'0';
	}
	return num;
}
int main(){
	while(getline(cin,enter)){
		cout<<DFS(0,enter.length())<<'\n';
	}
	return 0;
}