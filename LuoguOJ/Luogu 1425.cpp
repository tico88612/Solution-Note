#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int ss=a*60+b,tt=c*60+d;
	int sum=tt-ss;
	cout<<(int)(sum/60)<<" "<<sum%60<<'\n';
	return 0;
}