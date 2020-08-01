#include<stdio.h>

/*This problem was asked by Microsoft.
Compute the running median of a sequence of numbers. That is, given a stream of numbers, print out the median of the list so far on each new element.
Recall that the median of an even-numbered list is the average of the two middle numbers.
For example, given the sequence [2, 1, 5, 7, 2, 0, 5], your algorithm should print out:
2
1.5
2
3.5
2
2
2
*/

int main(){
	
	int n;
	printf("Enter size of sequence:");
	scanf("%d",&n);
	int array[n];
	printf("Enter a sequence of numbers:");
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	
	
	
	for(i=0;i<n;i++){
		if(i==0){
			printf("\n[");
		}
		printf("%d",array[i]);
		if(i<n-1){
			printf(",");
		}
		if(i==n-1){
			printf("]");
		}
	}
	
	float median[n];
	median[0]=array[0]*1.0;
	int a=1;
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(array[i]<array[j]){
				int temp=array[i];
				array[i]=array[j];
				array[j]=temp;
				
			}
		}
		if(i%2==0){
					median[a]=array[i/2]*1.0;
					a++;
				}
				if(i%2!=0){
					int b=(i-1)/2;
					int c=b+1;
					median[a]=(array[b]+array[c])/2.0;
					a++;
				}
	
	}
	
	
	for(i=0;i<n;i++){
		if(i==0){
			printf("\nMedians:\n");
		}
		printf("%.1f\n",median[i]);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
