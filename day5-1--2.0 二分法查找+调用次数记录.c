#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// 调用次数计算函数 调用一次 次数加一。  
// 二分查找函数
//________________________________________ 正好可以计算一下二分了几次，刚好可以用到第一个，欸嘿。___________________________________
int countofuse(int count)
{
	count++;
	return count;
}            //次数计算
dichotomy(int tgt, int arr[], int* l, int* r, int* count1, int* Find)    //这里用arr[]即可，本质上它是一个指针。
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
		printf("找到了，下标是%d\n", mid);
	}
	; *count1 = countofuse(pp);
}

int main()
{
	int k = 0; int times = 0; int find = 0;
	int ar[] = { 2,3,5,8,13,21,34,55,89,144 };
	printf("你想查找哪个数字？请输入：\n");
	scanf("%d", &k);
	int left = 0; int right = sizeof(ar) / sizeof(ar[0]) - 1;
	while (left <= right)
	{
		dichotomy(k, ar, &left, &right, &times, &find);
		if (find)
			break;
	}
	//是小于还是小于等于？做到最后再试试。
	if (find == 0)
	{
		printf("找不到\n");
	}
	printf("二分法调用了%d次\n", times);
	return 0;
}