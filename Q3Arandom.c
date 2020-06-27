#include <stdio.h> 
#include <stdlib.h> 
struct ravalue
{
float n;
};

void main()
{
struct ravalue ra;
float max=1.5, min=-1.5; 
int i; 
FILE *outfile;

outfile = fopen("ran.dat", "w"); 
if (outfile == NULL)
{
fprintf(stderr, "\nError opend file\n"); 
exit (1);
}

for (i = 0; i <=9; i++)
{
double range = (max - min); 
double div = RAND_MAX / range; 
ra.n = min + (rand() / div); 
fwrite (&ra, sizeof(ra), 1, outfile);
}

if(fwrite != 0) 
	printf("contents to file written successfully !\n"); 
else 
	printf("error writing file !\n");

fclose (outfile);

}
