#include<stdio.h>

int main() {
	int n1,n2;
	
	scanf("%d %d", &n1, &n2);
	
	if(n1>n2) {
		printf("num1 is greater than num2\n");
	} else {
		printf("num2 is greater than num1\n");
	}
	int a = n1-n2;
	printf("%d",a);
}
