#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;
long long int a[2000000]={0};
long long int task(long long int *data,long long int n)
{
	long long int temp=0,counter;
		for(counter=0;counter<n;counter++)
		{
			temp+=abs(data[n/2]-data[counter]);
		}
	return temp;
}

int main()
{
	
	long long int count[200]={0};
	long long int sum[200]={0};
	long long int i,j,counter,counter2;
	scanf("%lld",&i);
	for(counter=0;counter<i;counter++)
	{
		
		scanf("%lld",&j);
		for(counter2=0;counter2<j;counter2++)
		{
			scanf("%lld",&a[counter2]);
		}
		count[counter]=j;
		sort(a,a+j);
		sum[counter]=task(a,count[counter]);
		if(j%2==0)
			j--;
		printf("%lld %lld\n",sum[counter],a[j/2]);
	}

	return 0;
}