#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	string ans;
	while(cin>>ans){
		int ansn[10]={0};
		for(unsigned int i=0;i<ans.length();i++)
			ansn[ans[i]-'0']++;
		int NNN;
		cin>>NNN;
		while(NNN--){
			string enter;
			cin>>enter;
			int entern[10]={0};
			for(unsigned int i=0;i<enter.length();i++)
				entern[enter[i]-'0']++;
			int A=0,B=0;
			for(int i=0;i<10;i++)
				B+=min(entern[i],ansn[i]);
			for(unsigned int i=0;i<enter.length();i++)
				if(enter[i]==ans[i]){
					A++;
					B--;
				}
			cout<<A<<"A"<<B<<"B"<<'\n';
		}
	}
	return 0;
}