#include <stdio.h>
//��ά���鴫�뺯��������ʱ���������ββ�����Ϊa[][]�����������ֵ������ȷ�����磺a[][3]
int search(int *a,int n,int m,int target){
	int row = 0,col = m - 1;
	while(row < n && col >=0){
		if(*(a + m * row + col) == target){
	        return 1;
		}
	    else if(*(a + m * row + col) > target){
	    	col--;
		}else if(*(a + m * row + col) < target){
	    	row++;
		}
	}
	return 0;
} 
int main(void){
	int i,j;
	int target;
	scanf("%d",&target);
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	if(search(a,3,3,target)){
		printf("�����к��и�Ԫ��");
	}else{
		printf("������û�и�Ԫ��"); 
	} 
} 
