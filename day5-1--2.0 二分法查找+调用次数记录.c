#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// ���ô������㺯�� ����һ�� ������һ��  
// ���ֲ��Һ���
//________________________________________ ���ÿ��Լ���һ�¶����˼��Σ��պÿ����õ���һ�����G�١�___________________________________
int countofuse(int count)
{
	count++;
	return count;
}            //��������
dichotomy(int tgt, int arr[], int* l, int* r, int* count1, int* Find)    //������arr[]���ɣ�����������һ��ָ�롣
{
	int mid = 0; int pp = *count1;
	mid = (*l + *r) / 2;
	if (arr[mid] < tgt)
	{
		*l = mid + 1;
	}
	else if (arr[mid] > tgt)
	{
		*r = mid - 1;
	}
	else
	{
		*Find = *Find + 1;
		printf("�ҵ��ˣ��±���%d\n", mid);
	}
	; *count1 = countofuse(pp);
}

int main()
{
	int k = 0; int times = 0; int find = 0;
	int ar[] = { 2,3,5,8,13,21,34,55,89,144 };
	printf("��������ĸ����֣������룺\n");
	scanf("%d", &k);
	int left = 0; int right = sizeof(ar) / sizeof(ar[0]) - 1;
	while (left <= right)
	{
		dichotomy(k, ar, &left, &right, &times, &find);
		if (find)
			break;
	}
	//��С�ڻ���С�ڵ��ڣ�������������ԡ�
	if (find == 0)
	{
		printf("�Ҳ���\n");
	}
	printf("���ַ�������%d��\n", times);
	return 0;
}