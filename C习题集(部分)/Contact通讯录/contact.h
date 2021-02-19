#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define ADD 1
#define DEL 2
#define MODIFY 3
#define SEARCH 4
#define SHOW 5
#define SORT 6
#define EXIT 0

#define INIT_CAPACITY 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 20
#define MAX_ADDR 20

//���ͨѶ¼����Ϣ
typedef struct PeopInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	short age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeopInfo;

typedef struct Contact
{
	//��Ϊ�������鿪�ٿռ�Ĵ�ŵ�ַ��ָ��
	struct PeopInfo* data;
	//��ǰ���˶�����Ϣ
	int size;
	//���������������
	int capacity;
}Contact;

void InitContact(Contact* ps);
void AddContact(Contact* ps);
void ShowContact(const Contact* ps);
void DelContact(Contact* ps);
void ModifyContact(Contact* ps);
void SearchContact(const Contact* ps);
void Free(Contact* ps);