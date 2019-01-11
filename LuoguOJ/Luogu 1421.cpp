#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int sum=a*10+b;
	sum/=19;
	cout<<sum<<'\n';
	return 0;
}