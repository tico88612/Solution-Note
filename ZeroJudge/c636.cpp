#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	string wd[] = {"鼠", "牛", "虎", "兔", "龍", "蛇", "馬", "羊", "猴", "雞", "狗", "豬"};
	while(cin>>a){
		if(a<0)
			a++;
		a+=2015;
		cout<<wd[a%12]<<'\n';
	}
	return 0;
}