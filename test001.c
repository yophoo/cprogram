/*
 * test001.c
 *
 *  Created on: 2016年11月8日
 *      Author: yophoo
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>   /*使用当前时钟做种子生成随机数*/
#include <ctype.h>
#include <string.h>
#include "getch.h"

#define TRUE 1
#define FALSE 0

void test001(){/*完成华氏度和摄氏度之间的转换*/
	float fahr,celsius;
	int lower,upper,step;
	lower = 0;
	upper = 300;
	step = 20;  /*步长 20*/

	printf("%7s\t%7s\n","fahr","celsius");

	fahr = lower;
	while(fahr <= upper){
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%7.0f\t%7.1f\n",fahr,celsius);
		fahr = fahr + step;
	}
}

void test002(){
	int fahr,celsius;
	printf("%7s\t%7s\n","celsius","fahr");
	for(celsius = 0;celsius <= 120;celsius += 10 ){
		fahr = (9.0/5.0) * celsius + 32;
		printf("%7d\t%7d\n",celsius,fahr);
	}
}

void test003(){
	float fahr,celsius;
	printf("%7s\t%7s\n","fahr","celsius");
	for(fahr = 300;fahr >= 0;fahr -= 20){
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%7.0f\t%7.1f\n",fahr,celsius);
	}
}

void test004(){
	char c;
	while((c = getchar()) != EOF){/*这里使用 Ctrl-Z 来结束输入*/
		putchar(c);
	}
}

void test005(){
	int c;
	c = (getchar() != EOF);/*有输入则是 1，直接按 Ctrl-Z 则是 0*/
	printf("%d",c);
}

void test006(){/*输入字符计数*/
	float wc;
	for(wc = 0;getchar() != EOF;++wc)
		;
	printf("The number of characters you entered is:%.0f\n",wc);
}

void test007(){/*输入行计数*/
	int c,lc;
	lc = 0;
	while((c = getchar()) != EOF)
		if( c == '\n')
			++lc;
	printf("The total line is:%d\n",lc);
}

void test008(){/*将输入复制到输出并删除其中连续的空格符*/
	int c,lastc;
	lastc = 'c';
	while((c = getchar()) != EOF){
		if(c != ' ')/*如果非空格符，正常输出*/
			putchar(c);
		else if(lastc != ' ')/*如果是空格符，查看前一个字符是不是空格，如果不是，正常输出（空格）*/
			putchar(c);
		lastc = c;/*记录本轮读取的字符*/
	}
}

void test009(){
	int c;
	while((c = getchar()) != EOF){
		if(c == '\n'){
			putchar('\\');
			putchar('n');
		}
		if(c == '\t'){
			putchar('\\');
			putchar('t');
		}
		if( c == '\\'){
			putchar('\\');
			//putchar('\\');
		}
		putchar(c);
	}
}

void test010(){/*打印水仙花数:三位数的每位数字的3次幂之和等于它本身。例：1^3 + 5^3 + 3^3 = 153*/
	int i,j,k,n,s;
	printf("水仙花数有：\n");
	for(n = 100;n < 1000;n++){
		i = n/100; /*百位数*/
		j = (n/10)%10;/*十位数*/
		k = n%10;/*个位数*/
		s = i*i*i+j*j*j+k*k*k;
		if(s == n)
			printf("%6d ",n);
	}
}

void test011(){/*打印四叶玫瑰数：四位数每位数字的4次幂之和等于它本身*/
	int i,j,k,l,n,s;
	printf("四叶玫瑰数有：\n");
	for(n = 1000;n < 10000;n++){
		i = n/1000;/*千位上的数*/
		j = (n/100)%10;/*百位上的数*/
		k = (n/10)%10;/*十位上的数*/
		l = n%10;/*个位上的数*/
		s = pow(i,4)+pow(j,4)+pow(k,4)+pow(l,4);
		if(s == n)
			printf("%6d ",n);
	}
}

void test012(){/*打印五角星数：五位数每位数字的5次幂之和等于它本身*/
	int i,j,k,l,m,n,s;
	printf("五角星数有：\n");
	for(n = 10000;n < 100000;n++){
		i = n/10000;
		j = (n/1000)%10;
		k = (n/100)%10;
		l = (n/10)%10;
		m = n%10;
		s = pow(i,5)+pow(j,5)+pow(k,5)+pow(l,5)+pow(m,5);
		if(s == n)
			printf("%7d",n);
	}
}

void test013(){/*打印六合数：六位数每位数字的6次幂之和等于它本身*/
	int i,j,k,l,m,n,a,s;
	printf("六合数有：\n");
	for(a = 100000;a < 1000000;a++){
		i = a/100000;
		j = (a/10000)%10;
		k = (a/1000)%10;
		l = (a/100)%10;
		m = (a/10)%10;
		n = a%10;
		s = pow(i,6)+pow(j,6)+pow(k,6)+pow(l,6)+pow(m,6)+pow(n,6);
		if(s == a)
			printf("%8d",a);
	}
}

void test014(){/*打印北斗七星数：七位数每位数字的7次幂之和等于它本身*/
	int i,j,k,l,m,n,o,a,s;
	printf("北斗七星数有：\n");
	for(a = 1000000;a < 10000000;a++){
		i = a/1000000;
		j = (a/100000)%10;
		k = (a/10000)%10;
		l = (a/1000)%10;
		m = (a/100)%10;
		n = (a/10)%10;
		o = a%10;
		s = pow(i,7)+pow(j,7)+pow(k,7)+pow(l,7)+pow(m,7)+pow(n,7)+pow(o,7);
		if(s == a)
			printf("%8d",a);
	}
}

void wc(FILE *file){/*统计文件的行数、单词数和字符数*/
	int c,nl,nw,nc,flag;
	flag = 0;
	nl = nw = nc = 0;
	while((c = fgetc(file)) != EOF){
		++nc;
		if(c == '\n')
			++nl;
		if(c == ' ' || c == '\n' || c == '\t')
			flag = 0;
		else if(flag == 0){
			flag = 1;
			++nw;
		}
	}
	printf("lines:%d\twords:%d\tcharacters:%d\n",nl,nw,nc);
}

void cc(FILE *file){/*统计各个数字、空白符及其他字符出现的次数*/
	int c,i,nwhite,nother;
	int ndigit[10];
	nwhite = nother = 0;
	for(i = 0;i < 10; ++i){/*初始化数组*/
		ndigit[i] = 0;
	}
	while((c = fgetc(file)) != EOF)
		if(c >= '0' && c <= '9')
			++ndigit[c-'0'];/*使用 c-'0' 表达式来生成数字的下标*/
		else if(c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	printf("digits = ");
	for(i = 0;i < 10; ++i)
		printf("%d:  %-5d",i,ndigit[i]);
	printf(", white space = %d,other = %d\n",nwhite,nother);
}

void randnumfile(const char *filename){/*生成一个随机数文件*/
	FILE *file;
	int i;
	if((file = fopen(filename,"w")) == NULL)/*以写模式打开文件*/
		return;
	srand((unsigned)time(NULL));/*以当前时间为种子来初始化随机数*/
	for(i = 0;i < 1000;i++){
		if(i != 0 && i%10 == 0)
			fprintf(file,"\n");
		fprintf(file,"%d\t",rand()%1000);/*rand()%m生成0-m之间的随机数*/
	}
	fclose(file);/*别忘了关闭文件*/
}

void printword(){/*打印输入单词，每行打印一个单词*/
	int c,flag;
	flag = 0;
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			if(flag == 1){
				putchar('\n');
				flag = 0;
			}
		}else if(flag == 0){
			flag = 1;
			putchar(c);
		}else
			putchar(c);
	}
}

int atoi(const char *s){/* 将字符串 s 转换为相应的整型数，遇到非数字字符结束*/
	int i,n;
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}

/*atoi 函数：将字符串 s 转换为整型数，采用指针实现*/
int a2i(char *s){
	int n, sign;

	for(; isspace(*s); s++)
		;
	sign = (*s == '-')? -1 : 1;
	if(*s == '+' || *s == '-')
		s++;
	for(n = 0; isdigit(*s); s++)
		n = 10 * n + (*s - '0');
	return sign * n;
}

int a2iv2(char *s){/*将整数字符串转换成整型数，遇到非整数字符则中止*/
	int i, n, sign;

	for (i = 0; isspace(s[i]); i++)  /* skip white space */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')  /* skip sign */
		i++;
	for (n = 0; isdigit(s[i]); i++)
		n = 10 * n + (s[i] - '0');
	return sign * n;
}

int lower(int c){ /* lower 函数：将字符 c 转换成小写形式，只适用于 ASCII 码 */
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

int lower2(int c){ /* lower 函数：将字符 c 转换成小写形式，只适用于 ASCII 码 */
	return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c ;
}

void squeeze_c(char *s,int c){ /*删除字符串 s 中的 c 字符*/
	int i,j;
	for(i = j = 0;s[i] != '\0';i++)
		if(s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}

void squeeze_c2(char *s,char *c){ /*从字符串 s 中找到字符串 c 中的匹配字符并删除*/
	int i,j,k;
	for(i = k = 0;s[i] != '\0';i++){
		for(j = 0;c[j] != '\0' && c[j] != s[i];j++)
			;
		if(c[j] == '\0')
			s[k++] = s[i];
	}
	s[k] = '\0';
}

/*str_cat函数：数组实现*/
char * str_cat(const char *s,const char *t){/*将字符串 t 连接到字符串 s 的尾部*/
	int i,j;
	char * buff;
	buff =(char*)malloc(1000*sizeof(char));
	if(!buff)
		return NULL;
	for(i = j = 0;s[i] != '\0';i++)  /*复制 s 字符串到缓存区*/
		buff[i] = s[i];
	while((buff[i++] = t[j++]) != '\0')/*在缓存区尾部复制 t 字符串*/
		;
	return buff;
}

/*str_cat 函数：指针实现*/
void str_cat2(char *s,char *t){
	while(*s != '\0')
		s++;
	while((*s++ = *t++) != '\0')
		;
}

/*str_end(s,t)函数：如果字符串 t 出现在字符串 s 尾部，该函数返回 1，否则返回 0*/
int str_end(char *s,char *t){
	char *bs = s;/*字符串 s 的开始*/
	char *bt = t;/*字符串 t 的开始*/

	while(*s != '\0')/*找到字符串 s 的结尾*/
		s++;
	while(*t != '\0')/*找到字符串 t 的结尾*/
		t++;
	for(;*s == *t;s--,t--)/*从尾部开始往前比较字符串 s 和 t，直到出现字符不相同，或者到某个字符串的开始位置为止*/
		if(t == bt || s == bs)
			break;/*到了某个字符串的开始位置，则退出循环*/
	if(*s == *t && t == bt && *s != '\0')/*到了字符串 t 的开始位置，并且都不是空字符*/
		return 1;
	else
		return 0;
}

/*str_ncpy(s,t,n) 函数：从字符串 t 中复制 n 个字符到 s 中*/
void str_ncpy(char *s,char *t,int n){
	while((*t !='\0') && (n-- > 0))/* 字符串 t 没有到末端，且 n 非 0*/
		*s++ = *t++;
	while(n-- > 0)
		*s = '\0';/*字符串 s 其余部分都补 0*/
}

/*str_ncat(s,t,n) 函数：从字符串 t 中取 n 个字符到 s 的末端*/
void str_ncat(char *s,char *t,int n){
	while(*s++ != '\0')
		;
	s--;/*后退一个空字符*/
	while(n-- > 0)
		*s++ = *t++;
	*s = '\0';
}

/*str_ncmp(s,t,n) 函数：比较字符串 s 和 t 的前 n 个字符，并根据 s 按照字典顺序小于、等于或大于 t 的结果
 * 分别返回负整数、0或正整数*/
int str_ncmp(char *s,char *t,int n){
	for(;*s == *t;s++,t++)
		if(*s == '\0' || --n <= 0)/*如果 s 字符串已经结束或者已经比较了 n 个字符*/
			return 0;
	return *s - *t;
}

void squeeze_str(char *s,char *c){ /*从字符串 s 中找到字符串 c 并删除*/
	int i,j,k;
	char * buff;
	buff =(char*)malloc(1000*sizeof(char));
	if(!buff)
		return;
	for(i = k = 0;s[i] != '\0';i++){
		for(j = 0;(c[j] == s[i+j]) && c[j] !='\0';j++)
			;
		if(c[j] == '\0'){ /*找到匹配字符串*/
			i = i + j -1; /* 跳过 c 字串长度*/
		}else  /*如果没有找到，将当前字符复制到缓存区*/
			buff[k++] = s[i];
	}
	buff[k] = '\0';
	for(i = 0;i <= k;i++){/*将缓存区字符串复制回字符串 s 中*/
		s[i] = buff[i];
	}
	free(buff);
	buff = NULL;
}

int any(char *s,char *c){/*返回字符串 c 中字符第一次在字符串 s 中出现的位置*/
	int i,j;
	for(i = 0;s[i] != '\0';i++)
		for(j = 0;c[j] != '\0';j++)
			if(s[i] == c[j])
				return i;
	return -1;
}

/*注意下面这些 unsigned 数是 4 bit 长*/
unsigned getbits(unsigned x,int p,int n){/*返回 x 中从 p 位（最低位 0）开始右数 n 位的 bit 值*/
	// x >> (p+1-n):将期望的 n 个 bit 位移到字节的最右端，再和 1 按位与
	// ~(~0 << n):最右边的 n 位都置1，其余位置 0
	return (x >> (p+1-n) & ~(~0 << n));
}

unsigned setbits(unsigned x,int p,int n,signed y){/*将 x 中从 p 位开始的 n 个bit位设置位 y 中最右边 n 位的值，x 的其余各位保持不变*/
	// ~(~0 << n) : 最右边的 n 位置 1
	// (~(~0 << n)) << (p+1-n): 从 p 位开始 n 位置 1
	//  y & ~(~0 << n) ：取得 y 的最右边 n 位的值
	// (y & ~(~0 << n)) << (p+1-n) : 左移 p+1-n 位
	// x & ~((~(~0 << n)) << (p+1-n)) : 将 x 从 p 位开始往右 n 位置 0
	// 两者按位或
	return (((y & ~(~0 << n)) << (p+1-n)) | (x & ~((~(~0 << n)) << (p+1-n))));/*采用按位或*/
}

unsigned invert(unsigned x,int p,int n){/*将 x 中从第 p 位开始的 n 个 bit 位求反（1变0，0变1），x的其余各位保持不变*/
	return (x ^ ((~(~0 << n)) << (p+1-n)));/*采用和 1 异或*/
}

unsigned rightrot(unsigned x,int n){
	//  ~(~0 << n) : 最右边的 n 位置 1
	// x &  ~(~0 << n) : 取出 x 将要右移出的 n 位值
	// sizeof(unsigned): unsigned 的长度
	// (x &  ~(~0 << n)) << (sizeof(x) - n):将 x 右移出的 n 位放到最前面
	// 再和右移 n 位后的 x 进行按位或
	return(((x &  ~(~0 << n)) << (sizeof(x)- n)) | (x >> n));
}

/*将字符串 t 赋值到 s，将其中的换行符和制表符转换成可见字符 '\n' 和  '\t' */
void escape(char *s,char *t){
	int i,j;
	for(i = j = 0;t[i] != '\0';i++){
		switch(t[i]){
		case '\t':
			s[j++] = '\\';
			s[j++] = 't';
			break;
		case '\n':
			s[j++] = '\\';
			s[j++] = 'n';
			break;
		default:
			s[j++] = t[i];
			break;
		}
		s[j] = '\0';
	}
}

/*将字符串 t 赋值到 s，将其中可见字符 '\n' 和  '\t' 转换成换行符和制表符*/
void anti_escape(char *s,char *t){
	int i,j;
	for(i = j = 0;t[i] != '\0';i++){
		if(t[i]=='\\'){
			switch(t[++i]){
			case 'n':
				s[j++] = '\n';
				break;
			case 't':
				s[j++] = '\t';
				break;
			default:
				s[j++] = '\\';
				s[j++] = t[i];
				break;
			}
		}
		else
			s[j++] = t[i];
	}
	s[j] = '\0';
}

/*冒泡排序：比较两个相邻元素，如果第一个比第二个大，则交换位置*/
void bubble_sort(int *array,int size){
	int i, j, temp;
	for(j = 0;j < size-1;j++)
		for(i = 0;i < size -1 -j;i++){
			if(array[i] > array[i+1]){ /*如果第一个元素大于第二个元素，则交换位置*/
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] =  temp;
			}
		}

}

/*快速排序：取出数组中一个元素，假设其在数组中真实的位置应该是 A[k]，即数组中应该有 k-1 个小于它的元素，快速排序要做的事情就是找到正确的 k 值*/
void quick_sort(int *array,int left,int right){
	if(left < right){/*待排序的数组区间下标比较，应该是区间左下标小于区间右下标*/
		int i = left;
		int j = right;
		int key = array[left];
		while(i < j){
			while(i<j && key <= array[j])
				j--;/*从后往前遍历*/
			array[i] = array[j];/*位置互掉，array[j] 位置空出*/
			while(i<j && key >= array[i])
				i++;/*从前往后遍历*/
			array[j] = array[i];/*位置互掉，array[i] 位置空出*/
		}
		array[i] = key;/*经过上面遍历，最终找到了合适的位置 array[i]，将元素 key 插入其中*/
		quick_sort(array,left,i-1);/*对 key 元素左边的数组元素进行递归*/
		quick_sort(array,i+1,right);/*对 key 元素右边的数组元素进行递归*/
	}
}

/*插入排序：将一个无序数组元素插入到一个有序数组中完成排序，初始时，该有序数组元素个数为 0*/
void insert_sort(int *array,int size){
	int i, j, temp;

	for(i = 1;i < size;i++){/*从第 2 个元素开始循环*/
		temp = array[i];
		for(j = i;j > 0 && array[j-1] > temp;j--){/*将元素 i 和有序数组[0..i-1]中的元素进行比较，从后往前查找直到找到第一个小于该元素的元素位置为止*/
			array[j] = array[j-1]; /*否则，进行位置后移*/
		}
		array[j] = temp; /*将该元素插入到有序数组中*/
	}
}

/*Shell 排序：使用步长递减的方法来实现分区块元素比较，第一次步长取数组元素个数的一半，以后每次步长折半，譬如 10 个元素，第一次步长为 5（元素1和6比较，2和7比较……），
 * 第二次步长为 5/2 =2（元素1和3比较，2和4比较……），直到步长为 1 为止（相邻元素比较），最后完成排序。 */
void shell_sort(int *array, int size){
       int gap, i, j, temp;

       for (gap = size/2; gap > 0; gap /= 2)/*步长取半，直到步长为 1（步长小于 1，则 gap/2 = 0）*/
           for (i = gap; i < size; i++)/*从步长点开始依次往后取元素比较，直到数组结束*/
               for (j=i-gap; j>=0 && array[j] > array[j+gap]; j-=gap){/*从当前元素开始，反向往前，以步长为间隔进行前后两个元素比较，直到出现前元素小于后元素的情况（说明前面的区段已经排序）*/
                   temp = array[j];  /*否则，进行前后元素交换*/
                   array[j] = array[j+gap];
                   array[j+gap] = temp;
               }
}

/*归并程序：将有二个有序数列 [left...mid] 和 [mid+1...right] 合并*/
void merge(int *array,int *temp,int left,int mid,int right){/*left、right 是数组下标*/
    int i = left,j = mid + 1;
    int k = 0;

    /*将 array 中的元素排序归并到 temp 中*/
    while (i <= mid && j <= right){/*将 array 分成两部分 [left...mid] 和 [mid+1...right]*/
        if (array[i] <= array[j]) /*分别从两个部分中取元素进行比较并排序后放入 temp 中*/
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];
    }

    /*如果是  [mid+1...right] 中元素先取完，那么将 [left...mid] 中的剩余元素依次放入 temp 的尾部*/
    while (i <= mid)
        temp[k++] = array[i++];

    /*如果是  [left...mid] 中元素先取完，那么将 [mid+1...right] 中的剩余元素依次放入 temp 的尾部*/
    while (j <= right)
        temp[k++] = array[j++];

    for (i = 0; i < k; i++)
        array[left + i] = temp[i];/* 将 temp 中排序好的元素放入 array 中 */
}

/*归并排序：采用二分递归法来分拆 array，直至前后部分数组各一个元素，然后使用上面的归并程序有序归并数组，直至整个 array 归并完成*/
void merge_sort(int * array,int * temp,int left,int right){/*left、right 是数组下标*/
	if(left < right){
		int mid = (left+right)/2;/*采用二分法*/
		merge_sort(array,temp,left,mid);/*递归排序左边部分*/
		merge_sort(array,temp,mid+1,right);/*递归排序右边部分*/
		merge(array,temp,left,mid,right); /*归并左右两部分有序数组*/
	}
}

/*顺序查找：依次取出数组的元素和给定值进行比较*/
int sequence_search(int key,int *array,int size){
	for(int i = 0;i < size;i++)
		if(array[i] == key)
			return i;
	return FALSE;
}

/* 折半查找，binsearch:  在顺序数组 v[](v[0] <= v[1] <= ... <= v[n-1])中查找元素 key */
int binsearch(int key, int *array, int size){
    int low, high, mid;

    low = 0;
    high = size - 1;
    while (low <= high) {
        mid = (low+high)/2;
        if (key < array[mid])
            high = mid - 1;
        else if (key  > array[mid])
            low = mid + 1;
        else    /* 找到匹配项 */
            return mid;
    }
    return FALSE;   /* 没有找到匹配项 */
}

int binsearch1(int key,int *array,int size){ /*改写后的折半查找*/
	int low,high,mid;
	low = 0;
	high = size-1;
	mid = (low + high)/2;
	while(low <= high || key != array[mid]){
		if(key < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
		mid = (low+high)/2;
	}
	if(key == array[mid])
		return mid; /* 找到匹配项 */
	else
		return FALSE; /* 没有找到匹配项 */
}

/*采用递归算法来改写折半算法*/
int binsearch2(int key,int *array,int left,int right){ /*left、right 是数组下标*/
	int mid  = (left + right)/2;
	if(array[mid] == key)
		return mid;
	if(array[mid] > key)
		return binsearch2(key,array,left,mid-1);
	if(array[mid] < key)
		return binsearch2(key,array,mid+1,right);
	return FALSE;
}

/*插值查找：折半查找的改进型，将中值 mid 根据数组中元素的分布规律来确定*/
int insert_search(int key,int *array,int left,int right){ /*left、right 是数组下标*/
	int mid  = left + ((key - array[left])/(array[right] - array[left]))*(right - left);
	if(array[mid] == key)
		return mid;
	if(array[mid] > key)
		return insert_search(key,array,left,mid-1);
	if(array[mid] < key)
		return insert_search(key,array,mid+1,right);
	return FALSE;
}

/*斐波那契查找：折半查找的改进型，利用黄金分割点来作为 mid 值进行查找*/
int fibonacci_search(int key,int *array,int size){
	const int MAX = 20;
	int left = 0;
	int right = size-1;
	int *F,*temp;
	int k = 0, mid;

	/*构建一个 max 个元素的斐波那契数组，对于日常应用而言，F[20] = 4181，基本够用了*/
	F = (int*)malloc(MAX*sizeof(int));
	if(!F)
		return FALSE;
	F[0] = 0;
	F[1] = 1;
	for(int i = 2;i < MAX;i++)
		F[i] = F[i-1] + F[i-2];

	while(size > F[k]-1)/*找到最适合 array 数组元素的斐波那契数 F[k]*/
		++k;

	temp = (int *)malloc((F[k]-1)*sizeof(int));/* 将数组 array 扩展到 F[k]-1 的长度 */
	if(!temp)
		return FALSE;

	for(int j = 0;j < size; j++)/*将数组 array 中元素拷贝到 temp 中*/
		temp [j] = array[j];
	for(int j = size;j < F[k]-1; j++) /* temp 中其他的元素值都设置为 array 数组的最后一个元素*/
		temp[j] = array[size-1];

	while(left <= right){
		mid = left + F[k-1]-1;
		if(key < temp[mid]){
			right = mid-1;
			k -= 1;
		}
		else if(key > temp[mid]){
			left = mid+1;
			k -= 2;
		}
		else{
			if(mid < size)
				return mid;/*若 mid<size 则说明 mid 即为查找到的位置*/
			else
				return size-1;/*若 mid>=size 则说明查找到的是扩展的数值,返回 size-1*/
		}
	}
	free(temp);
	free(F);
	return FALSE;
}

/*expand(s1,s2) 函数：用于将字符串 s1 中类似于 a-z 这样的速记符号在字符串 s2 中扩展为等价的完整列表 abc……xyz。该函数可以用于处理
 * 大小写字母和数字，并可以处理 a-b-c、a-z0-9与a-z等类似情况，作为前导和尾随的 - 字符原样复制*/
void expand(const char * s1,char *s2){
	char c;
	int i, j;
	i = j = 0;
	while((c = s1[i++]) != '\0') /*从 s1 中取字符*/
		if(s1[i] == '-' && s1[i+1] >= c){/*如果是连字符 - 后跟字符的话*/
			i++;
			while(c < s1[i])/*如果连字符 - 后的字符大于前一个字符，那么就递增字符的值存入 s2 中，即扩展速记字符*/
				s2[j++] = c++;
		}else
			s2[j++] = c;/*如果不是连字符 - 后跟字符，那么就原样复制 s1 中的字符*/
	s2[j] = '\0';
}

/*reverse 函数：倒置字符串 s 中各个字符的位置*/
void reverse(char *s){
       int c, i, j;

       for (i = 0, j = strlen(s)-1; i < j; i++, j--)
	    c = s[i], s[i] = s[j], s[j] = c;
}

/*reverse2 函数：倒置字符串 s 中各个字符的位置，采用指针改写*/
void reverse2(char *s){
	int c;
	char *t;

	for(t = s + (strlen(s)-1);s < t; s++,t--){/*t 指针指向 s 的尾部*/
		c = *s;
		*s = *t;
		*t = c;
	}
}

/*reverse3 函数：倒置字符串 s 中各个字符的位置，递归版本*/
void reverse3(char *s){
	reverser(s,0,strlen(s));
}
/*reverser 函数：递归方式倒置字符串 s 中各个字符的位置*/
void reverser(char *s,int i,int len){
	int c,j;
	j = len -(i+1);
	if(i < j){
		c = s[i];
		s[i] = s [j];
		s[j] = c;
		reverser(s,++i,len);
	}
}

/*itoa 函数：将数字 n 转换为字符串并保存到 s 中*/
void i2a(int n,char *s){
	int i, sign;
	if((sign = n) < 0)/*记录符号*/
		n = -n;       /*使 n 成为正数*/
	i = 0;
	do{              /*以反序生成数字*/
		s[i++] = n % 10 +'0';/*通过取余的方式来得到最右侧的个位数，并转换为字符*/
	}while((n /= 10) > 0); /*通过除 10 来不断删除最右侧的个位数*/
	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

/*itoa2 函数：改写itoa函数，上面的函数不能处理最大负数，改进型itoa2函数可以在任何机器上运行*/
#define abs(x) ((x) < 0 ? -(x):(x))
void i2a2(int n,char *s){
	int i, sign;
	sign = n; /*记录符号*/
	i = 0;
	do{                          /*以反序生成数字*/
		s[i++] = abs(n % 10)+'0';/*通过使用绝对值取余的方式来避开负数问题*/
	}while((n /= 10) != 0);/*改用 (n /= 10) != 0 取代 (n /= 10) > 0 避免 n 是负数而陷入死循环*/
	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

/*itoa3 函数：将数字 n 转换为字符串并保存到 s 中，第 3 个参数用于指定输出最小字段宽度，如果值小于该宽度，则左边补空格*/
void i2a3(int n,char *s,int width){
	int i, sign;
	if((sign = n) < 0)/*记录符号*/
		n = -n;       /*使 n 成为正数*/
	i = 0;
	do{              /*以反序生成数字*/
		s[i++] = n % 10 +'0';/*通过取余的方式来得到最右侧的个位数，并转换为字符*/
	}while((n /= 10) > 0); /*通过除 10 来不断删除最右侧的个位数*/
	if(sign < 0)
		s[i++] = '-';
	while(i < width)
		s[i++] = ' ';   /*不足部分补空格*/
	s[i] = '\0';
	reverse(s);
}

/*itoa4 函数：采用递归方法改写 itoa2 函数*/
void i2a4(int n,char *s){
	static int i;
	if(n/10)
		i2a4(n/10,s);
	else{
		i = 0;
		if(n<0)
			s[i++]='-';
	}
	s[i++]=abs(n)%10 +'0';
	s[i]='\0';
}

/*itoa5 函数：将数字 n 转换为字符串并保存到 s 中，采用指针形式改写*/
void i2a5(int n,char *s){
	int sign;
	char *t = s;      /*保存 s 指针到 t 中*/
	if((sign = n) < 0)/*记录符号*/
		n = -n;       /*使 n 成为正数*/
	do{              /*以反序生成数字*/
		*s++ = n % 10 +'0';/*通过取余的方式来得到最右侧的个位数，并转换为字符*/
	}while((n /= 10) > 0); /*通过除 10 来不断删除最右侧的个位数*/
	if(sign < 0)
		*s++ = '-';
	*s = '\0';
	reverse2(t);
}

/*itob 函数：用于将整数 n 转换为以 b 为底的数，并将转换结果以字符的形式保存到字符串 s 中，例如：
 * itob(n,s,16) 是把整数 n 格式化成 16 进制整数保存在 s 中*/
void i2b(int n,char *s,int b){
	int i, j, sign;
	if((sign = n) < 0)/*记录符号*/
		n = -n;       /*使 n 成为正数*/
	i = 0;
	do{              /*以反序生成数字*/
		j = n % b;
		s[i++] = (j <= 9)? j+'0': j-10+'A';/*通过取模的方式来得到最右侧的个位数，并转换为字符*/
	}while((n /= b) > 0); /*通过除 b 来不断删除最右侧的个位数*/
	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

/*getline 函数：将行保存到 s 中，并返回改行的长度*/
int getline(char *s,int lim){/*lim 参数为一行最大的输入字符数*/
	int c, i;
	i = 0;
	while(--lim > 0 && (c = getchar())!= EOF && c != '\n')
		s[i++] = c;
	if(c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

/*strindex 函数：返回 t 在 s 中的位置，若未找到则返回 -1（FALSE）*/
int strindex(char *s,char *t){
	int i, j, k;
	for(i = 0; s[i] != '\0'; i++){
		for(j=i,k=0;t[k] != '\0' && s[j] == t[k];j++,k++)
			;
		if(k > 0 && t[k] == '\0')
			return i;
	}
	return FALSE;
}

/*strindex2 函数：返回 t 在 s 中的位置，若未找到则返回 -1（FALSE），用指针实现*/
int strindex2(char *s,char *t){
	char *b = s;  /*字符串 s 的开始位置*/
	char *p, *r;

	for(;*s != '\0';s++){
		for(p = s, r = t;*r != '\0' && *p == *r; p++,r++)
			;
		if(r > t && *r == '\0')
			return s - b;/*返回 s 中的位置*/
	}
	return -1;
}

/*strrindex 函数：返回字符串 t 在 s 中最右边出现的位置，如果 s 中不包含 t，则返回 -1（FALSE）*/
int strrindex(char *s,char *t){
	int i, j, k;
	for(i = strlen(s)-strlen(t);i >= 0;i-- ){/*从字符串右边开始扫描，以 t 字符串长度为单位*/
		for(j=i,k=0;t[k]!='\0'&&s[j]==t[k];j++,k++)
			;
		if(k>0&&t[k]=='\0')
			return i;
	}
	return FALSE;
}

/*atof 函数：把字符串 s 转换为相应的双精度浮点数*/
double a2f(char *s){
	double val, power;
	int i, sign, e_sign, exp;
	for(i=0;isspace(s[i]);i++)/*跳过空格符*/
		;
	sign = (s[i] == '-')?-1:1;
	if(s[i]=='+'||s[i]=='-')/*跳过符号位*/
		i++;
	for(val=0.0;isdigit(s[i]);i++)
		val = 10.0*val+(s[i]-'0');
	if(s[i]=='.')/*跳过小数点*/
		i++;
	for(power=1.0;isdigit(s[i]);i++){
		val = 10.0*val+(s[i]-'0');
		power *= 10.0;
	}
	/*如果有指数部分，则处理指数部分*/
	if(s[i]=='e'||s[i]=='E'){
		i++;/*跳过 e/E 字符*/
		e_sign = s[i];/*取指数符号位*/
		if(s[i]=='+'||s[i]=='-')/*跳过指数的符号位*/
			i++;
		for(exp=0;isdigit(s[i]);i++)/*取出指数位*/
			exp = 10*exp+(s[i]-'0');
		if(e_sign == '-'){
			while(exp-- > 0)
				power *= 10.0;
		}else{
			while(exp-- > 0)
				val *= 10.0;
		}
	}
	return sign * val / power;
}

/*atof2 函数：把字符串 s 转换为相应的双精度浮点数，采用指针实现*/
double a2f2(char *s){
	double val, power;
	int sign, e_sign, exp;
	for(; isspace(*s); s++)/*跳过空格符*/
		;
	sign = (*s == '-')?-1:1;
	if(*s=='+'||*s=='-')/*跳过符号位*/
		s++;
	for(val=0.0;isdigit(*s);s++)
		val = 10.0*val+(*s -'0');
	if(*s == '.')/*跳过小数点*/
		s++;
	for(power=1.0; isdigit(*s); s++){
		val = 10.0*val+(*s - '0');
		power *= 10.0;
	}
	/*如果有指数部分，则处理指数部分*/
	if(*s == 'e' || *s == 'E'){
		s++;/*跳过 e/E 字符*/
		e_sign = *s;/*取指数符号位*/
		if(*s == '+' || *s == '-')/*跳过指数的符号位*/
			s++;
		for(exp=0; isdigit(*s); s++)/*取出指数位*/
			exp = 10*exp+(*s - '0');
		if(e_sign == '-'){
			while(exp-- > 0)
				power *= 10.0;
		}else{
			while(exp-- > 0)
				val *= 10.0;
		}
	}
	return sign * val / power;
}

/*printd函数：打印十进制数n*/
void printd(int n){
	if(n<0){
		putchar('-');
		n = -n;
	}
	if(n/10)
		printd(n/10);
	putchar(n%10 + '0');
}

/* getint 函数：  将输入的下一个整型数赋值给 *pn */
int getint(int *pn){
	int c, sign;

	while (isspace(c = getch()))   /* 跳过空白符 */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c);  /* 输入的不是一个数字 */
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
		c = getch();
	for (*pn = 0; isdigit(c);c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}

/*getint2 函数：在 getint 基础上修改，如果 + 和 - 后跟的不是数字，
 * 则将 + 和 - 压回输入缓冲区，并返回这个符号以表明这种情况*/
int getint2(int *pn){
	int c, d, sign;

	while (isspace(c = getch()))   /* 跳过空白符 */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c);  /* 输入的不是一个数字 */
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-'){
		d = c;               /*保存该符号*/
		if(!isdigit(c = getch())){  /*如果符号后面跟的不是数字*/
			if(c != EOF)     /*如果不是输入结束*/
				ungetch(c);  /*将该字符push回输入流中*/
			ungetch(d);      /*将符号 push 回输入流中*/
			return d;        /*返回符号字符*/
		}
	}
	for (*pn = 0; isdigit(c);c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}

/* getfloat 函数：  将输入的下一个float数赋值给 *pn */
int getfloat(float *pn){
	int c, sign;
	float pow;

	while (isspace(c = getch()))   /* 跳过空白符 */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.') {
		ungetch(c);  /* 输入的不是一个数字 */
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
		c = getch();
	for (*pn = 0; isdigit(c);c = getch())/*收集整数部分*/
		*pn = 10.0 * *pn + (c - '0');
	if(c == '.')
		c = getch();
	for(pow = 1.0;isdigit(c);c = getch()){/*收集小数部分*/
		*pn = 10.0 * *pn + (c - '0');
		pow *= 10.0;
	}
	*pn = *pn * sign/pow;
	if (c != EOF)
		ungetch(c);
	return c;
}
