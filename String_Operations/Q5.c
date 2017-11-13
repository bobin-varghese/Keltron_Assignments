#include<stdio.h>
int len(char *arr){
	int i;
	for(i=0;arr[i]!='\0';i++);
	return i;
}
void read(char *arr){
	printf("Enter something to insert into the Array:\n");
	fgets(arr,25,stdin);	//scanf("%s",arr);
	arr[len(arr)-1]='\0';
	
}
void print(char *arr){
	int i;
	for(i=0;arr[i]!='\0';i++){
		printf("%c",arr[i]);
	}
}
int main(){
	char arr[25];;
	read(arr);
	printf("The Array contents are:\n");
	print(arr);
	return 0;
}
