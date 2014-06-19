/*
 * =====================================================================================
 *
 *       Filename:  LinkList.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年05月04日 22时19分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */
#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct Node {
	int data;
	struct Node* next;

}LinkNode,LinkList;
void initList( LinkList *l)
{
	l=(LinkList*)malloc(sizeof(LinkNode));
	l->next = NULL;
}
void createList( LinkList *L)
{
	LinkList *p;
	p = L;
	int val;
	cout <<" Please input the data:";
	while(cin>>val)
	{
		LinkList *s = NULL;
		s = ( LinkList*)malloc(sizeof(LinkNode));
		s->data = val;
		p->next = s;
		s->next = NULL;
		p = s;

	}
}
void display( LinkList *L)
{
	LinkList *p;
	p = L;
	while( p)
	{
		cout << p->data << endl;
	}
}
int main()
{
	LinkList *l;
	initList(l);
	createList(l);
		cout << "\n********************************\n";
//	display(l);
	cout <<"\n************************\n";
	return 0;
}
