#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	long long int enter;
	scanf("%lld",&enter);
	long long int s=floor(sqrt(enter));
	printf("%lld\n",enter-s*s);
	return 0;
}