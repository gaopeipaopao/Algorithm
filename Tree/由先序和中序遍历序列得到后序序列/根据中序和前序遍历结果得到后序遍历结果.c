/**
* ����ǰ��������������õ�����������
* ǰ����������18 14 7 3 11 22 35 27  
* ������������3 7 11 14 18 22 27 35 
* �ȹ���������Ȼ���ٽ��к������ 
**/ 
#include <stdio.h>
#include <stdlib.h>
typedef struct LL{
	struct LL *lChlid; 
	int a;
	struct LL *rChild; 
}L1;//���Ľڵ�Ķ��� 
int index = 0;

//Ѱ�Ҹ����ڵ�����������е�λ�� 
int find_mid(int mid[],int target,int n); 
L1 * build(int order[],int mid[],int left,int right);
void later(L1 *root);


int main(){
	int i;
	//���������洢ǰ�������������
	//order�洢ǰ��mid�洢���� 
    int order[8] = {18,14,7,3,11,22,35,27};
    int mid[8] = {3,7,11,14,18,22,27,35};
	L1 *root = build(order,mid,0,8);
	later(root);	
} 
void later(L1 *root){
	if(root){
		later(root->lChlid);
		later(root->rChild);
		printf("%d  ",root->a);
	}
}
L1 * build(int order[],int mid[],int left,int right){
	if(left >= 8){
		return NULL;
	}
	if(right < 0){
		return NULL;
	}
	if(left > right){
		return NULL;
	}
	int target = order[index];
	int j = find_mid(mid,target,8);
	L1 *root = (L1 *) malloc(sizeof(L1));
	root->a = target;
	index++;
	root->lChlid = build(order,mid,left,j - 1);
	root->rChild = build(order,mid,j + 1,right);
	return root; 
}
int find_mid(int mid[],int target,int n){
	int i;
	for(i = 0;i < n;i++){
		if(mid[i] == target){
			return i;
		}
	}
	return -1;
}
