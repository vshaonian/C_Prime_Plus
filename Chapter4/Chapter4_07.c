#include <stdio.h>
#include <float.h>

void main(void)
{

	double dnum = 1.0 / 3.0;
	float fnum = 1.0 / 3.0;

	printf("The first time dnum is %.6f fnum is %.6f\n", dnum, fnum);
	printf("The second time dnum is %.12f fnum is %.12f\n", dnum, fnum);
	printf("The third time dnum is %.16f fnum is %.16f\n", dnum, fnum);
	printf("FLT_DIG is %f, DBL_DIG is %f.\n", FLT_DIG, DBL_DIG);

}
