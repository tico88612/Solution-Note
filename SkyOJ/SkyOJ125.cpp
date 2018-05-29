#include <bits/stdc++.h>
using namespace std;
int strn[12];
void dfs(string noww,unsigned int K){
	if(noww.length()==K){
		cout<<noww<<'\n';
		return;
	}
	for(char i='A';i<='K';i++){
		if(noww.length()>0){
			while(noww[noww.length()-1]>i)
				i++;
		}
		if(strn[i-'A'])
		{
			strn[i-'A']--;
			dfs(noww+i,K);
			strn[i-'A']++;
		}
	}
	return;
}
int main() {
	string enter;
	unsigned int k;
	bool firsttt=1;
	while(cin>>enter>>k){
		if(firsttt)
			firsttt=0;
		else
			cout<<'\n';
		memset(strn,0,sizeof(strn));
		sort(enter.begin(),enter.end());
		for(unsigned int i=0;i<enter.length();i++)
			strn[enter[i]-'A']++;
		string noww;
		dfs(noww,k);
	}
	return 0;
}