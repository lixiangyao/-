/*
* Writen By ������
* Email��lixiangyao@outlook.com 
* �����ο���ѧϰ 
* License��AL2.0 
*/ 


#include <stdio.h>
#include <windows.h>

void hanoi(int n, char start, char middle, char target);
void move(int n, char start, char target);

int cnt = 0;

int main(void)
{
	int n = 0;
	
	printf("�����뺺ŵ��������");
	scanf("%d",&n);
	printf("\n");
	
	char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = 'C';
	hanoi(n, ch1, ch2, ch3); 
	return 0;
}

void hanoi(int n, char start, char middle, char target)
{
	if(1 == n)
		move(n, start, target);    //���n = 1����ֱ�ӽ������ʼ���Ƶ�Ŀ���� 
	else
	{
		hanoi(n-1, start, target, middle);  //������n-1�����ʼ������Ŀ�����ƶ����м���
		move(n, start, target);  //��n���ƶ���Ŀ���������
		hanoi(n-1, middle, start, target);  //�ݹ齫ʣ�µ�n-1����м����ƶ���Ŀ���� 
	}
	
	return;
}

void move(int n, char start, char target)
{
	cnt++;  //��ȫ�ֱ�����¼�ƶ����� 
	//printf("  %d:����%d���%c--->%c\n\n",cnt,n,start,target);  //������ƶ����ƶ�һ�� 
	if(start == 'A' && target == 'B')
		printf("    ��%d��:����%d��\n      -------->\n     *         *         *\n     *         *         *\n     *         *         *\n     *         *         *\n   *****     *****     *****\n     A         B         C\n\n",cnt,n);
	else if(start == 'A'  && target == 'C')
		printf("    ��%d��:����%d��\n     ------------------->\n     *         *         *\n     *         *         *\n     *         *         *\n     *         *         *\n   *****     *****     *****\n     A         B         C\n\n",cnt,n);
	else if(start == 'B' && target == 'C')
		printf("    ��%d��:����%d��\n                -------->\n     *         *         *\n     *         *         *\n     *         *         *\n     *         *         *\n   *****     *****     *****\n     A         B         C\n\n",cnt,n);
	else if(start == 'C' && target == 'A')
		printf("    ��%d��:����%d��\n      <------------------\n     *         *         *\n     *         *         *\n     *         *         *\n     *         *         *\n   *****     *****     *****\n     A         B         C\n\n",cnt,n);
	else if(start == 'C' && target == 'B')
		printf("    ��%d��:����%d��\n                <--------\n     *         *         *\n     *         *         *\n     *         *         *\n     *         *         *\n   *****     *****     *****\n     A         B         C\n\n",cnt,n);
	else if(start == 'B' && target == 'A')	
		printf("    ��%d��:����%d��\n      <--------\n     *         *         *\n     *         *         *\n     *         *         *\n     *         *         *\n   *****     *****     *****\n     A         B         C\n\n",cnt,n);
	//Ϊ�˺ÿ�^_^������ӡ����Ϣ�÷��ű༭Ϊ��ŵ������״����ָʾ���ĸ������ƶ����ĸ� 
	
	return;
}

