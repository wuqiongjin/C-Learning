//#include "Contact.h"
//
//void Menu()
//{
//	printf("****************************\n");
//	printf("****0. Exit       1. Add****\n");
//	printf("****2. Dele       3. Search*\n");
//	printf("****4. Modify     5. Show***\n");
//	printf("****6. Clear      7. Sort***\n");
//	printf("****************************\n");
//}
//
//void testContact()
//{
//	Con ct;
//	ContactInit(&ct);
//	int input = 1;
//	do
//	{
//		Menu();
//		char str[20] = { 0 };
//		printf("请输入对应选择\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case Exit:
//			break;
//		case Add:
//			ContactAdd(&ct);
//			ContactSave(&ct);
//			break;
//		case Dele:
//			printf("请输入你要删除的人的名字>");
//			scanf("%s", str);
//			ContactDele(&ct, str);
//			ContactSave(&ct);
//			break;
//		case Search:
//			printf("请输入你要查找的人的名字>");
//			scanf("%s", str);
//			int ret = ContactFind(&ct, str);
//			printf("姓名\t性别\t年龄\t电话\t住址\n");
//			printf("%s\t%s\t%d\t%s\t%s\n", ct._a[ret].name, ct._a[ret].sex,
//				ct._a[ret].age, ct._a[ret].tele, ct._a[ret].addr);
//			break;
//		case Modify:
//			ContactModify(&ct);
//			ContactSave(&ct);
//			break;
//		case Show:
//			ContactShow(&ct);
//			break;
//		case Clear:
//			ContactClear(&ct);
//			ContactSave(&ct);
//			break;
//		case Sort:
//			ContactSort(&ct);
//			break;
//		case Destory:
//			ContactDestory(&ct);
//			ContactSave(&ct);
//			break;
//		default:
//			printf("你输入的错误！\n");
//			break;
//		}
//	} while (input);
//	ContactSave(&ct);
//	ContactDestory(&ct);
//}
//
//int main()
//{
//	testContact();
//}