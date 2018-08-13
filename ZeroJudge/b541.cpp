#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string Cal(string enter){
	string ans="";
	for(unsigned int i=0;i<enter.length();i++){
		char w=enter[i];
		int count=0;
		while(w==enter[i]){
			count++;
			i++;
		}
		i--;
		string tostring="";
		while(count){
			char ss=(count%10)+'0';
			tostring+=ss;
			count/=10;
		}
		reverse(tostring.begin(), tostring.end());
		ans+=tostring;
		ans+=w;
	}
	return ans;
}
int main(){
	string Query[42];
	Query[1]="1";
	for(int i=2;i<=40;i++){
		Query[i]=Cal(Query[i-1]);
	}
	int N;
	while(cin>>N){
		cout<<Query[N]<<'\n';
	}
	return 0;
}