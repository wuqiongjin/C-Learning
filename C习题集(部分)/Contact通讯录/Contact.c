#include "contact.h"

//����Ƿ�����������
static void Check_Capacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		PeopInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(PeopInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;//����ʱ��Ҫ������ָ��Ҳ����
			printf("���ݳɹ�!\n");
		}
		else
		{
			printf("%s\n", strerror(errno));
		}
	}
}

//��ʼ��ͨѶ¼����
void InitContact(Contact* ps)
{
	//Ϊ���ݴ�ſ��ٶ�̬�ռ�
	ps->data = (PeopInfo*)malloc(INIT_CAPACITY * sizeof(PeopInfo));
	//��ʼ����ʼԪ��Ϊ0��
	ps->size = 0;
	//��ʼ������ΪINIT_CAPACITY
	ps->capacity = INIT_CAPACITY;
}

//����ͨѶ¼Ԫ�صĺ���
void AddContact(Contact* ps)
{
	//����Ƿ������������Ļ��������ݣ������Ļ�ʲô����������
	Check_Capacity(ps);
	printf("����������:");
	scanf("%s", (*(ps->data + ps->size)).name);
	printf("�������Ա�:");
	scanf("%s", (*(ps->data + ps->size)).sex);
	printf("����������:");
	scanf("%hd", &(*(ps->data + ps->size)).age);
	printf("������绰:");
	scanf("%s", (*(ps->data + ps->size)).tele);
	printf("������סַ:");
	scanf("%s", (*(ps->data + ps->size)).addr);
	ps->size += 1;//���Ԫ�غ�Ҫ����sizeҲҪ++
}

//չʾͨѶ¼
void ShowContact(const Contact* ps)
{
	int i = 0;
	printf("����\t�Ա�\t����\t�绰\tסַ\n");
	for (i = 0;i < ps->size;i++)
	{
		//printf("%s\t%s\t%d\t%s\t%s\n", (ps->data + i)->name, (ps->data + i)->sex,
		//	(ps->data + i)->age, (ps->data + i)->tele, (ps->data + i)->addr);
		printf("%s\t%s\t%d\t%s\t%s\n", ps->data[i].name, ps->data[i].sex,
			ps->data[i].age, ps->data[i].tele, ps->data[i].addr);
	}
}

//��������
static int SearchContactByName(const Contact* ps)
{
	printf("����������:");
	char s[MAX_NAME] = { 0 };		//����BUG****	�����ܴ���char* s��Ȼ��scanf s����Σ��������ָ����С������д��char s[]={0}��
	scanf("%s",s);			//����BUG****	 �����鲻��&s,s���ǵ�ַ����Ԫ�صĵ�ַ��
	int i = 0;
	while (i <= ps->size)
	{
		if (!strcmp(ps->data[i].name,s))	//�����sҲ����Ԫ�صĵ�ַ������д��*s��*s�ǵ�һ��Ԫ�صĵ�ַ
			return i;
		i++;
	}
	return -1;
}

//ɾ��ͨѶ¼�е���Ϣ
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
		printf("ɾ���ɹ���\n");
		ps->size--;		//������size������Ҫ--
	}
	else
	{
		printf("ɾ��ʧ�ܣ��������������Ϣ�Ƿ���ȷ!\n");
	}
}


//�޸�ͨѶ¼

void ModifyContact(Contact* ps)
{
	int ret = SearchContactByName(ps);
	if (ret != -1)
	{
		printf("��������Ҫ�޸ĵ���Ϣ��\n");
		printf("����������:");
		scanf("%s", (*(ps->data + ret)).name);
		printf("�������Ա�:");
		scanf("%s", (*(ps->data + ret)).sex);
		printf("����������:");
		scanf("%hd", &(*(ps->data + ret)).age);
		printf("������绰:");
		scanf("%s", (*(ps->data + ret)).tele);
		printf("������סַ:");
		scanf("%s", (*(ps->data + ret)).addr);
	}
	else
	{
		printf("���������Ϣ����ȷ��\n");
	}
}

//Search����(��ǣ�

void SearchContact(const Contact* ps)
{
	int ret = SearchContactByName(ps);
	if (ret != -1)
	{
		printf("��Ҫ�ҵ���ϢΪ:");
	}
	else
	{
		printf("����\t�Ա�\t����\t�绰\tסַ\n");
		printf("%s\t%s\t%d\t%s\t%s\n", ps->data[ret].name, ps->data[ret].sex,
			ps->data[ret].age, ps->data[ret].tele, ps->data[ret].addr);
	}	
}

//�ͷ��ڴ溯��

void Free(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}