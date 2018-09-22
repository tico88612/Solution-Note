#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	long long int a,b;
	string c;
	while(cin>>a>>c>>b){
		if(c=="+")
			cout<<a+b;
		if(c=="-")
			cout<<a-b;
		if(c=="*")
			cout<<a*b;
		if(c=="/")
			cout<<a/b;
		cout<<'\n';
	}
	return 0;
}