#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_COMMANDS 2

void matrix_multiply(int p)
{
	srand((unsigned int)time(NULL));
	int  sum = 0,c,d,k;
	int first[p][p], second[p][p], multiply[p][p];

	printf(" first matrix elements:----\n");

	  for (c = 0; c < p; c++)
	  {
		for (d = 0; d < p; d++)
		{
			first[c][d]=1+rand()%9;
			//printf("%d ",first[c][d]);
		}
		//printf("\n");
	  }
	printf(" second matrix:-------\n");
	  for (c = 0; c < p; c++)
	  {
		for (d = 0; d < p; d++)
		{
			second[c][d]=1+rand()%9;
			//printf("%d ",second[c][d]);
		}
		//printf("\n");
	  }

		for (c = 0; c < p; c++)
	 	{
		  for (d = 0; d < p; d++)
		  {
		    for (k = 0; k < p; k++)
		    {
		      sum = sum + first[c][k]*second[k][d];
		    }

			    multiply[c][d] = sum;
			    sum = 0;
		  }
		}

		printf("Product of the matrices:\n");

}

int main()
{
	char * commandsForGnuplot[] = {"set title \"graph number of units vs time\"", "plot 'data.temp'"};
	srand((unsigned int)time(NULL));
	int n=4+(rand()%400);
	int array[n];
	double array1[n];
	int i;
	for(i=0;i<n;i++)
	{
		array[i]=i+2;

		printf("\n\nvalue of n is %d ",array[i]);
		int value=array[i];
		clock_t t;
	    t = clock();

		matrix_multiply(value);

    	t = clock() - t;
    	double time_taken = ((1.8)*100*(double)t)/CLOCKS_PER_SEC; // in seconds
 		float arr=time_taken;
 		array1[i]=arr;
    	printf("\n\nmatrix_multiply() took %f  seconds to execute \n", time_taken);
		printf("\n***********************");
		printf("\n***********************");
		//printf("\n\n");

	}

    // array1[n];
    //double array[n];
    FILE * temp = fopen("data.temp", "w");

    FILE * gnuplotPipe = popen ("gnuplot -persistent", "w");

    for (i=0; i < n; i++)
    {
    	fprintf(temp, "%lf %d \n", array1[i], array[i]);
    }

    for (i=0; i < NUM_COMMANDS; i++)
    {
    	fprintf(gnuplotPipe, "%s \n", commandsForGnuplot[i]);
    }
    return 0;

}
