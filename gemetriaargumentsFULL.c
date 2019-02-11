#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAX 15
int value;
char string[MAX]; 
int gemetria_english(char c_string);
int gemetria_alw(char c_string);
int gemetria_x(char c_string);
int gemetria_tq(char c_string);
void usage();
int main(int argc, char *argv[])
{

if ( argc < 2 || !strcmp(argv[1], "-h") || !strcmp(argv[1], "--help"))
{
usage();
}

else
{
int value=0,total=0,ctr;
int value_en=0,value_al=0,value_x=0,value_tq=0;
int total_en=0,total_al=0,total_x=0,total_tq=0;
strcpy(string,argv[1]);
puts("");
printf("\tEnglish\tALW\tCypherX\tTQ\n");
for (ctr=0;ctr<MAX;ctr++)
{
	char c_string=string[ctr];
	if (c_string != '\0')
	{
	value_en=gemetria_english(c_string);
	value_al=gemetria_alw(c_string);
	value_x=gemetria_x(c_string);
	value_tq=gemetria_tq(c_string);
	total_en+=value_en;
	total_al+=value_al;
	total_x+=value_x;
	total_tq+=value_tq;
	printf("%c\t%d\t%d\t%d\t%d\n", string[ctr],value_en,value_al,value_x,value_tq); 
	}}
printf("%c[4mTotal:\t%d\t%d\t%d\t%d%c[0m\n", 27, total_en,total_al,total_x,total_tq, 27);
puts("");
}
}

int gemetria_english(char c_string)
{
	if (c_string== '\0' || c_string=='-')
	value=0;
	else if (c_string=='A' || c_string=='a')
	value=2;	
	else if (c_string=='B' || c_string=='b')
	value=300;	
	else if (c_string=='C' || c_string=='c')
	value=70;	
	else if (c_string=='D' || c_string=='d')
	value=3;	
	else if (c_string=='E' || c_string=='e')
	value=5;	
	else if (c_string=='F' || c_string=='f')
	value=9;	
	else if (c_string=='G' || c_string=='g')
	value=60;	
	else if (c_string=='H' || c_string=='h')
	value=1;	
	else if (c_string=='I' || c_string=='i')
	value=8;	
	else if (c_string=='J' || c_string=='j')
	value=500;	
	else if (c_string=='K' || c_string=='k')
	value=400;	
	else if (c_string=='L' || c_string=='l')
	value=50;	
	else if (c_string=='M' || c_string=='m')
	value=6;	
	else if (c_string=='N' || c_string=='n')
	value=7;	
	else if (c_string=='O' || c_string=='o')
	value=20;	
	else if (c_string=='P' || c_string=='p')
	value=80;	
	else if (c_string=='Q' || c_string=='q')
	value=800;	
	else if (c_string=='R' || c_string=='r')
	value=100;	
	else if (c_string=='S' || c_string=='s')
	value=10;	
	else if (c_string=='T' || c_string=='t')
	value=4;	
	else if (c_string=='U' || c_string=='u')
	value=30;	
	else if (c_string=='V' || c_string=='v')
	value=40;	
	else if (c_string=='W' || c_string=='w')
	value=200;	
	else if (c_string=='X' || c_string=='x')
	value=700;	
	else if (c_string=='Y' || c_string=='y')
	value=90;	
	else if (c_string=='Z' || c_string=='z')
	value=600;	
return value;
}

int gemetria_alw(char c_string)
{
	if (c_string== '\0' || c_string=='-')
	value=0;
	else if (c_string=='A' || c_string=='a')
	value=1;	
	else if (c_string=='B' || c_string=='b')
	value=20;	
	else if (c_string=='C' || c_string=='c')
	value=13;	
	else if (c_string=='D' || c_string=='d')
	value=6;	
	else if (c_string=='E' || c_string=='e')
	value=25;	
	else if (c_string=='F' || c_string=='f')
	value=18;	
	else if (c_string=='G' || c_string=='g')
	value=11;	
	else if (c_string=='H' || c_string=='h')
	value=4;	
	else if (c_string=='I' || c_string=='i')
	value=23;	
	else if (c_string=='J' || c_string=='j')
	value=16;	
	else if (c_string=='K' || c_string=='k')
	value=9;	
	else if (c_string=='L' || c_string=='l')
	value=2;	
	else if (c_string=='M' || c_string=='m')
	value=21;	
	else if (c_string=='N' || c_string=='n')
	value=14;	
	else if (c_string=='O' || c_string=='o')
	value=7;	
	else if (c_string=='P' || c_string=='p')
	value=26;	
	else if (c_string=='Q' || c_string=='q')
	value=19;	
	else if (c_string=='R' || c_string=='r')
	value=12;	
	else if (c_string=='S' || c_string=='s')
	value=5;	
	else if (c_string=='T' || c_string=='t')
	value=24;	
	else if (c_string=='U' || c_string=='u')
	value=17;	
	else if (c_string=='V' || c_string=='v')
	value=10;	
	else if (c_string=='W' || c_string=='w')
	value=3;	
	else if (c_string=='X' || c_string=='x')
	value=22;	
	else if (c_string=='Y' || c_string=='y')
	value=15;	
	else if (c_string=='Z' || c_string=='z')
	value=8;	
return value;
}

int gemetria_x(char c_string)
{
	if (c_string== '\0' || c_string=='-')
	value=0;
	else if (c_string=='A' || c_string=='a')
	value=9;	
	else if (c_string=='B' || c_string=='b')
	value=20;	
	else if (c_string=='C' || c_string=='c')
	value=13;	
	else if (c_string=='D' || c_string=='d')
	value=6;	
	else if (c_string=='E' || c_string=='e')
	value=17;	
	else if (c_string=='F' || c_string=='f')
	value=2;	
	else if (c_string=='G' || c_string=='g')
	value=19;	
	else if (c_string=='H' || c_string=='h')
	value=12;	
	else if (c_string=='I' || c_string=='i')
	value=23;	
	else if (c_string=='J' || c_string=='j')
	value=16;	
	else if (c_string=='K' || c_string=='k')
	value=1;	
	else if (c_string=='L' || c_string=='l')
	value=18;	
	else if (c_string=='M' || c_string=='m')
	value=5;	
	else if (c_string=='N' || c_string=='n')
	value=22;	
	else if (c_string=='O' || c_string=='o')
	value=15;	
	else if (c_string=='P' || c_string=='p')
	value=26;	
	else if (c_string=='Q' || c_string=='q')
	value=11;	
	else if (c_string=='R' || c_string=='r')
	value=4;	
	else if (c_string=='S' || c_string=='s')
	value=21;	
	else if (c_string=='T' || c_string=='t')
	value=8;	
	else if (c_string=='U' || c_string=='u')
	value=25;	
	else if (c_string=='V' || c_string=='v')
	value=10;	
	else if (c_string=='W' || c_string=='w')
	value=3;	
	else if (c_string=='X' || c_string=='x')
	value=14;	
	else if (c_string=='Y' || c_string=='y')
	value=7;	
	else if (c_string=='Z' || c_string=='z')
	value=24;	
return value;
}

int gemetria_tq(char c_string)
{
	if (c_string== '\0' || c_string=='-')
	value=0;
	else if (c_string=='A' || c_string=='a')
	value=5;	
	else if (c_string=='B' || c_string=='b')
	value=20;	
	else if (c_string=='C' || c_string=='c')
	value=2;	
	else if (c_string=='D' || c_string=='d')
	value=23;	
	else if (c_string=='E' || c_string=='e')
	value=13;	
	else if (c_string=='F' || c_string=='f')
	value=12;	
	else if (c_string=='G' || c_string=='g')
	value=11;	
	else if (c_string=='H' || c_string=='h')
	value=3;	
	else if (c_string=='I' || c_string=='i')
	value=0;	
	else if (c_string=='J' || c_string=='j')
	value=7;	
	else if (c_string=='K' || c_string=='k')
	value=17;	
	else if (c_string=='L' || c_string=='l')
	value=1;	
	else if (c_string=='M' || c_string=='m')
	value=21;	
	else if (c_string=='N' || c_string=='n')
	value=24;	
	else if (c_string=='O' || c_string=='o')
	value=10;	
	else if (c_string=='P' || c_string=='p')
	value=4;	
	else if (c_string=='Q' || c_string=='q')
	value=16;	
	else if (c_string=='R' || c_string=='r')
	value=14;	
	else if (c_string=='S' || c_string=='s')
	value=15;	
	else if (c_string=='T' || c_string=='t')
	value=9;	
	else if (c_string=='U' || c_string=='u')
	value=25;	
	else if (c_string=='V' || c_string=='v')
	value=22;	
	else if (c_string=='W' || c_string=='w')
	value=8;	
	else if (c_string=='X' || c_string=='x')
	value=6;	
	else if (c_string=='Y' || c_string=='y')
	value=18;	
	else if (c_string=='Z' || c_string=='z')
	value=19;	
return value;
}

void usage()
{
puts("Usage: gemetria [STRING]");
puts("Input strings and view the values from various ciphers."); 
puts("");
puts("Modes Available:");
puts("");
puts("English:  	      An English Qabalah, exted by Frater Abraxas");
puts("");
puts("ALW Cipher:             Developed by Carol Smith, using the grid on sheet 16 of Chapter 3 Liber AL vel Legis.");
puts("");
puts("CypherX:                Based on the ALW cipher.");
puts("");
puts("TQ:                     An extension on Crowley's take on Liber 27, developed by R.L. Gillis.");
puts("");
puts("");
puts("Using gemetriaargumentsFULL.c");
}
