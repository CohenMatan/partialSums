#include <stdio.h>
#include <stdlib.h>

/* The partialSums function calculate the numbers in the array one by one */

int * partialSums(int *p,int num){
	int *q;
	int k=0;
	q=(int *)malloc(num*sizeof(int)); 
	if(!q){ /* Checking if the memory allocation of the pointer faild */
		printf("Memory allocation failed");
		exit(0);
	}	
	while(k != num){
		if(k==0){
			q[k]=p[k];
			k++;
		}
		else{
			q[k]=q[k-1]+p[k];
			k++;
		}
	}
	return q;
}
int main(){
	int num;
	int *p,*r;
	int i=0;
	printf("Please insert how many numbers you intrest to enter: \n");
	scanf("%d",&num);
	p=(int *)malloc(num*sizeof(int));
	if(!p){
		printf("Memory allocation failed");
		exit(0);
	}
	r=(int *)malloc(num*sizeof(int));
	if(!p){
		printf("Memory allocation failed");
		exit(0);
	}
	printf("Please insert the numbers: \n");
	while (i != num){
		scanf("%d",&*(p+i));
		i++;
	}
	printf("You inserted %d numbers. And the numbers are: \n",num);
	for(i=0;i<num;i++){
		printf("%d ",*(p+i));
	}
	printf("\nAfter caclculating: \n");
	r=partialSums(p,num);
	for(i=0;i<num;i++){
		printf("%d ",r[i]);
	}
	free(p); /*relaseing the memory that pointer take's */
	free(r); /*relaseing the memory that pointer take's */
	return 0;	
}







