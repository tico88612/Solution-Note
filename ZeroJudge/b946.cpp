#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF){
		int ansx,ansy;
		ansy=(c-(d*a))/(b-a);
		ansx=(c-ansy*b)/a;
		if(ansx>0&&ansy>0&&(a*ansx+b*ansy)==c)
			printf("%d %d\n",ansx,ansy);
		else
			printf("impossible\n");
	}
	return 0;
}