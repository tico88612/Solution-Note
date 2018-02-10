#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	while(N--){
		int one=0;
		long long int enter;
		cin>>enter;
		if(enter==0)
			enter++;
		while(enter>0){
			enter/=2;
			one++;
		}
		cout<<one<<endl;
	}
	return 0;
}