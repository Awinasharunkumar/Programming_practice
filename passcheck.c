#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>
#include<unistd.h>

int check_pass(char *pass);			//Function Prototype 

int main(){
	char *pass;
	//printf("Enter the password: ");
	pass = getpass("Enter the pass: ");

	int s=check_pass(pass);
	switch (s){
		case 0:
			printf("weakest\n");
			break;
		case 1:
		case 2:
			printf("weak\n");
			break;
		case 3:
		case 4:
			printf("average\n");
			break;
		case 5:
		case 6:
			printf("medium\n");
			break;
		case 7:
		case 8:
			printf("strong\n");
			break;
		case 9:
			printf("strongest\n");
	}

	return 0;
}

/*
function checks the password strength and return as
 0-9 value
*/
int check_pass(char *pass){
	int low=0,score=0,ind=0,num=0;
	char number[10];
	bool up = false,sym = false;
	if(strlen(pass)<8){
		return 0;
	}
	for(int i=0;i<strlen(pass);i++){
		if(isupper(pass[i])){
			up = true;
		}
		else if(!isalnum(pass[i])){
			sym=true;
		}
		else if(islower(pass[i])){
			low+=1;
		}
		else if(isdigit(pass[i])){
			number[ind++] = pass[i];
			num+=1;
		}
	}
	if(up){
		score+=2;
	}
	if(sym){
		score+=2;
	}
	if(low>2){
		score+=2;
	}
	if(num>2){
		score+=1;
		int diff=0;
		for(int j=0;j<ind;j++){
			if((number[j])!=(number[j+1]+1)){
				diff+=1;
			}
		}
		if(diff == ind){
			score+=2;
		}
	}
	else{
		return 0;
	}

	return score;
}
