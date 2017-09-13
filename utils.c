#include "utils.h"
#include <stdio.h>
#include <math.h>
void getmul(const double* val, const double* vec, const int* rIndex, const int*cIndex, int nz, double* res)
{
	int i; 
	for (i = 0; i < nz; i++)
	{
		int rInd = rIndex[i];
		int cInd = cIndex[i];
		res[rInd] += val[i] * vec[cInd];
	}
}

bool checkerror(const double* resp, const double* ress, int dim)
{
	int i;
	for (i = 0; i < dim; i++)
	{
		if (fabs((resp[i] - ress[i])/resp[i]) > 1E-6)
			return false;
	}

	return true;

}