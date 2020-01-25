#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	multiset<int> mp;
	multiset<int>::iterator mp_it;
	multiset<int>::reverse_iterator mp_it_reverse;
	int choice;
	while(cin>>choice){
		if(choice==1){
			int WW;
			cin>>WW;
			mp.insert(WW);
		}
		else if(choice==2){
			mp_it_reverse=mp.rbegin();
			printf("%d\n",*mp_it_reverse);
			mp.erase(next(mp_it_reverse).base());
		}
		else if(choice==3){
			mp_it=mp.begin();
			printf("%d\n",*mp_it);
			mp.erase(mp_it);
		}
	}
	return 0;
}