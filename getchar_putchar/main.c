/*
 * main.c
 *
 * This program takes input charcters form the console and counts number of charcters number
 * of lines and number of words entered and displays their value.
 * This is the solution for the problem Exercise 1.11 and 1.12
 *  ANSI C textbook by Brain M Kernighan and Dennis M Ricthie
 *
 *  Created on: Jun 6, 2014
 *      Author: Arjun Ananthamurthy
 */


#include<stdio.h>
#include<conio.h>
#include <math.h>
int main()
{
	char c;
	long nc=0,nl=0,nw=0;// number characters number of lines
    char array[1000000];
	while((c=getchar()) != EOF){
	array[nc]=c;
	++nc;
	if(c =='\n')
	{
		++nl;
		nw++;
	}
	if(c==' ')// && c!='\n' && c!='\t'){
		++nw;
	//}
	putchar(c);
	}

	printf("nc=%ld nl=%ld nw=%ld \n ",nc,nl,nw);
	int i;
	for(i=0;i<nc;i++)
	{
	     if(array[i]!=' ' && array[i]!='\n' && array[i]!='\t'){
	    	 putchar(array[i]);
	     }
	     else
	    	 putchar('\n');

	}
    //getch();
	return 0;


}
