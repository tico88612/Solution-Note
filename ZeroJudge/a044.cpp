#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	while(cin>>n){
		long long int result= 1 + n + n * (n + 1) * (n - 1) / 6 ;
		cout<<result<<endl;
	}
	return 0;
}