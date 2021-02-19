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

//存放通讯录的信息
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
	//作为创建数组开辟空间的存放地址的指针
	struct PeopInfo* data;
	//当前存了多少信息
	int size;
	//创建的数组的容量
	int capacity;
}Contact;

void InitContact(Contact* ps);
void AddContact(Contact* ps);
void ShowContact(const Contact* ps);
void DelContact(Contact* ps);
void ModifyContact(Contact* ps);
void SearchContact(const Contact* ps);
void Free(Contact* ps);