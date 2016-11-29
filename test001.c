/*
 * test001.c
 *
 *  Created on: 2016��11��8��
 *      Author: yophoo
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>   /*ʹ�õ�ǰʱ�����������������*/
#include <ctype.h>

#define TRUE 1
#define FALSE 0

void test001(){/*��ɻ��϶Ⱥ����϶�֮���ת��*/
	float fahr,celsius;
	int lower,upper,step;
	lower = 0;
	upper = 300;
	step = 20;  /*���� 20*/

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
	while((c = getchar()) != EOF){/*����ʹ�� Ctrl-Z ����������*/
		putchar(c);
	}
}

void test005(){
	int c;
	c = (getchar() != EOF);/*���������� 1��ֱ�Ӱ� Ctrl-Z ���� 0*/
	printf("%d",c);
}

void test006(){/*�����ַ�����*/
	float wc;
	for(wc = 0;getchar() != EOF;++wc)
		;
	printf("The number of characters you entered is:%.0f\n",wc);
}

void test007(){/*�����м���*/
	int c,lc;
	lc = 0;
	while((c = getchar()) != EOF)
		if( c == '\n')
			++lc;
	printf("The total line is:%d\n",lc);
}

void test008(){/*�����븴�Ƶ������ɾ�����������Ŀո��*/
	int c,lastc;
	lastc = 'c';
	while((c = getchar()) != EOF){
		if(c != ' ')/*����ǿո�����������*/
			putchar(c);
		else if(lastc != ' ')/*����ǿո�����鿴ǰһ���ַ��ǲ��ǿո�������ǣ�����������ո�*/
			putchar(c);
		lastc = c;/*��¼���ֶ�ȡ���ַ�*/
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

void test010(){/*��ӡˮ�ɻ���:��λ����ÿλ���ֵ�3����֮�͵���������������1^3 + 5^3 + 3^3 = 153*/
	int i,j,k,n,s;
	printf("ˮ�ɻ����У�\n");
	for(n = 100;n < 1000;n++){
		i = n/100; /*��λ��*/
		j = (n/10)%10;/*ʮλ��*/
		k = n%10;/*��λ��*/
		s = i*i*i+j*j*j+k*k*k;
		if(s == n)
			printf("%6d ",n);
	}
}

void test011(){/*��ӡ��Ҷõ��������λ��ÿλ���ֵ�4����֮�͵���������*/
	int i,j,k,l,n,s;
	printf("��Ҷõ�����У�\n");
	for(n = 1000;n < 10000;n++){
		i = n/1000;/*ǧλ�ϵ���*/
		j = (n/100)%10;/*��λ�ϵ���*/
		k = (n/10)%10;/*ʮλ�ϵ���*/
		l = n%10;/*��λ�ϵ���*/
		s = pow(i,4)+pow(j,4)+pow(k,4)+pow(l,4);
		if(s == n)
			printf("%6d ",n);
	}
}

void test012(){/*��ӡ�����������λ��ÿλ���ֵ�5����֮�͵���������*/
	int i,j,k,l,m,n,s;
	printf("��������У�\n");
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

void test013(){/*��ӡ����������λ��ÿλ���ֵ�6����֮�͵���������*/
	int i,j,k,l,m,n,a,s;
	printf("�������У�\n");
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

void test014(){/*��ӡ��������������λ��ÿλ���ֵ�7����֮�͵���������*/
	int i,j,k,l,m,n,o,a,s;
	printf("�����������У�\n");
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

void wc(FILE *file){/*ͳ���ļ������������������ַ���*/
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

void cc(FILE *file){/*ͳ�Ƹ������֡��հ׷��������ַ����ֵĴ���*/
	int c,i,nwhite,nother;
	int ndigit[10];
	nwhite = nother = 0;
	for(i = 0;i < 10; ++i){/*��ʼ������*/
		ndigit[i] = 0;
	}
	while((c = fgetc(file)) != EOF)
		if(c >= '0' && c <= '9')
			++ndigit[c-'0'];/*ʹ�� c-'0' ����ʽ���������ֵ��±�*/
		else if(c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	printf("digits = ");
	for(i = 0;i < 10; ++i)
		printf("%d:  %-5d",i,ndigit[i]);
	printf(", white space = %d,other = %d\n",nwhite,nother);
}

void randnumfile(const char *filename){/*����һ��������ļ�*/
	FILE *file;
	int i;
	if((file = fopen(filename,"w")) == NULL)/*��дģʽ���ļ�*/
		return;
	srand((unsigned)time(NULL));/*�Ե�ǰʱ��Ϊ��������ʼ�������*/
	for(i = 0;i < 1000;i++){
		if(i != 0 && i%10 == 0)
			fprintf(file,"\n");
		fprintf(file,"%d\t",rand()%1000);/*rand()%m����0-m֮��������*/
	}
	fclose(file);/*�����˹ر��ļ�*/
}

void printword(){/*��ӡ���뵥�ʣ�ÿ�д�ӡһ������*/
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

int atoi(const char *s){/* ���ַ��� s ת��Ϊ��Ӧ���������������������ַ�����*/
	int i,n;
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}

int lower(int c){ /* lower ���������ַ� c ת����Сд��ʽ��ֻ������ ASCII �� */
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

int lower2(int c){ /* lower ���������ַ� c ת����Сд��ʽ��ֻ������ ASCII �� */
	return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c ;
}

void squeeze_c(char *s,int c){ /*ɾ���ַ��� s �е� c �ַ�*/
	int i,j;
	for(i = j = 0;s[i] != '\0';i++)
		if(s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}

void squeeze_c2(char *s,char *c){ /*���ַ��� s ���ҵ��ַ��� c �е�ƥ���ַ���ɾ��*/
	int i,j,k;
	for(i = k = 0;s[i] != '\0';i++){
		for(j = 0;c[j] != '\0' && c[j] != s[i];j++)
			;
		if(c[j] == '\0')
			s[k++] = s[i];
	}
	s[k] = '\0';
}

char * str_cat(const char *s,const char *t){/*���ַ��� t ���ӵ��ַ��� s ��β��*/
	int i,j;
	char * buff;
	buff =(char*)malloc(1000*sizeof(char));
	if(!buff)
		return NULL;
	for(i = j = 0;s[i] != '\0';i++)  /*���� s �ַ�����������*/
		buff[i] = s[i];
	while((buff[i++] = t[j++]) != '\0')/*�ڻ�����β������ t �ַ���*/
		;
	return buff;
}

void squeeze_str(char *s,char *c){ /*���ַ��� s ���ҵ��ַ��� c ��ɾ��*/
	int i,j,k;
	char * buff;
	buff =(char*)malloc(1000*sizeof(char));
	if(!buff)
		return;
	for(i = k = 0;s[i] != '\0';i++){
		for(j = 0;(c[j] == s[i+j]) && c[j] !='\0';j++)
			;
		if(c[j] == '\0'){ /*�ҵ�ƥ���ַ���*/
			i = i + j -1; /* ���� c �ִ�����*/
		}else  /*���û���ҵ�������ǰ�ַ����Ƶ�������*/
			buff[k++] = s[i];
	}
	buff[k] = '\0';
	for(i = 0;i <= k;i++){/*���������ַ������ƻ��ַ��� s ��*/
		s[i] = buff[i];
	}
	free(buff);
	buff = NULL;
}

int any(char *s,char *c){/*�����ַ��� c ���ַ���һ�����ַ��� s �г��ֵ�λ��*/
	int i,j;
	for(i = 0;s[i] != '\0';i++)
		for(j = 0;c[j] != '\0';j++)
			if(s[i] == c[j])
				return i;
	return -1;
}

/*ע��������Щ unsigned ���� 4 bit ��*/
unsigned getbits(unsigned x,int p,int n){/*���� x �д� p λ�����λ 0����ʼ���� n λ�� bit ֵ*/
	// x >> (p+1-n):�������� n �� bit λ�Ƶ��ֽڵ����Ҷˣ��ٺ� 1 ��λ��
	// ~(~0 << n):���ұߵ� n λ����1������λ�� 0
	return (x >> (p+1-n) & ~(~0 << n));
}

unsigned setbits(unsigned x,int p,int n,signed y){/*�� x �д� p λ��ʼ�� n ��bitλ����λ y �����ұ� n λ��ֵ��x �������λ���ֲ���*/
	// ~(~0 << n) : ���ұߵ� n λ�� 1
	// (~(~0 << n)) << (p+1-n): �� p λ��ʼ n λ�� 1
	//  y & ~(~0 << n) ��ȡ�� y �����ұ� n λ��ֵ
	// (y & ~(~0 << n)) << (p+1-n) : ���� p+1-n λ
	// x & ~((~(~0 << n)) << (p+1-n)) : �� x �� p λ��ʼ���� n λ�� 0
	// ���߰�λ��
	return (((y & ~(~0 << n)) << (p+1-n)) | (x & ~((~(~0 << n)) << (p+1-n))));/*���ð�λ��*/
}

unsigned invert(unsigned x,int p,int n){/*�� x �дӵ� p λ��ʼ�� n �� bit λ�󷴣�1��0��0��1����x�������λ���ֲ���*/
	return (x ^ ((~(~0 << n)) << (p+1-n)));/*���ú� 1 ���*/
}

unsigned rightrot(unsigned x,int n){
	//  ~(~0 << n) : ���ұߵ� n λ�� 1
	// x &  ~(~0 << n) : ȡ�� x ��Ҫ���Ƴ��� n λֵ
	// sizeof(unsigned): unsigned �ĳ���
	// (x &  ~(~0 << n)) << (sizeof(x) - n):�� x ���Ƴ��� n λ�ŵ���ǰ��
	// �ٺ����� n λ��� x ���а�λ��
	return(((x &  ~(~0 << n)) << (sizeof(x)- n)) | (x >> n));
}

/*���ַ��� t ��ֵ�� s�������еĻ��з����Ʊ���ת���ɿɼ��ַ� '\n' ��  '\t' */
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

/*���ַ��� t ��ֵ�� s�������пɼ��ַ� '\n' ��  '\t' ת���ɻ��з����Ʊ���*/
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

int atoiv2(char *s){/*�������ַ���ת�����������������������ַ�����ֹ*/
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

/*ð�����򣺱Ƚ���������Ԫ�أ������һ���ȵڶ������򽻻�λ��*/
void bubble_sort(int *array,int size){
	int i, j, temp;
	for(j = 0;j < size-1;j++)
		for(i = 0;i < size -1 -j;i++){
			if(array[i] > array[i+1]){ /*�����һ��Ԫ�ش��ڵڶ���Ԫ�أ��򽻻�λ��*/
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] =  temp;
			}
		}

}

/*��������ȡ��������һ��Ԫ�أ�����������������ʵ��λ��Ӧ���� A[k]����������Ӧ���� k-1 ��С������Ԫ�أ���������Ҫ������������ҵ���ȷ�� k ֵ*/
void quick_sort(int *array,int left,int right){
	if(left < right){/*����������������±�Ƚϣ�Ӧ�����������±�С���������±�*/
		int i = left;
		int j = right;
		int key = array[left];
		while(i < j){
			while(i<j && key <= array[j])
				j--;/*�Ӻ���ǰ����*/
			array[i] = array[j];/*λ�û�����array[j] λ�ÿճ�*/
			while(i<j && key >= array[i])
				i++;/*��ǰ�������*/
			array[j] = array[i];/*λ�û�����array[i] λ�ÿճ�*/
		}
		array[i] = key;/*������������������ҵ��˺��ʵ�λ�� array[i]����Ԫ�� key ��������*/
		quick_sort(array,left,i-1);/*�� key Ԫ����ߵ�����Ԫ�ؽ��еݹ�*/
		quick_sort(array,i+1,right);/*�� key Ԫ���ұߵ�����Ԫ�ؽ��еݹ�*/
	}
}

/*�������򣺽�һ����������Ԫ�ز��뵽һ������������������򣬳�ʼʱ������������Ԫ�ظ���Ϊ 0*/
void insert_sort(int *array,int size){
	int i, j, temp;

	for(i = 1;i < size;i++){/*�ӵ� 2 ��Ԫ�ؿ�ʼѭ��*/
		temp = array[i];
		for(j = i;j > 0 && array[j-1] > temp;j--){/*��Ԫ�� i ����������[0..i-1]�е�Ԫ�ؽ��бȽϣ��Ӻ���ǰ����ֱ���ҵ���һ��С�ڸ�Ԫ�ص�Ԫ��λ��Ϊֹ*/
			array[j] = array[j-1]; /*���򣬽���λ�ú���*/
		}
		array[j] = temp; /*����Ԫ�ز��뵽����������*/
	}
}

/*Shell ����ʹ�ò����ݼ��ķ�����ʵ�ַ�����Ԫ�رȽϣ���һ�β���ȡ����Ԫ�ظ�����һ�룬�Ժ�ÿ�β����۰룬Ʃ�� 10 ��Ԫ�أ���һ�β���Ϊ 5��Ԫ��1��6�Ƚϣ�2��7�Ƚϡ�������
 * �ڶ��β���Ϊ 5/2 =2��Ԫ��1��3�Ƚϣ�2��4�Ƚϡ�������ֱ������Ϊ 1 Ϊֹ������Ԫ�رȽϣ������������� */
void shell_sort(int *array, int size){
       int gap, i, j, temp;

       for (gap = size/2; gap > 0; gap /= 2)/*����ȡ�룬ֱ������Ϊ 1������С�� 1���� gap/2 = 0��*/
           for (i = gap; i < size; i++)/*�Ӳ����㿪ʼ��������ȡԪ�رȽϣ�ֱ���������*/
               for (j=i-gap; j>=0 && array[j] > array[j+gap]; j-=gap){/*�ӵ�ǰԪ�ؿ�ʼ��������ǰ���Բ���Ϊ�������ǰ������Ԫ�رȽϣ�ֱ������ǰԪ��С�ں�Ԫ�ص������˵��ǰ��������Ѿ�����*/
                   temp = array[j];  /*���򣬽���ǰ��Ԫ�ؽ���*/
                   array[j] = array[j+gap];
                   array[j+gap] = temp;
               }
}

/*�鲢���򣺽��ж����������� [left...mid] �� [mid+1...right] �ϲ�*/
void merge(int *array,int *temp,int left,int mid,int right){/*left��right �������±�*/
    int i = left,j = mid + 1;
    int k = 0;

    /*�� array �е�Ԫ������鲢�� temp ��*/
    while (i <= mid && j <= right){/*�� array �ֳ������� [left...mid] �� [mid+1...right]*/
        if (array[i] <= array[j]) /*�ֱ������������ȡԪ�ؽ��бȽϲ��������� temp ��*/
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];
    }

    /*�����  [mid+1...right] ��Ԫ����ȡ�꣬��ô�� [left...mid] �е�ʣ��Ԫ�����η��� temp ��β��*/
    while (i <= mid)
        temp[k++] = array[i++];

    /*�����  [left...mid] ��Ԫ����ȡ�꣬��ô�� [mid+1...right] �е�ʣ��Ԫ�����η��� temp ��β��*/
    while (j <= right)
        temp[k++] = array[j++];

    for (i = 0; i < k; i++)
        array[left + i] = temp[i];/* �� temp ������õ�Ԫ�ط��� array �� */
}

/*�鲢���򣺲��ö��ֵݹ鷨���ֲ� array��ֱ��ǰ�󲿷������һ��Ԫ�أ�Ȼ��ʹ������Ĺ鲢��������鲢���飬ֱ������ array �鲢���*/
void merge_sort(int * array,int * temp,int left,int right){/*left��right �������±�*/
	if(left < right){
		int mid = (left+right)/2;/*���ö��ַ�*/
		merge_sort(array,temp,left,mid);/*�ݹ�������߲���*/
		merge_sort(array,temp,mid+1,right);/*�ݹ������ұ߲���*/
		merge(array,temp,left,mid,right); /*�鲢������������������*/
	}
}

/*˳����ң�����ȡ�������Ԫ�غ͸���ֵ���бȽ�*/
int sequence_search(int key,int *array,int size){
	for(int i = 0;i < size;i++)
		if(array[i] == key)
			return i;
	return FALSE;
}

/* �۰���ң�binsearch:  ��˳������ v[](v[0] <= v[1] <= ... <= v[n-1])�в���Ԫ�� key */
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
        else    /* �ҵ�ƥ���� */
            return mid;
    }
    return FALSE;   /* û���ҵ�ƥ���� */
}

int binsearch1(int key,int *array,int size){ /*��д����۰����*/
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
		return mid; /* �ҵ�ƥ���� */
	else
		return FALSE; /* û���ҵ�ƥ���� */
}

/*���õݹ��㷨����д�۰��㷨*/
int binsearch2(int key,int *array,int left,int right){ /*left��right �������±�*/
	int mid  = (left + right)/2;
	if(array[mid] == key)
		return mid;
	if(array[mid] > key)
		return binsearch2(key,array,left,mid-1);
	if(array[mid] < key)
		return binsearch2(key,array,mid+1,right);
	return FALSE;
}

/*��ֵ���ң��۰���ҵĸĽ��ͣ�����ֵ mid ����������Ԫ�صķֲ�������ȷ��*/
int insert_search(int key,int *array,int left,int right){ /*left��right �������±�*/
	int mid  = left + ((key - array[left])/(array[right] - array[left]))*(right - left);
	if(array[mid] == key)
		return mid;
	if(array[mid] > key)
		return insert_search(key,array,left,mid-1);
	if(array[mid] < key)
		return insert_search(key,array,mid+1,right);
	return FALSE;
}

/*쳲��������ң��۰���ҵĸĽ��ͣ����ûƽ�ָ������Ϊ mid ֵ���в���*/
int fibonacci_search(int key,int *array,int size){
	const int MAX = 20;
	int left = 0;
	int right = size-1;
	int *F,*temp;
	int k = 0, mid;

	/*����һ�� max ��Ԫ�ص�쳲��������飬�����ճ�Ӧ�ö��ԣ�F[20] = 4181������������*/
	F = (int*)malloc(MAX*sizeof(int));
	if(!F)
		return FALSE;
	F[0] = 0;
	F[1] = 1;
	for(int i = 2;i < MAX;i++)
		F[i] = F[i-1] + F[i-2];

	while(size > F[k]-1)/*�ҵ����ʺ� array ����Ԫ�ص�쳲������� F[k]*/
		++k;

	temp = (int *)malloc((F[k]-1)*sizeof(int));/* ������ array ��չ�� F[k]-1 �ĳ��� */
	if(!temp)
		return FALSE;

	for(int j = 0;j < size; j++)/*������ array ��Ԫ�ؿ����� temp ��*/
		temp [j] = array[j];
	for(int j = size;j < F[k]-1; j++) /* temp ��������Ԫ��ֵ������Ϊ array ��������һ��Ԫ��*/
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
				return mid;/*�� mid<size ��˵�� mid ��Ϊ���ҵ���λ��*/
			else
				return size-1;/*�� mid>=size ��˵�����ҵ�������չ����ֵ,���� size-1*/
		}
	}
	free(temp);
	free(F);
	return FALSE;
}

/*expand(s1,s2) ���������ڽ��ַ��� s1 �������� a-z �������ټǷ������ַ��� s2 ����չΪ�ȼ۵������б� abc����xyz���ú����������ڴ���
 * ��Сд��ĸ�����֣������Դ��� a-b-c��a-z0-9��a-z�������������Ϊǰ����β��� - �ַ�ԭ������*/
void expand(const char * s1,char *s2){
	char c;
	int i, j;
	i = j = 0;
	while((c = s1[i++]) != '\0') /*�� s1 ��ȡ�ַ�*/
		if(s1[i] == '-' && s1[i+1] >= c){/*��������ַ� - ����ַ��Ļ�*/
			i++;
			while(c < s1[i])/*������ַ� - ����ַ�����ǰһ���ַ�����ô�͵����ַ���ֵ���� s2 �У�����չ�ټ��ַ�*/
				s2[j++] = c++;
		}else
			s2[j++] = c;/*����������ַ� - ����ַ�����ô��ԭ������ s1 �е��ַ�*/
	s2[j] = '\0';
}