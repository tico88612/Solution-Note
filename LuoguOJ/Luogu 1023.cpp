#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct Item
{
	long long int sold,value;
	Item(long long int s,long long int v){
		sold=s;
		value=v;
	}
};
bool cmp(Item a,Item b){
	return a.sold<b.sold;
}
int main(){
	long long int N,M,H;
	cin>>N>>M>>H;
	vector<Item> v;
	long long int SS,VV;
	while(cin>>SS>>VV){
		if(SS==-1&&VV==-1)
			break;
		v.emplace_back(Item(SS,VV));
	}
	sort(v.begin(), v.end(), cmp);
	
	return 0;
}