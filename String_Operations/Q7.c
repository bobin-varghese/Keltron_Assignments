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
void shift(char *arr,int pos){
	int i;
	for(i=pos;arr[i]!='\0';i++){
		arr[i]=arr[i+1];
	}
}
void strip_vowel(char *arr){
	int i;
	char temp;
	for(i=0;arr[i]!='\0';i++){
		switch(arr[i]){
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'U':
			case 'u':shift(arr,i);i--;break;
		}
	}
}
int main(){
	char arr[25];
	read(arr);
	strip_vowel(arr);
	printf("The Array contents after striping are:\n");
	print(arr);
	return 0;
}