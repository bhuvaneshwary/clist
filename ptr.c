#include <stdio.h>

void changek(int k);

void changekptr(int * k);
int main(){

	int k = 0;
	printf("value of k = %d \n",k);
	printf("address of k = %p \n",&k);
	changek(k);
	printf("value of k after change k = %d \n",k);
	printf("address of k after change k = %p \n",&k);
	changekptr(&k);
	printf("value of k after change k = %d \n",k);
	printf("address of k after change k = %p \n",&k);
}
void changek(int k){
	k =10;
	printf("value of k inside function = %d \n",k);
	printf("address of k inside function = %p \n",&k);
}
void changekptr(int * k){
	*k =10;
	printf("value of k inside function = %d \n",*k);
	printf("address of k inside function = %p \n",k);
}
