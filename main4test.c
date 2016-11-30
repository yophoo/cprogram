/*
 * main4test.c
 *
 *  Created on: 2016年11月8日
 *      Author: yophoo
 */
#include <stdio.h>
#include <stdlib.h>
#include "test001.h"

int
main(){
	/*打开文件*/
//	FILE *file;
//	char *filename = "test.txt";
//	randnumfile(filename);
//	if((file = fopen(filename,"r+")) == NULL)
//		return 0;
//	cc(file);
//	fclose(file);
//	printword();
//	printf("rightrot(13,2) is:%d\n",rightrot(13,2));
//	int array[] = {1,21,11,20,67,76,31,4,5,6,78,8,102,110,23,74,39,100,222,200,221,106,123,234,345,764,321,213,320,890,66,912,854};
//	int size = sizeof(array)/sizeof(int);
//	int *temp;
//	temp = (int *)malloc(size*sizeof(int));
//	if(!temp)
//		return 0;
//	merge_sort(array,temp,0,size-1);
//	for(int i=0;i<size-1;i++)
//		printf("%d  ",array[i]);
//	free(temp);
//	temp = NULL;
//	printf("\n");
//	printf("the index of number 110 in the array is:%d",insert_search(110,array,0,size-1));
//	printf("the index of number 854 in the array is:%d",fibonacci_search(854,array,size));
//	char *s1 = "-A-Za-z0-9-a-A0a-b-c-!-~";
//	char *s2;
//	s2 = (char *)malloc(1000*sizeof(char));
//	if(!s2)
//		return 0;
//	expand(s1,s2);
//	for(int i = 0; s2[i] != '\0'; i++)
//		printf("%c",s2[i]);
//	free(s2);
	int a;
	getint(&a);
	printf("a = %d\n",a);
}
