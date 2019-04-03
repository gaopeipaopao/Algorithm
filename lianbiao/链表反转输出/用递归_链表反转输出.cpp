#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define N 100
typedef struct list{
	int a;
	struct list *next; 
}L;
void Print(L *pHead);
int main(void){
	L *pHead,*p;
	pHead = NULL;
	p = pHead = (L*) malloc(sizeof(L));
	pHead->next = NULL;
	//链表的长度 
	int n;
	scanf("%d",&n);
	int i = 0;
	for(;i < n;i++){
	   L *q = (L*) malloc(sizeof(L));
	   scanf("%d",&q->a);
	   q->next = NULL;
	   p->next = q;
	   p = q;
	} 
	Print(pHead->next);
//	p = pHead->next;
//	while(p != NULL){
//		printf("%d",p->a);
//		p = p->next;
//	}
	return 0;
} 
void Print(L *pHead){
	if(pHead->next != NULL){
		Print(pHead->next);
	}
	printf("%d",pHead->a);
}
 
