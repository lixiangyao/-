#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

void QuickSort(int *, int low, int high);
int FindPos(int *, int low, int high);

int main(void)
{
	int n = 100000;  //���鳤�ȣ���Ϊ���ڲ��������ٶȣ�������ǧ�����ݵĳ��ȣ��ʼǱ�i5 8300Hƽ��3.7-3.8s  
/*
	printf("�������鳤�ȣ�");    //�����ֶ��������鳤�� 
	scanf("%d",&n);
*/	
	int * arr = (int *)malloc(sizeof(int)*n);  //��malloc()������̬�����ڴ� 
	//printf("�����������Ԫ�أ�");
	srand(time(NULL));  //���ݵ�ǰʱ������seed��ʵ������� 

	for(int i = 0; i < n; ++i)
		arr[i] = rand();    
		//scanf("%d",&arr[i]);    //��������������ݣ�Ҳ�����ֶ����� 
/*	
	printf("ԭʼ������ݣ�\n");  //��Ϊ��ӡ������̨̫��ʱ�䣬������ʱע�͵� 
	for(int i = 0; i < n; ++i)
		printf("%d ",arr[i]); 
*/			
	QuickSort(arr,0,n-1);  //���ź��� 
/*	
	printf("\n\n���ź����ݣ�\n");  //��Ϊ��ӡ������̨̫��ʱ�䣬������ʱע�͵�
	for(int i = 0; i < n; ++i)
		printf("%d ",arr[i]); 
*/	
	return 0;
}

void QuickSort(int * arr, int low, int high)
{
	int pos;
	if(low < high)
	{
		pos = FindPos(arr, low, high);
		QuickSort(arr, low, pos-1);
		QuickSort(arr, pos+1, high);
	}
	
	return;
}

int FindPos(int * arr, int low, int high)
{
	int val = arr[low];
	
	while(low < high)
	{
		while(low < high && arr[high] >= val)
			--high;
		arr[low] = arr[high];
		while(low < high && arr[low] <= val)
			++low;
		arr[high] = arr[low];
	}
	
	arr[low] = val;  //��ʱlow�Ѿ�ָ��val�����ֵ����λ�ã�����λ�ø�ֵΪval
	return low;  //�򷵻ش�ʱval��Ϊλ���±� 
}


