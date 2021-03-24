//#pragma once
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//enum Key_Contact
//{
//	Exit,
//	Add,
//	Dele,
//	Search,
//	Modify,
//	Show,
//	Clear,
//	Sort,
//	Destory
//};
//
//typedef struct Contact
//{
//	//姓名、性别、年龄、电话、住址
//	char name[20];
//	char sex[5];
//	int age;
//	char tele[20];
//	char addr[20];
//}Contact;
//
//typedef struct Con
//{
//	Contact* _a;
//	int		 _size;
//	int		 _capacity;
//}Con;
//
////初始化通讯录
//void ContactInit(Con* ct);
//
////添加联系人信息
//void ContactAdd(Con* ct);
//
////删除指定联系人信息
//void ContactDele(Con* ct, char* str);
//
////查找指定联系人信息(姓名)
//int ContactFind(Con* ct, char* str);
//
////修改指定联系人信息
//void ContactModify(Con* ct);
//
////显示所有联系人信息
//void ContactShow(Con* ct);
//
////以名字排序所有联系人
//void ContactSort(Con* ct);
//
////清空所有联系人
//void ContactClear(Con* ct);
//
////销毁通讯录
//void ContactDestory(Con* ct);
//
////文件保存
//void ContactSave(Con* ct);
//
////加载文件信息
//void ContactLoad(Con* ct);