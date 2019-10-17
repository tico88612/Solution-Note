#include <iostream>
#include <algorithm>
#include <string>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void failure_build(string P,int *fail){
	for(int i=1,j=fail[0]=-1;P[i];i++){
		while(j>=0&&P[j+1]!=P[i]) j=fail[j];
		if(P[j+1]==P[i])
			j++;
		fail[i]=j;
	}
}
int KMP(const string T,const string P,int *fail){
	failure_build(P,fail);
	int ans=0;
	for(int i=0,j=-1;T[i];i++){
		while(j>=0&&P[j+1]!=T[i])
			j=fail[j];
		if(P[j+1]==T[i])
			j++;
		if(!P[j+1]){
			ans++;
			j=fail[j];
		}
	}
	return ans;
}
int main(){
	_
	int T;
	cin>>T;
	while(T--){
		string enter1,enter2;
		cin>>enter1>>enter2;
		int fail[10000+2]={0};
		int ans=KMP(enter2,enter1,fail);
		cout<<ans<<'\n';
	}
	return 0;
}