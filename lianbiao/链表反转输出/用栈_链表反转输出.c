#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define N 100
//typedef�൱�ڱ��� lists a == struct list a;
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
	//����ĳ��� 
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
	int a[N] = {0};
	int top = -1,bottom = -1;
	//��ջ 
	while(pHead != NULL){
		top++;
		a[top] = pHead->a;
		pHead = pHead->next;
	}
	//��ջ 
	while(top != bottom){
		printf("%d\n",a[top]);
		top--; 
	}
}
