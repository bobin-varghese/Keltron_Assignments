#include<stdio.h>
int read(char *arr){
	int i;
	printf("Enter the String:\n");
	fgets(arr,25,stdin);//scanf("%s",arr);
	for(i=0;arr[i]!='\0';i++);
	return i-1;
}
int main(){
	char arr[25];
	printf("The number of charecters read= %d\n",read(arr));
	return 0;
}