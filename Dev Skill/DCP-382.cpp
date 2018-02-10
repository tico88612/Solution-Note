#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int N,M;
	while(cin>>N>>M){	
		if (N==1&&M==1)
			cout<<"Even"<<endl;
		else if(N==1||M==1)
			cout<<"Odd"<<endl;
		else
			cout<<"Even"<<endl;
	}
	return 0;
}