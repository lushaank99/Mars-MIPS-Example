#include<stdio.h>
#include<stdlib.h>
int count=0;
int array[32],array1[32];
int t=0,y=0;

void decToBinary(int n)
{

    int binaryNum[1000];
    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
        count++;
    }


    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d",binaryNum[j]);
        array[t]=binaryNum[j];
        t++;
    }

}
void decToBinary1(int n)
{

    int binaryNum[1000];
    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
        count++;
    }


    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d",binaryNum[j]);
        array[y]=binaryNum[j];
        y++;
    }

}

void decimal_part(float num)
{
	//printf("%.3f ",num);
	//printf("\n");
	int i,j=0,a;
	a=(int)num;
	//printf("%d",a);
	float dec_part = num-a;
	int k=0;
	//printf("%.3f",dec_part);
	float q;
	while(k<23)
	{

		dec_part=dec_part*2;
		q=dec_part;
		int b;
		b=(int)dec_part;
		q=q-b;
		//printf("%d",b);
		array[t]=b;
		t++;
		dec_part=dec_part-(int)dec_part;

		k++;


	}
	//printf("%d",count);
	/*while(j<=count)
	{
		if(j==count)
		{
			i=1;
			printf("%d",i);


		}
		else
		{
			i=0;
			printf("%d",i);
			array[t]=i;
			i++;
		}
		j++;
	}*/

}
void decimal_part1(float num)
{
	//printf("%.3f ",num);
	//printf("\n");
	int i,j=0,a;
	a=(int)num;
	//printf("%d",a);
	float dec_part = num-a;
	int k=0;
	//printf("%.3f",dec_part);
	float q;
	while(k<23)
	{

		dec_part=dec_part*2;
		q=dec_part;
		int b;
		b=(int)dec_part;
		q=q-b;
		printf("%d",b);
		array1[y]=b;
		y++;
		dec_part=dec_part-(int)dec_part;

		k++;


	}
}
int count1=0;
int array2[32],array3[32];
int t1=0,y2=0;

void decToBinary2(int n)
{

    int binaryNum[1000];
    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
        count1++;
    }


    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d",binaryNum[j]);
        array2[t1]=binaryNum[j];
        t1++;
    }

}
void decToBinary3(int n)
{

    int binaryNum[1000];
    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
        count1++;
    }


    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d",binaryNum[j]);
        array2[y2]=binaryNum[j];
        y2++;
    }

}

void decimal_part2(float num)
{
	//printf("%.3f ",num);
	//printf("\n");
	int i,j=0,a;
	a=(int)num;
	//printf("%d",a);
	float dec_part = num-a;
	int k=0;
	//printf("%.3f",dec_part);
	float q;
	while(k<52)
	{

		dec_part=dec_part*2;
		q=dec_part;
		int b;
		b=(int)dec_part;
		q=q-b;
		//printf("%d",b);
		array2[t1]=b;
		t1++;
		dec_part=dec_part-(int)dec_part;

		k++;


	}
	//printf("%d",count);
	/*while(j<=count)
	{
		if(j==count)
		{
			i=1;
			printf("%d",i);


		}
		else
		{
			i=0;
			printf("%d",i);
			array[t]=i;
			i++;
		}
		j++;
	}*/

}
void decimal_part3(float num)
{
	//printf("%.3f ",num);
	//printf("\n");
	int i,j=0,a;
	a=(int)num;
	//printf("%d",a);
	float dec_part = num-a;
	int k=0;
	//printf("%.3f",dec_part);
	float q;
	while(k<52)
	{

		dec_part=dec_part*2;
		q=dec_part;
		int b;
		b=(int)dec_part;
		q=q-b;
		printf("%d",b);
		array3[y2]=b;
		y2++;
		dec_part=dec_part-(int)dec_part;

		k++;


	}
}
void decToBinary4(int n)
{

    int binaryNum[1000];
    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;

    }


    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d",binaryNum[j]);
    }

}
// Driver program to test above function
int main()
{
printf("\n");
{
	char cha;
 	printf("\nenter the character");
 	scanf("%c",&cha);
 	int r;
 	r=(int)cha;
 	printf("%d",r);
 	printf("\nits binary value");
 	decToBinary4(r);
}
printf("\n");
printf("\n");
{
	int k,l=0;

	char ch=(char)46;
    float n;
    printf("\n enter the value to print and here you can test for both int datatype and floatdata type\n");
    scanf("%f",&n);
    printf("\n binary value is above for real part\n");
    decToBinary(n);
 	printf("\n\n\n");
  	array[t]=ch;
  	t++;
    decimal_part(n);

    int cout=count-1;

    for(k=0;k<32;k++)
    {
    	if(array[k]==(char)46)
    	{
    		printf("%c",array[k]);
    	}
    	else
    	{
    		printf("%d",array[k]);
    	}
    }
 	for(l=0;l<=32;l++)
 	{
 		if(array[l]==(char)46)
 		{
 			ch=array[l];
 			while(count-1>0)
 			{
 				array[l]=array[l-1];
 				count--;
 				l--;
 			}
			array[l]=(char)46;
		}

 	}
 	printf("\n after changing to (1.xxxxxx)\n");
 	for(k=0;k<32;k++)
    {
    	if(array[k]==(char)46)
    	{
    		printf("%c",array[k]);
    	}
    	else
    	{
    		printf("%d",array[k]);
    	}
    }
    printf("\n");
 	int biasedexp=cout+127;
 	//printf("\nbiased exponent value\n");

 	//printf("\nmantissa part is above:\n");

 	printf("\nIEEE floating point for 32-bit (single precision)\n");
 	if(n>0)
 	{
 		printf("0 ");
 		decToBinary1(biasedexp);
 		printf(" ");
 		decimal_part1(n);
 	}
 	else
 	{
 		printf("1 ");
 		decToBinary1(biasedexp);
 		printf(" ");
 		decimal_part1(n);

 	}

}
printf("\n\n");
{
	int k,l=0;

	char ch=(char)46;
    float n;
 printf("\n\n enter the value to print and here you can test for both int datatype and doubledata type\n");

    scanf("%f",&n);
    printf("\n binary value is above for real part\n");
    decToBinary2(n);
    printf("\n\n\n");
  	array2[t1]=ch;
  	t1++;
    decimal_part2(n);

    int cout=count1-1;

    for(k=0;k<64;k++)
    {
    	if(array2[k]==(char)46)
    	{
    		printf("%c",array2[k]);
    	}
    	else
    	{
    		printf("%d",array2[k]);
    	}
    }
 	for(l=0;l<=64;l++)
 	{
 		if(array2[l]==(char)46)
 		{
 			ch=array2[l];
 			while(count1-1>0)
 			{
 				array2[l]=array2[l-1];
 				count1--;
 				l--;
 			}
			array2[l]=(char)46;
		}

 	}
 	printf("\n after changing to (1.xxxxxx)\n");
 	for(k=0;k<64;k++)
    {
    	if(array2[k]==(char)46)
    	{
    		printf("%c",array2[k]);
    	}
    	else
    	{
    		printf("%d",array2[k]);
    	}
    }
    printf("\n");
 	int biasedexp=cout+1023;
 	//printf("\nbiased exponent value\n");

 	//printf("\nmantissa part is above:\n");

 	printf("\nIEEE floating point for 64-bit(double precision)\n");
 	if(n>0)
 	{
 		printf("0 ");
 		decToBinary3(biasedexp);
 		printf(" ");
 		decimal_part3(n);
 	}
 	else
 	{
 		printf("1 ");
 		decToBinary3(biasedexp);
 		printf(" ");
 		decimal_part3(n);

 	}
}

}
