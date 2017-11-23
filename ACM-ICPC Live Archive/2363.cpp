#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
		double x,y;
		cin>>x>>y;
		double calu=(x*x+y*y)*M_PI/2/50;
		int years=ceil(calu);
		cout<<"Property "<<i<<": This property will begin eroding in year "<<years<<"."<<"\n";
	}
	cout<<"END OF OUTPUT."<<'\n';
	return 0;
}