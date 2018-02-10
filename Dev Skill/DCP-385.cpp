#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	while(N--){
		long long int enter;
		cin>>enter;
		bool sol=1;
		if(enter==0)
			sol=0;
		while(enter>1){
			if(enter%5){
				sol=0;
				break;
			}
			enter/=5;
		}
		if(sol)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}