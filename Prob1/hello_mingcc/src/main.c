/*
 * main.c
 *
 *  Created on: Jun 4, 2014
 *      Author: Arjun Ananthamurthy
 *
 * What's the <condition> so that the following code snippet  prints both HelloWorld
 * if(<condition>)
        printf ("Hello");
   else
        printf("World")
 */

//Program to print
#include<stdio.h>

int main(){

	printf("2");
	if(!printf(" Hello1 "))// this gets printed returns non zero value
		printf("Hello2");// not printed
	else
		printf("World");// this gets printed

	return 0;

}
