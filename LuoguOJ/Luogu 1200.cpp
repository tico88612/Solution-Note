#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int s=1,d=1;
	for(int i=0;i<a.length();i++){
		s*=(a[i]-'A'+1);
	}
	s%=47;
	for(int i=0;i<b.length();i++){
		d*=(b[i]-'A'+1);
	}
	d%=47;
	if(s==d)
		printf("GO\n");
	else
		printf("STAY\n");

	return 0;
}