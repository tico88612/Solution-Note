#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	set<int> s;
	int N;
	cin>>N;
	vector<int> runn;
	for(int i=0;i<N;i++){
		int enter;
		cin>>enter;
		if(s.find(enter)==s.end()){
			s.insert(enter);
			runn.emplace_back(enter);
		}
	}
	sort(runn.begin(), runn.end());
	cout<<runn.size()<<'\n';
	for(int i=0;i<(int)runn.size();i++){
		cout<<runn[i]<<" \n"[i==(int)runn.size()-1];
	}
	return 0;
}