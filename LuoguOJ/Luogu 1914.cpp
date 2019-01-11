#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int N;
	cin>>N;
	string enter;
	cin>>enter;
	for(int i=0;i<enter.length();i++){
		int s=enter[i]-'a';
		s+=N;
		s%=26;
		cout<<char(s+'a');
	}
	return 0;
}