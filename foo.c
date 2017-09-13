#include <omp.h>
#include <stdio.h>

int main(){
	
	#pragma omp parallel
	{
	int ID = omp_get_thread_num();
	printf("Hello(%d)", ID);
	printf(" World(%d) \n", ID);
	}
	
	double A[1000];
	omp_set_thread_num(4);
	#pragma omp parallel
	{
		int D = omp_get_thread_num();
		pooh(D, A);
	}
	printf("all done\n");
}