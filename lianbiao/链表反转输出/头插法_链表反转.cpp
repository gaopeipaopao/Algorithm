#include <stdio.h> 
int main(void){
	int i = 0;
	int a[3] = {0};
	for(i = 0;i <= 3;i++){
		a[i] = 0;
		printf("i:%d\n",&i);
		printf("a:%d,i:%d\n",&a[i],i); 
		printf("hello\n");
	}
}


