#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	int str[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请输入“我是猪”来进行取消关机\n");
	scanf("%s", str);
		if (strcmp(str, "我是猪") == 0)
		{
			printf("那没事了 ^_^ \n");
			system("shutdown -a");
			getchar();
		}
		else
		{
			goto again;
		}
	return 0;
}
