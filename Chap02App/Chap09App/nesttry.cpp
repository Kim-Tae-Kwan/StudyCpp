//��ø try

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int num;
	int age;
	char name[128];
	int height;

	try
	{
		printf("�й��� �Է��Ͻÿ� : ");
		scanf("%d", &num);
		if (num <= 0)throw num;
		try
		{
			printf("�̸��� �Է��Ͻÿ� : ");
			scanf("%s", name);
			if (strlen(name) < 4) throw "�̸��� �ʹ� ª���ϴ�.";
			printf("���̸� �Է��Ͻÿ� : ");
			scanf("%d", &age);
			if (age == 0)throw age;
			try
			{
				printf("Ű�� �Է��Ͻÿ� : ");
				scanf("%d", &height);
				if (height <= 0)throw height;
			}
			catch (int n)
			{
				throw;
			}
			printf("�Է��� ���� => �й�%d, �̸�%s, ����%d\n", num, name, age);
		}
		catch (const char*msg)
		{
			puts(msg);
		}
		catch (int)
		{
			throw;
		}
	}
	catch (int n)
	{
		printf("[ERROR]%d�� 0 �Ǵ� ������ �������� ����\n", n);
	}
}