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
//	//�������Ա����䡢�绰��סַ
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
////��ʼ��ͨѶ¼
//void ContactInit(Con* ct);
//
////�����ϵ����Ϣ
//void ContactAdd(Con* ct);
//
////ɾ��ָ����ϵ����Ϣ
//void ContactDele(Con* ct, char* str);
//
////����ָ����ϵ����Ϣ(����)
//int ContactFind(Con* ct, char* str);
//
////�޸�ָ����ϵ����Ϣ
//void ContactModify(Con* ct);
//
////��ʾ������ϵ����Ϣ
//void ContactShow(Con* ct);
//
////����������������ϵ��
//void ContactSort(Con* ct);
//
////���������ϵ��
//void ContactClear(Con* ct);
//
////����ͨѶ¼
//void ContactDestory(Con* ct);
//
////�ļ�����
//void ContactSave(Con* ct);
//
////�����ļ���Ϣ
//void ContactLoad(Con* ct);