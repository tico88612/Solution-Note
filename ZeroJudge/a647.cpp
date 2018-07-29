#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const double emp=1e-6;
int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		int A,B;
		cin>>A>>B;
		double ans=(double)(B-A)/A*100;
		cout<<fixed<<setprecision(2);
		if(ans>=0.0)
			cout<<ans+emp<<"% ";
		else
			cout<<ans-emp<<"% ";
		if(ans>=10.00||ans<=-7.00)
			cout<<"dispose"<<'\n';
		else
			cout<<"keep"<<'\n';
	}
	return 0;
}