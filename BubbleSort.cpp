#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int * arr, int n);

int main(void)
{
	int n = 100000;
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
	BubbleSort(arr, n);
/*	
	printf("��������ݣ�\n");  //��Ϊ��ӡ������̨̫��ʱ�䣬������ʱע�͵� 
	for(int i = 0; i < n; ++i)
		printf("%d ",arr[i]); 
*/	
	return 0;	
} 

void BubbleSort(int * arr, int n)
{
	int i,j,t;
	
	for(i = 0; i < n; ++i)
	{
		for(j = i + 1; j < n; ++j)
		{
			if(arr[i] > arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;		
			}
		}
	}
	return;
}
