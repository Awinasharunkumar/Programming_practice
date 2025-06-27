#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	/*char a;
	while(1){
		scanf("%c",&a);
		if(a == '\n'){
			break;
		}
		printf("the asci value of %c is %d\n",a,a);
	}*/
	char b[100],*p;
	printf("enter the string: ");
	scanf("%s",&b[0]);
	p=(char*)malloc(sizeof(char)*(strlen(b)));
	strcpy(p,b);
	//printf("The length of b is: %ld\n",strlen(b));
	//printf("The length of p is: %ld\n",strlen(p));
	//printf("The value in p[0] is: %c\n",p[0]);
	for(int i=0;i<=strlen(p);i++){
		if(isupper(p[i])){
			p[i] = tolower(p[i]);
		}
		else{
			p[i] = toupper(p[i]);
		}
	}
	for(int j = 0;j <= strlen(p); j++){
		printf("%c",p[j]);
	}
	free(p);
	return 0;
}
