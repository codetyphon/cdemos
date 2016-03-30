#include <stdio.h>
#include <time.h>
int main(){
	time_t t;
	t=time(NULL);
	printf("time is %ld",t);
	return 0;	
}
