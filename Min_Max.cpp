///*
// * =====================================================================================
// *
// *       Filename:  LinkList.cpp
// *
// *    Description:  
// *
// *        Version:  1.0
// *        Created:  2014年05月04日 22时19分40秒
// *       Revision:  none
// *       Compiler:  gcc
// *
// *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
// *        Company:  FH Südwestfalen, Iserlohn
// *
// * =====================================================================================
// */
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//typedef struct Node {
//	int data;
//	struct Node* next;
//
//}LinkNode,LinkList;
//void initList( LinkList **l)
//{
//	*l=(LinkList*)malloc(sizeof(LinkNode));
//	
//	(*l)->next = NULL;
//}
//void createList( LinkList *L)
//{
//	LinkList *p;
//	p = L;
//	int val;
//	cout <<" Please input the data:";
//	while(cin>>val)
//	{
//		LinkList *s = NULL;
//		s = ( LinkList*)malloc(sizeof(LinkNode));
//		s->data = val;
//		p->next = s;
//		s->next = NULL;
//		p = s;
//
//	}
//	p->next=NULL;
//}
//void display( LinkList *L)
//{
//	LinkList *p;
//	p = L->next;
//	while( p  )
//	{
//		cout << p->data << endl;
//		p = p->next;
//
//
//	}
//}
//class D{}
//;
//class B:public D{};
//
//template<class T>
//class Array{
//
//	operator T*(){}
//};
//int main()
//{
//
//	int *m = NULL;
//	int i = 0;
//	 for (  ; i < 10; i++)
//
//	 {
//		 int *p = &i;
//		 m = p;
//		 cout << p << endl;
//		// delete p;
//
//	 }
//	 cout << m ;
//
// 
//	/*LinkList *l;
//	initList(&l);
//	createList(l);
//		cout << "\n********************************\n";
//	display(l);
//	cout <<"\n************************\n";*/
//	 
//
//
//	return 0;
//}









#include<iostream>
using namespace std;
void Min_Max(int  sum)
{
	int y,x ;
	if (sum % 2 != 0)
	{
		cout << 0 <<" "<<0<<endl;
	}else
	{
		if(sum % 4 == 0)
		cout << sum/4 <<" "<<sum/2<<endl;
		else
		{
		y=sum/4;
		x=sum/2 - 2*y;
		cout << x+y << " "<<sum/2<<endl;
		}
	}


}
int main()
{
	int num,input;
	cin>>num;
	int *arr = new int[num];
	for (int i = 0; i < num  ;i++ )
	{
		cin>>input;
		arr[i]=input;

	}
	for (int i = 0;i < num ;i++ )
	{
		Min_Max(arr[i]);
	}
	return 0;
}

