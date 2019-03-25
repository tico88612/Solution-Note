#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct Item
{
	int No;
	int Chin,Eng,Math;
	int sum;
};
bool cmp(Item a,Item b){
	if(a.sum!=b.sum)
		return a.sum>b.sum;
	else if(a.Chin!=b.Chin)
		return a.Chin>b.Chin;
	else
		return a.No<b.No;
}
int main(){
	int N;
	cin>>N;
	vector<Item> enter(N);
	for(int i=0;i<N;i++){
		cin>>enter[i].Chin>>enter[i].Eng>>enter[i].Math;
		enter[i].sum=enter[i].Chin+enter[i].Eng+enter[i].Math;
		enter[i].No=i+1;
	}
	sort(enter.begin(), enter.end(), cmp);
	for(int i=0;i<5;i++){
		cout<<enter[i].No<<" "<<enter[i].sum<<'\n';
	}
	return 0;
}