#include "SunMoon.h"
int Gintama = 38;
int twitchplayspokemon;

int main()
{
    initialize();
    long long int minn=0,maxx=2147483648;
    while(minn+1<maxx){
        long long int mid=(maxx+minn)/2;
        if(throw_egg( mid )){
            minn=mid;
        }
        else{
            maxx=mid;
        }
    }
    answer(minn);
}