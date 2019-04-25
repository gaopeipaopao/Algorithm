/**
* Á´±í·´×ª 
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct LL{
    int a;
    struct LL *next;
}L1;
int main(){
    L1 *phead = (L1 *)malloc(sizeof(L1));
    L1 *p = phead;;
    L1 *q;
    int n = 3;
    for (int i = 0;i < n;i++){
        q = (L1 *) malloc(sizeof(L1));
        scanf("%d",&q->a);
        q->next = NULL;
        p->next = q;
        p = q;
    }
    q = phead->next;
    printf("%d\n",q); 
    phead = NULL;
    while(q != NULL){
        p = q;
        q = q->next;
        p->next = phead;
        phead = p;
    }
    
    while(phead != NULL){
        printf("%d\n",phead->a);
        phead = phead->next;
    }
}
