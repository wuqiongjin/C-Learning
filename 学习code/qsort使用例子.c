//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//typedef struct Book
//{
//	char name[20];
//	int code;
//}Book;
//
//int cmp_Book(const void* e1, const void* e2)
//{
//	return strcmp(((struct Book*)e1)->name, ((struct Book*)e2)->name);
//}
//
//int main()
//{
//	//int a[] = { 1,3,5,2,4,6 };
//	//qsort(a, sizeof(a) / sizeof(a[0]), sizeof(a[0]), cmp_int);
//	struct Book LB[3] = { {"女人与海",1234},{"老人与海",123},{"女人遇害",110} };
//
//	qsort(LB, sizeof(LB) / sizeof(LB[0]), sizeof(LB[0]), cmp_Book);
//	return 0;
//}
