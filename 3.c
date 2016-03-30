#include <stdio.h>
#include <time.h>
int main(){
	time_t t;
	t=time(NULL);
	int a=0;
	for(int i=0;i<100000000;i++){
		a+=1;
	}
	time_t tt;
	tt=time(NULL);
	printf("time is %ld",tt-t);
	return 0;	
}
