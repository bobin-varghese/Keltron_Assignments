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
void concat(char *a, char *b){
	int i,j,len_a,len_b;
	len_a=len(a);
	len_b=len(b);
	for(i=0,j=len_b;i<len_a;i++){
		b[j+i]=a[i];
	}
}
void reverse(char *arr1){
	int i,l;
	char temp;
	l=len(arr1);
	for(i=0;i<l/2;i++){
	    temp=arr1[i];
		arr1[i]=arr1[l-i-1];
		arr1[l-i-1]=temp;
	}
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
void shift(char *arr,int pos){
	int i;
	for(i=pos;arr[i]!='\0';i++){
		arr[i]=arr[i+1];
	}
}
void strip_vowel(char *arr){
	int i,flag;
	for(i=0;arr[i]!='\0';i++){
		flag=0;
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
void strip_consonants(char *arr){
	int i,flag;
	for(i=0;arr[i]!='\0';i++){
		flag=0;
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
			case 'u':flag=1;break;
		}
		if(flag==0){
			shift(arr,i);
			i--;
		}
	}
}
int main(){
	char arr1[60],arr2[30];
	read(arr1);
	print(arr1);
	printf("\n");
	copy(arr1,arr2);
	strip_vowel(arr1);
	reverse(arr1);
	strip_consonants(arr2);
	concat(arr2,arr1);
	print(arr1);
	printf("\n");
	printf("%d",len(arr1));
	return 0;
}