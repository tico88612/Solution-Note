#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct Item {
	string num;
	int no;
};
bool cmp(Item a,Item b){
	if(a.num.length()==b.num.length()){
		int i;
		for(i=0;i<(int)a.num.length()&&a.num[i]==b.num[i];i++);
		return a.num[i]>b.num[i];
	}
	else
		return a.num.length()>b.num.length();
}
int main(){
	int N;
	cin>>N;
	vector<Item> enter(N);
	for(int i=0;i<N;i++){
		cin>>enter[i].num;
		enter[i].no=i+1;
	}
	sort(enter.begin(), enter.end(), cmp);
	cout<<enter[0].no<<'\n';
	cout<<enter[0].num<<'\n';
	return 0;
}