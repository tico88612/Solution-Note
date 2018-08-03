#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
char str[]="AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZzZyYxXwWvVuUtTsSrRqQpPoOnNmMlLkKjJiIhHgGfFeEdDcCbBaA";
int main(){
	int N,v1,v2,le,Now=0;
	cin>>N>>v1>>v2;
	le=v1;
	for(int i=0;i<N;i++){
		char ss[1000]={0};
		for(int i=0;i<le;i++){
			ss[i]=str[Now%103];
			Now++;
		}
		printf("%s: hello, %s\n",ss,ss);
		if(le<v2)
			le++;
		else if(le==v2)
			le=v1;
	}
	return 0;
}