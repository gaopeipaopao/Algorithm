/**
* O(1)时间删除链表节点：删除中间节点和删除尾节点 
*/ 
#include <stdio.h>
#include <stdlib.h>
typedef struct LL{
	int a;
	struct LL *next;
}L1;
void Print(L1 *pHead); 
void Delete(L1 *pHead,L1 *p); 
int main(void){
	int n = 3,i;
	L1 *pHead,*p,*q;
	pHead = (L1 *) malloc(sizeof(L1));
	p = pHead;
	for(i = 0;i < n;i++){
		q = (L1 *)malloc(sizeof(L1));
		q->a = i + 1;
		q->next = NULL;
		p->next = q;
		p = q; 
	}
	Print(pHead);
	Delete(pHead,pHead->next);
	Delete(pHead,pHead->next->next);
	Print(pHead);
}
//删除节点：分为删除中间节点和删除尾节点 
void Delete(L1 *pHead,L1 *p){
	if(p->next == NULL){
		//找到尾节点的上一个节点
		 L1 *q = pHead;
		 while(pHead->next != NULL){
		 	q = pHead;
		 	pHead = pHead->next;
		 }
		 q->next = NULL;
	} else{
		p->a = p->next->a;
		p->next = p->next->next;
	}
} 
//输出 
void Print(L1 *pHead){
	while(pHead != NULL){
		printf("%d\n",pHead->a);
		pHead = pHead->next;
	} 
}
