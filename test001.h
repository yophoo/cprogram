/*
 * test001.h
 *
 *  Created on: 2016Äê11ÔÂ8ÈÕ
 *      Author: yophoo
 */

#ifndef TEST001_H_
#define TEST001_H_
void test001(void);
void test002(void);
void test003(void);
void test004(void);
void test005(void);
void test006(void);
void test007(void);
void test008(void);
void test009(void);
void test010(void);
void test011(void);
void test012(void);
void test013(void);
void test014(void);
void wc(FILE *);
void cc(FILE *);
void randnumfile(const char *);
void printword(void);
int atoi(const char *);
int lower(int);
int lower2(int);
void squeeze_c(char *,int);
void squeeze_c2(char *,char *);
void squeeze_str(char *,char *);
char * str_cat(const char *,const char *);
int any(const char *,const char *);
unsigned getbits(unsigned,int,int);
unsigned setbits(unsigned,int,int,unsigned);
unsigned invert(unsigned,int,int);
unsigned rightrot(unsigned,int);
void escape(char *,char *);
void anti_escape(char *,char *);
int atoiv2(char *);
void bubble_sort(int *,int);
void quick_sort(int *array,int left,int right);
void insert_sort(int *,int);
void shell_sort(int *, int);
void merge(int *array,int *temp,int left,int mid,int right);
void merge_sort(int * array,int * temp,int left,int right);
int sequence_search(int key,int *array,int size);
int binsearch(int key,int* array,int size);
int binsearch1(int key,int* array,int size);
int binsearch2(int key,int* array,int left,int right);
int insert_search(int key,int *array,int left,int right);
int fibonacci_search(int key,int *array,int size);
void expand(const char * ,char *);
#endif /* TEST001_H_ */
