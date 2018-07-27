#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
	_
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		string enter;
		cin>>enter;
		int ans=0;
		stack<char> s;
		for(unsigned int j=0;j<enter.length();j++){
			if(enter[j]=='p')
				s.push('p');
			else if(enter[j]=='q'){
				if(!s.empty()){
					s.pop();
					ans++;
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}