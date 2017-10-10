#include<stdio.h>
int len(char *arr){
	int i;
	for(i=0;arr[i]!='\0';i++);
	return i;
}
void read(char *arr){
	printf("Enter the String:\n");
	fgets(arr,25,stdin);	//scanf("%s",arr);
	arr[len(arr)-1]='\0';
	
}
void copy(char *arr1,char *arr2){
	int i;
	for(i=0;arr1[i]!='\0';i++){
		arr2[i]=arr1[i];
	}
	arr2[i]='\0';
}
void print(char *arr){
	int i;
	for(i=0;arr[i]!='\0';i++){
		printf("%c",arr[i]);
	}
}
int main(){
	char arr1[25],arr2[25];
	read(arr1);
	copy(arr1,arr2);
	printf("The contents of Copied array are:\n");
	print(arr2);
	return 0;
}