#include<iostream>
#include<cstdlib>
using namespace std;
/*
typedef struct LinkNode{
	int data;
	struct LinkNode *next;
}LinkNode,*LinkList;
void initLinkList(LinkList *L)
{
	//*L = new LinkNode();
	*L=(LinkList)malloc(sizeof(struct LinkNode));
	(*L)->next = NULL;
	//if((*L) == NULL) throw "Cannot ";

}*/
typedef int ElemType ;
typedef struct LNode{
	  ElemType data;
	    struct LNode *next;
}LNode, *LinkList;
 
/*带有头结點的單鏈表的基本操作(12个)*/
void InitList(LinkList *L)
{ /* 操作结果：構造一个空的線性表L */
	  *L=(LinkList)malloc(sizeof(struct LNode)); /* 產生头结點，並使L指向此头结點 */
	      (*L)->next=NULL; /* 指针域為空 */
}
int main()
{
	LinkList *L;
	
	InitList(L);
	//initLinkList(L);
	return 0;

}
