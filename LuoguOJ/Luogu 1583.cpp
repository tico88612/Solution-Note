#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct Item
{
	int W,no;
};
bool cmp(Item a,Item b){
	if(a.W!=b.W)
		return a.W>b.W;
	return a.no<b.no;
}
int main(){
	int N,K;
	cin>>N>>K;
	int Wei[11];
	vector<Item> enter(N);
	for(int i=1;i<=10;i++)
		cin>>Wei[i];
	for(int i=0;i<N;i++){
		cin>>enter[i].W;
		enter[i].no=i+1;
	}
	sort(enter.begin(), enter.end(), cmp);
	for(int i=0;i<N;i++){
		enter[i].W+=Wei[(i%10)+1];
	}
	sort(enter.begin(), enter.end(), cmp);
	for(int i=0;i<K;i++){
		// cout<<enter[i].no<<" "<<enter[i].W<<" \n"[i==N-1];
		cout<<enter[i].no<<" \n"[i==K-1];
	}
	return 0;
}