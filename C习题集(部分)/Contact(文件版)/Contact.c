//#include "Contact.h"
//
//void ContactInit(Con* ct)
//{
//	//尽量少用数字【要会用DEFINE定义】
//	ct->_a = (Contact*)malloc(sizeof(Contact) * 3);
//	ct->_size = 0;
//	ct->_capacity = 3;
//	ContactLoad(ct);
//}
//
////起名有待提高
//void Is_Full(Con* ct)
//{
//	if (ct->_size == ct->_capacity)
//	{
//		int newCapacity = 2 * ct->_capacity;
//		Contact* ret = realloc(ct->_a, sizeof(Contact)*newCapacity);
//		if (ret)
//		{
//			printf("增容成功！\n");
//		}
//		ct->_capacity = newCapacity;
//		ct->_a = ret;
//	}
//}
//
//void ContactAdd(Con* ct)
//{
//	Is_Full(ct);
//	printf("请输入姓名>");
//	scanf("%s", ct->_a[ct->_size].name);
//
//	printf("请输入性别>");
//	scanf("%s", ct->_a[ct->_size].sex);
//
//	//注意取地址！
//	printf("请输入年龄>");
//	scanf("%d", &(ct->_a[ct->_size].age));
//	
//	printf("请输入电话>");
//	scanf("%s", ct->_a[ct->_size].tele);
//	
//	printf("请输入住址>");
//	scanf("%s", ct->_a[ct->_size].addr);
//
//	ct->_size++;
//	printf("录入成功！\n");
//}
//
//int ContactFind(Con* ct, char* str)
//{
//	int i = 0;
//	for (i = 0; i < ct->_size; ++i)
//	{
//		if (strcmp(str, ct->_a->name) == 0)
//		{
//			return i;
//		}
//	}
//	//找不到
//	return -1;
//}
//
////删除指定人信息
//void ContactDele(Con* ct, char* str)
//{
//	int ret = ContactFind(ct, str);
//	int i = 0;
//	if (ret != -1)
//	{
//		for (i = ret; i < ct->_size;++i)
//		{
//			ct->_a[ret] = ct->_a[ret + 1];
//		}
//		//注意：删除完，要对size进行--
//		ct->_size--;
//		printf("删除成功！\n");
//	}
//	else
//	{
//		printf("你要删除的联系人不在通讯录中!\n");
//	}
//	
//}
//
//
////修改指定人联系信息
//void ContactModify(Con* ct)
//{
//	printf("请输入你要修改的人的名字>");
//	char str[20] = { 0 };
//	scanf("%s", str);
//
//	int ret = ContactFind(ct, str);
//	if (ret != -1)
//	{
//		printf("请输入新的名字>");
//		scanf("%s", ct->_a[ret].name);
//
//		printf("请输入新的性别>");
//		scanf("%s", ct->_a[ret].sex);
//
//		printf("请输入新的年龄>");
//		scanf("%d", &ct->_a[ret].age);
//
//		printf("请输入新的电话>");
//		scanf("%s", ct->_a[ret].tele);
//
//		printf("请输入新的住址>");
//		scanf("%s", ct->_a[ret].addr);
//
//		printf("修改成功！\n");
//	}
//	else
//	{
//		printf("你要修改的人的信息不存在！\n");
//	}
//}
//
////显示通讯录
//void ContactShow(Con* ct)
//{
//	int i = 0;
//	printf("姓名\t性别\t年龄\t电话\t住址\n");
//
//	
//	for (i = 0; i < ct->_size;i++)
//	{
//		printf("%s\t%s\t%d\t%s\t%s\n", ct->_a[i].name, ct->_a[i].sex,
//			ct->_a[i].age, ct->_a[i].tele, ct->_a[i].addr);
//	}
//}
//
////根据名字对通讯录排序
//int cmp_by_name(const void* e1, const void* e2)
//{
//	return (strcmp(((Contact*)e1)->name, ((Contact*)e2)->name));
//}
//
//void ContactSort(Con* ct)
//{
//	qsort(ct->_a, ct->_size, sizeof(Contact), cmp_by_name);
//}
//
////清空通讯录
//void ContactClear(Con* ct)
//{
//	ct->_size = 0;
//	printf("清空成功！\n");
//}
//
////销毁通讯录
//void ContactDestory(Con* ct)
//{
//	free(ct->_a);
//	ct->_a = NULL;
//	ct->_size = 0;
//	ct->_capacity = 0;
//}
//
//void ContactSave(Con* ct)
//{
//	FILE* pf = fopen("Contact.txt", "w");
//	if (pf == NULL)
//	{
//		perror("SaveError：");
//		return;
//	}
//	
//	int i = 0;
//	for (i = 0;i < ct->_size;++i)
//	{
//		fprintf(pf, "%s\t%s\t%d\t%s\t%s\n", ct->_a[i].name, ct->_a[i].sex,
//			ct->_a[i].age, ct->_a[i].tele, ct->_a[i].addr);
//	}
//	
//	fclose(pf);
//	pf = NULL;
//}
//
//void ContactLoad(Con* ct)
//{
//	FILE* pf = fopen("Contact.txt", "r");
//	if (pf == NULL)
//	{
//		perror("LoadError:");
//		return;
//	}
//
//	int i = 0;
//	while (fscanf(pf, "%s%s%d%s%s", ct->_a[i].name, ct->_a[i].sex, 
//		&(ct->_a[i].age), ct->_a[i].tele, ct->_a[i].addr) != EOF)
//	{
//		Is_Full(ct);
//		ct->_size++;
//		i++;
//	}
//
//	fclose(pf);
//	pf = NULL;
//}
//
//
