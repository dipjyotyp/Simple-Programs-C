/* (b) To read the data from the file ran.dat (created above) and computes the average of the data. It also finds the number of data above the average value.
T */
#include <stdio.h>
#include <stdlib.h>

struct ravalue
{
float n;
};

void main()
{
FILE *infile;
int i,n,count=0;
float sum=0, avg;

struct ravalue ra;
infile = fopen ("ran.dat", "r");

if (infile == NULL)
{
fprintf(stderr, "\nError opening file\n");
exit (1);
}

printf("Data in the file is :");

for (i = 0; i <=9 ; i++)
{
        fread(&ra, sizeof(ra), 1, infile);
        printf("\n\t%f",ra.n);
        sum += ra.n;
}

avg = sum / 10;

printf("\n\nAverage = %f\n", avg);


fseek(infile, -sizeof(struct ravalue), SEEK_END);

printf("\nNumbers above average are : \n");

for(n = 0; n <= 9; n++)
   {
      fread(&ra, sizeof(struct ravalue), 1, infile);
      if ( avg < ra.n )
	  {
		  printf("\t%f\n",ra.n);
		  count++;
	  }
      fseek(infile, -2*sizeof(struct ravalue), SEEK_CUR);
   }

printf("\nNo of data above average is:\t%d\n",count);

fclose (infile);

}

