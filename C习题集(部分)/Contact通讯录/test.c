#include "contact.h"


void Menu()
{
	printf("********************************\n");
	printf("*****1. ADD     2. DEL     *****\n");
	printf("*****3. MODIFY	4. SEARCH  *****\n");
	printf("*****5. SHOW	6. SORT	   *****\n");
	printf("***********0. EXIT *************\n");
	printf("********************************\n");
}


int main()
{
	int input = 0;
	Contact ct;
	InitContact(&ct);
	do
	{
		Menu();
		printf("请输入你要执行的命令\n");
		//初始化通讯录
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&ct);
			break;
		case DEL:
			DelContact(&ct);
			break;
		case MODIFY:
			ModifyContact(&ct);
			break;
		case SEARCH:
			SearchContact(&ct);
			break;
		case SHOW:
			ShowContact(&ct);
			break;
		case SORT:
			break;
		case EXIT:
			Free(&ct);
			break;
		}

	} while (input);
	return 0;
}