//�ڿ��� N�� M�� �Է¹޾Ƽ� �ֻ����� N�� ������ ���� ���� ���� M�� ���� �� �ִ� ��� ��츦 ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//��, N�� 10 ������ �����̴�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N, M ,i =0;
void ReturnNums(int sum, int level)
{
	if (sum == M)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", level);
		}
	}
	ReturnNums(sum + i, level + 1);
}

int main()
{
	int level[10] = { 1, };
	scanf("%d %d", &N, &M);
	ReturnNums(0, level[0]);
}