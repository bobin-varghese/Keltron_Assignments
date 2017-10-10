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
void print(char *arr){
	int i;
	for(i=0;arr[i]!='\0';i++){
		printf("%c",arr[i]);
	}
}
void concat(char *a, char *b){
	int i,j,len_a,len_b;
	len_a=len(a);
	len_b=len(b);
	for(i=0,j=len_b;i<len_a;i++){
		b[j+i]=a[i];
	}
}
int main(){
	char arr1[25],arr2[60];
	read(arr1);
	read(arr2);
	concat(arr1,arr2);
	printf("The Array contents after concatinating are:\n");
	print(arr2);
	return 0;
}