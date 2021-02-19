#include "contact.h"

//检测是否满容量函数
static void Check_Capacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		PeopInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(PeopInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;//增容时候要把容量指标也增加
			printf("增容成功!\n");
		}
		else
		{
			printf("%s\n", strerror(errno));
		}
	}
}

//初始化通讯录函数
void InitContact(Contact* ps)
{
	//为数据存放开辟动态空间
	ps->data = (PeopInfo*)malloc(INIT_CAPACITY * sizeof(PeopInfo));
	//初始化初始元素为0个
	ps->size = 0;
	//初始化容量为INIT_CAPACITY
	ps->capacity = INIT_CAPACITY;
}

//增添通讯录元素的函数
void AddContact(Contact* ps)
{
	//检查是否满容量【满的话进行增容，不满的话什么都不发生】
	Check_Capacity(ps);
	printf("请输入名字:");
	scanf("%s", (*(ps->data + ps->size)).name);
	printf("请输入性别:");
	scanf("%s", (*(ps->data + ps->size)).sex);
	printf("请输入年龄:");
	scanf("%hd", &(*(ps->data + ps->size)).age);
	printf("请输入电话:");
	scanf("%s", (*(ps->data + ps->size)).tele);
	printf("请输入住址:");
	scanf("%s", (*(ps->data + ps->size)).addr);
	ps->size += 1;//添加元素后不要忘了size也要++
}

//展示通讯录
void ShowContact(const Contact* ps)
{
	int i = 0;
	printf("名字\t性别\t年龄\t电话\t住址\n");
	for (i = 0;i < ps->size;i++)
	{
		//printf("%s\t%s\t%d\t%s\t%s\n", (ps->data + i)->name, (ps->data + i)->sex,
		//	(ps->data + i)->age, (ps->data + i)->tele, (ps->data + i)->addr);
		printf("%s\t%s\t%d\t%s\t%s\n", ps->data[i].name, ps->data[i].sex,
			ps->data[i].age, ps->data[i].tele, ps->data[i].addr);
	}
}

//搜索函数
static int SearchContactByName(const Contact* ps)
{
	printf("请输入名字:");
	char s[MAX_NAME] = { 0 };		//出现BUG****	【不能创建char* s，然后scanf s；其次，数组必须指定大小，不能写成char s[]={0}】
	scanf("%s",s);			//出现BUG****	 【数组不用&s,s就是地址，首元素的地址】
	int i = 0;
	while (i <= ps->size)
	{
		if (!strcmp(ps->data[i].name,s))	//这里的s也是首元素的地址，不能写成*s，*s是第一个元素的地址
			return i;
		i++;
	}
	return -1;
}

//删除通讯录中的信息
void DelContact(Contact* ps)
{
	int ret = SearchContactByName(ps);
	if (ret != -1)
	{
		while (ret < ps->size - 1)
		{
			//((ps->data + ret)->name) = ((ps->data + ret + 1)->name);
			//((ps->data + ret)->sex) = ((ps->data + ret + 1)->sex);
			//((ps->data + ret)->age) = ((ps->data + ret + 1)->age);
			//((ps->data + ret)->tele) = ((ps->data + ret + 1)->tele);
			//((ps->data + ret)->addr) = ((ps->data + ret + 1)->addr);
			*(ps->data + ret) = *(ps->data + ret + 1);
			
			ret++;
		}
		printf("删除成功！\n");
		ps->size--;		//别忘了size计数器要--
	}
	else
	{
		printf("删除失败，请检查你输入的信息是否正确!\n");
	}
}


//修改通讯录

void ModifyContact(Contact* ps)
{
	int ret = SearchContactByName(ps);
	if (ret != -1)
	{
		printf("请输入你要修改的信息：\n");
		printf("请输入名字:");
		scanf("%s", (*(ps->data + ret)).name);
		printf("请输入性别:");
		scanf("%s", (*(ps->data + ret)).sex);
		printf("请输入年龄:");
		scanf("%hd", &(*(ps->data + ret)).age);
		printf("请输入电话:");
		scanf("%s", (*(ps->data + ret)).tele);
		printf("请输入住址:");
		scanf("%s", (*(ps->data + ret)).addr);
	}
	else
	{
		printf("你输入的信息不正确！\n");
	}
}

//Search函数(外壳）

void SearchContact(const Contact* ps)
{
	int ret = SearchContactByName(ps);
	if (ret != -1)
	{
		printf("你要找的信息为:");
	}
	else
	{
		printf("名字\t性别\t年龄\t电话\t住址\n");
		printf("%s\t%s\t%d\t%s\t%s\n", ps->data[ret].name, ps->data[ret].sex,
			ps->data[ret].age, ps->data[ret].tele, ps->data[ret].addr);
	}	
}

//释放内存函数

void Free(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}