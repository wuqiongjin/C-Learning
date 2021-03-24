//#include "Contact.h"
//
//void ContactInit(Con* ct)
//{
//	//�����������֡�Ҫ����DEFINE���塿
//	ct->_a = (Contact*)malloc(sizeof(Contact) * 3);
//	ct->_size = 0;
//	ct->_capacity = 3;
//	ContactLoad(ct);
//}
//
////�����д����
//void Is_Full(Con* ct)
//{
//	if (ct->_size == ct->_capacity)
//	{
//		int newCapacity = 2 * ct->_capacity;
//		Contact* ret = realloc(ct->_a, sizeof(Contact)*newCapacity);
//		if (ret)
//		{
//			printf("���ݳɹ���\n");
//		}
//		ct->_capacity = newCapacity;
//		ct->_a = ret;
//	}
//}
//
//void ContactAdd(Con* ct)
//{
//	Is_Full(ct);
//	printf("����������>");
//	scanf("%s", ct->_a[ct->_size].name);
//
//	printf("�������Ա�>");
//	scanf("%s", ct->_a[ct->_size].sex);
//
//	//ע��ȡ��ַ��
//	printf("����������>");
//	scanf("%d", &(ct->_a[ct->_size].age));
//	
//	printf("������绰>");
//	scanf("%s", ct->_a[ct->_size].tele);
//	
//	printf("������סַ>");
//	scanf("%s", ct->_a[ct->_size].addr);
//
//	ct->_size++;
//	printf("¼��ɹ���\n");
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
//	//�Ҳ���
//	return -1;
//}
//
////ɾ��ָ������Ϣ
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
//		//ע�⣺ɾ���꣬Ҫ��size����--
//		ct->_size--;
//		printf("ɾ���ɹ���\n");
//	}
//	else
//	{
//		printf("��Ҫɾ������ϵ�˲���ͨѶ¼��!\n");
//	}
//	
//}
//
//
////�޸�ָ������ϵ��Ϣ
//void ContactModify(Con* ct)
//{
//	printf("��������Ҫ�޸ĵ��˵�����>");
//	char str[20] = { 0 };
//	scanf("%s", str);
//
//	int ret = ContactFind(ct, str);
//	if (ret != -1)
//	{
//		printf("�������µ�����>");
//		scanf("%s", ct->_a[ret].name);
//
//		printf("�������µ��Ա�>");
//		scanf("%s", ct->_a[ret].sex);
//
//		printf("�������µ�����>");
//		scanf("%d", &ct->_a[ret].age);
//
//		printf("�������µĵ绰>");
//		scanf("%s", ct->_a[ret].tele);
//
//		printf("�������µ�סַ>");
//		scanf("%s", ct->_a[ret].addr);
//
//		printf("�޸ĳɹ���\n");
//	}
//	else
//	{
//		printf("��Ҫ�޸ĵ��˵���Ϣ�����ڣ�\n");
//	}
//}
//
////��ʾͨѶ¼
//void ContactShow(Con* ct)
//{
//	int i = 0;
//	printf("����\t�Ա�\t����\t�绰\tסַ\n");
//
//	
//	for (i = 0; i < ct->_size;i++)
//	{
//		printf("%s\t%s\t%d\t%s\t%s\n", ct->_a[i].name, ct->_a[i].sex,
//			ct->_a[i].age, ct->_a[i].tele, ct->_a[i].addr);
//	}
//}
//
////�������ֶ�ͨѶ¼����
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
////���ͨѶ¼
//void ContactClear(Con* ct)
//{
//	ct->_size = 0;
//	printf("��ճɹ���\n");
//}
//
////����ͨѶ¼
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
//		perror("SaveError��");
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
