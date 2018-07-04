#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

/*
	Name: show
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ���ʾ�����е�ÿһ��Ԫ�أ�ÿ10����ռһ��
				����֮���ÿո�ֿ���ʾ
		������
			int from[]��������׵�ַ
			int len�����鳤��
		����ֵ��
			��
*/
void show(int from[], int len){
	int i;
	for(i=0;i<len;i++)
		if((i+1)%10)
			printf("%d ",from[i]);
		else
			printf("%d\n",from[i]);
	printf("\n\n");
}

/*
	Name: insertSort
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ��ò��������㷨���������������
		������
			int from[]��������׵�ַ
			int len�����鳤��
		����ֵ��
			��
*/
void insertSort(int from[], int len){
	int i,j;
	for(i=1; i<len;++i){
		int t=from[i];
		if(t<from[0])
			for(j=i-1;j>=0;--j)
				from[j+1]=from[j];
		else
			for(j=i-1;t<from[j];--j)
				from[j+1]=from[j];
		from[j+1]=t;
	}
}

/*
	Name: shell_help
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ�ϣ������ĸ������������ڲ�����
*/
void shell_help(int arr[], unsigned len, unsigned span)
{
	unsigned i;
	int j;
	for(i=span; i<len; i+=span)
	{
		int t=arr[i];
		if(t<arr[0])
			for(j=i-span; j>=0; j-=span)
				arr[j+span]=arr[j];
		else
			for(j=i-span; t<arr[j]; j-=span)
				arr[j+span]=arr[j];
		arr[j+span]=t;
	}
}

/*
	Name: shellSort
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ���ϣ�������㷨���������������
		������
			int arr[]��������׵�ַ
			unsigned len�����鳤��
		����ֵ��
			��
*/
void shellSort(int arr[], unsigned len)
{
	unsigned w=2;
	unsigned span=len/w;
	while(span)
	{
		unsigned i;
		for(i=0; i<span; ++i)
			shell_help(&arr[i], len-i, span);
		if(span<w && span!=1)
			span=1;
		else
			span/=w;
	}
}

/*
	Name: swap
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ�������������
		������
			int *a����һ������ָ��
			int *b���ڶ�������ָ��
		����ֵ��
			��
*/
void swap(int *a, int *b)
{
	if(a!=b)
	{
		int t=*a;
		*a=*b;
		*b=t;
	}
}

/*
	Name: selectSort
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ���ѡ�������㷨���������������
		������
			int arr[]��������׵�ַ
			unsigned len�����鳤��
		����ֵ��
			��
*/
void selectSort(int arr[], unsigned len)
{
	unsigned i, j;
	for(i=0; i<len-1; ++i)
	{
		unsigned pos=0;
		for(j=1; j<len-i; ++j)
			if(arr[pos]<arr[j])
				pos=j;
		swap(&arr[pos], &arr[len-i-1]);
	}
}

/*
	Name: bubbleSort
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ���ð�������㷨���������������
		������
			int arr[]��������׵�ַ
			unsigned len�����鳤��
		����ֵ��
			��
*/
void bubbleSort(int arr[], unsigned len)
{
	unsigned i, j;
	bool swapped;
	for(i=0; i<len-1; ++i)
	{
		swapped=0;
		for(j=0; j<len-1-i; ++j)
			if(arr[j+1]<arr[j])
			{
				swap(&arr[j+1], &arr[j]);
				swapped=1;
			}
		if(!swapped) break;
	}
}

/*
	Name: merge
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ��鲢��������
*/
void merge(const int a[], int lena, const int b[], int lenb, int c[])
{
	int i=0, j=0;
	while(i<lena && j<lenb)
		if(b[j]<a[i])
			*c++=b[j++];
		else
			*c++=a[i++];
	while(i<lena)
		*c++=a[i++];
	while(j<lenb)
		*c++=b[j++];
}

/*
	Name: mergeSort
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ��ù鲢�����㷨���������������
		������
			int arr[]��������׵�ַ
			unsigned len�����鳤��
		����ֵ��
			��
*/
void mergeSort(int arr[], unsigned len)
{
	unsigned i, m=1;
	int* tarr=(int*)malloc(sizeof(int)*len);
	while(m<len)
	{
		for(i=0; i<len; i+=2*m)
			merge(&arr[i], i+m<len?m:len-i, &arr[i+m],
				i+2*m<len?m:len-i-m, &tarr[i]);
		m*=2;
		for(i=0; i<len; i+=2*m)
			merge(&tarr[i], i+m<len?m:len-i, &tarr[i+m],
				i+2*m<len?m:len-i-m, &arr[i]);
		m*=2;
	}
	free(tarr);
}

/*
	Name: cocktailSort
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ��ü�β�������㷨���������������
		������
			int arr[]��������׵�ַ
			unsigned len�����鳤��
		����ֵ��
			��
*/
void cocktailSort(int arr[], unsigned len)
{
	int i, lower=0, upper=len-1;
	bool swapped;
	while(lower<upper)
	{
		swapped=0;
		for(i=lower; i<upper; ++i)
			if(arr[i+1]<arr[i])
			{
				swap(&arr[i+1], &arr[i]);
				swapped=1;
			}
		--upper;
		for(i=upper-1; i>=lower; --i)
			if(arr[i+1]<arr[i])
			{
				swap(&arr[i+1], &arr[i]);
				swapped=1;
			}
		++lower;
		if(!swapped) break;
	}
}

/*
	Name: adjustHeap
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ������ѵ���ʱ�������ڲ�����
*/
void adjustHeap(int arr[], unsigned len, unsigned hole)
{
	unsigned left=2*hole+1;  //����������
	unsigned right=2*hole+2;  //�������Һ���
	int t=arr[hole];  //���涴����ֵ
	while(left<len && t<arr[left] || right<len && t<arr[right])
	//ĳ�����ӽ��ȶ����ֵ��
	{
		if(right<len && arr[left]<arr[right])
		//���Һ��ӣ����Һ��Ӵ��Һ������ƣ�������
		{
		  	arr[hole]=arr[right];
		  	hole=right;
		}
		else
		//���Ӵ��������ƣ�������
		{
			arr[hole]=arr[left];
			hole=left;
		}
		//�������ö������Һ����±�
		left=hole*2+1;
		right=hole*2+2;
	}
	arr[hole]=t;
}

/*
	Name: makeHeap
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ���ָ�������鹹���ɶ�
		������
			int arr[]��������׵�ַ
			unsigned len�����鳤��
		����ֵ��
			��
*/
void makeHeap(int arr[], unsigned len)
{
	int i;
	for(i=len/2-1; i>=0; --i)
		adjustHeap(arr, len, i);
}

/*
	Name: popHeap
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ����ѣ���ʱ�������ڲ�����
*/
void popHeap(int arr[], unsigned len)
{
	swap(&arr[0], &arr[len-1]);
	adjustHeap(arr, len-1, 0);
}

/*
	Name: heapSort
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ��ö������㷨��������Ϊ����
		������
			int arr[]��������׵�ַ
			unsigned len�����鳤��
		����ֵ��
			��
*/
void heapSort(int arr[], unsigned len)
{
	int i;
	for(i=len; i>1; --i)
		popHeap(arr, i);
}

/*
	Name: showNum
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ���ʾָ��������
		������
			int num������ʾ������
		����ֵ��
			��
*/
void showNum(int num)
{
	printf("the number is: %d\n", num);
}

/*
	Name: biSearch
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ����۰���ҷ�����ָ�������Ƿ������������
		������
			const int* from��ԭʼ������׵�ַ
			int len�����鳤��
			int v�������ҵ�����
		����ֵ��
			bool���ҵ�����true��û�ҵ�����false
*/
bool biSearch(const int* from, int len, int v)
{
	int L=0;
	int H=len-1;
	int M=(L+H)/2;
	while(L<=H)
		{
			if(v<from[M])
				H=M-1;
			else if(from[M]<v)
				L=M+1;
			else return true;
			M=(L+H)/2;
		}
	return false;
}

/*
	Name: showSource
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ���ʾ����֮ǰ�ĸ�����������2λС��
		������
			double source��ԭʼ������
		����ֵ��
			��
*/
void showSource(double source)
{
	printf("the source number is: %.2lf\n", source);
}

/*
	Name: showResult
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ���ʾ����֮��ĸ�����������2λС��
		������
			double result�������ĸ�����
		����ֵ��
			��
*/
void showResult(double result)
{
	printf("the result number is: %.2lf\n", result);
}

/*
	Name: sequentialSearchByArray
	Copyright: Neusoft
	Author: Dongqing Zhang
	Date: 04/07/18 09:23
	Description:
		���ܣ�˳������㷨���������в����Ƿ����Ҫ���ҵ�ֵ
		������
			int from[]��ԭʼ����
			int len�����鳤��
			int v�������ҵ�����
		����ֵ��
			bool���ҵ�����true��û�ҵ�����false
*/
bool sequentialSearchByArray(int from[], int len, int v){
	int i;
	for(i=0;i<len;++i)
		if(from[i]==v) return true;
	return false;
}

int main()
{
	int a[]={3,5,8,12,99,6,2,3,-15,7,0,-5,17,99,-15,22,18,99};
	int b[]= {1,4,5,7,9,11,44,55,77,5554};
	int n1=5, n2=5000;
	double x1=5.25, y1;
	srand((unsigned int)time(NULL));
	int lenb = sizeof(b)/sizeof(b[0]);
	int result1 = biSearch(b,lenb,n1);

	if(result1 == 0)
		printf("�Ҳ���\n");

	else if(result1 == 1)
	{
		for(int i = 0;i < lenb;i++)
			if(n1 == b[i])
				printf("%d\n", i);
	}

	int result2 = biSearch(b,lenb,n2);

	if(result2 == 0)
		printf("�Ҳ���\n");

	else if(result2 == 1)
	{
		for(int i = 0;i < lenb;i++)
			if(n2 == a[i])
				printf("%d\n", i);
	}

	return 0;
}
