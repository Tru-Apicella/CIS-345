#include <stdio.h>
#include <pthread.h>
#include <math.h>
#include <stdlib.h>

long globalsum = 0;

void *atomic(void *arg){

	long tid = (long)arg;
	long localsum = 0;

	//localsum += sqrt(sqrt(0));

	//lock here
	globalsum = globalsum + localsum;	//loop this
	//unlock here

	//pthread_join();
}

int main(int argc, char *argv[]){

	int m = atoi(argv[1]);
	int n = atoi(argv[2]);
	int start;
	int end;
	pthread_t thr;

	/*if(argc = 3){
		long i;
		//put for loop here
		pthread_create(&thr[i], NULL, atomic, (void*)i);

		//put for loop here
		pthread_join(thr[i], NULL);

	}
	else{
		exit(0);
	}*/

	printf("argc = %d\n", argc);
	printf("arg[0] = %s\n", argv[0]);
	printf("arg[1] = %s\n", argv[1]);
	printf("arg[2] = %s\n", argv[2]);

	return 0;
}