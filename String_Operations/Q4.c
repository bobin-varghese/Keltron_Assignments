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
void rev(char *arr1){
	int i,l;
	char temp;
	l=len(arr1);
	for(i=0;i<l/2;i++){
	    temp=arr1[i];
		arr1[i]=arr1[l-i-1];
		arr1[l-i-1]=temp;
	}
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
	rev(arr);
	printf("The Reversed contents are:\n");
	print(arr);
	return 0;
}