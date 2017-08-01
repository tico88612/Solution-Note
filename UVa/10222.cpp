#include <bits/stdc++.h>
using namespace std;
const char query[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
int main()
{
	char a;
	while(scanf("%c",&a)!=EOF){
		a=tolower(a);
		if(isspace(a))
			printf("%c", a);
		else
			for (int i = 0; query[i]; ++i)
			{
				if(a==query[i]){
					printf("%c", query[i-2]);
					break;
				}
			}
	}
	return 0;
}