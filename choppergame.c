#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,c,h[8][8],*lr,*lc,rw,cl,k,count = 0;
	for(i=0;i<8;i++){										// this loop use for set 8x8 matrics all as 0
		for(j=0;j<8;j++){
			h[i][j]=0;
		}
	} 
	printf("Enter how many chopper want to be land :");
	scanf("%d",&c);											// geetting input from user how many chopper want to land
	lr = (int*)malloc(sizeof(int)*c);
	lc = (int*)malloc(sizeof(int)*c);
	for(i=0;i<c;i++){										// loop for getting chopper place want to land like 2,3
		printf("Enter the placing of the %dst chooper(eg:2,3) :",i+1);
		scanf("%d,%d",&lr[i],&lc[i]);
	}
	for(i=0;i<c;i++){							// loop for change the rows and column to change as 0
		rw=lr[i]-1;
		cl=lc[i]-1;
		for(j=0;j<8;j++){   					// for fixed row
			if(h[rw][j]==0){
				h[rw][j]=1;
			}
		}
		for(k=0;k<8;k++){     					// for fixed column
			if(h[k][cl]==0){
				h[k][cl]=1;
			}
		}
	}

	for(i=0;i<8;i++){							// loop for counts the 1 in the matrix 
		for(j=0;j<8;j++){
			if(h[i][j] == 1){
				count++;
			}
		}
	}
	printf("The saved hostage count is %d\n",count);	// print the output


// This use to print the 0/1  in the matrix

/*	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			printf("%d  ",h[i][j]);
		}
		printf("\n");
	}*/
	



	free(lr);				// freeup the memory allocation
	free(lc);				// freeup the memory allocation
	return 0;
}
