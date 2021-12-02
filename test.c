#include<stdio.h>
#include<windows.h>

void Multi(int num)
{
    int i = 0;
    for(i = 1; i <= num; i++)
    {
	int j = 0;
	for(j = 1; j <= i; j++)
	{
	    printf("%d * %d = %-2d ", i, j, i * j);
	}
    printf("\n");
    }
}

int main()
{
    int n = 0;
    printf("请输入行列数：>");
    scanf("%d", &n);
    Multi(n);
    system("pause");
    return;
}