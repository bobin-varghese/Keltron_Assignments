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
void strip_consonants(char *arr){
	int i,flag;
	for(i=0;arr[i]!='\0';i++){
		flag=0;
		switch(arr[i]){
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'U':
			case 'u':flag=1;break;
		}
		if(flag==0){
			shift(arr,i);
			i--;
		}
	}
}
int main(){
	char arr[25];
	read(arr);
	strip_consonants(arr);
	printf("The Array contents after striping consonants are:\n");
	print(arr);
	return 0;
}
