#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct Item
{
	int id,val;
};
bool cmp(Item a,Item b){
	if(a.val == b.val)
		return a.id < b.id;
	return a.val > b.val;
}
int main(){
	_
	int N,M;
	cin>>N>>M;
	M+=M/2;
	vector<Item> v(N);
	for(int i=0;i<N;i++)
		cin>>v[i].id>>v[i].val;
	sort(v.begin(), v.end(), cmp);
	int score = v[M-1].val;
	for(int i=M;v[i-1].val==v[i].val;i++,M++);

	cout<<score<<" "<<M<<'\n';
	for(int i=0;i<M;i++)
		cout<<v[i].id<<" "<<v[i].val<<'\n';

	return 0;
}