/**
* O(1)ʱ��ɾ������ڵ㣺ɾ���м�ڵ��ɾ��β�ڵ� 
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
//ɾ���ڵ㣺��Ϊɾ���м�ڵ��ɾ��β�ڵ� 
void Delete(L1 *pHead,L1 *p){
	if(p->next == NULL){
		//�ҵ�β�ڵ����һ���ڵ�
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
//��� 
void Print(L1 *pHead){
	while(pHead != NULL){
		printf("%d\n",pHead->a);
		pHead = pHead->next;
	} 
}
