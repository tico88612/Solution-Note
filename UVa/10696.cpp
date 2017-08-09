#include <bits/stdc++.h>
using namespace std;
int f91(int A){
	if(A<=100)
		return f91(f91(A+11));
	else
		return A-10;
}
int main(){
	int N;
	while(cin>>N){
		if(N==0)
			return 0;
		int A=f91(N);
		cout<<"f91("<<N<<") = "<<A<<endl;
	}
}