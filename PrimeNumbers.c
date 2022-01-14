#include<stdio.h>
// for H. Ýlyas
main(){
	int i=2, n=2; // initial value assignment
    
    while(n<=100){
		     while(i<=n/2){
				if(n%i == 0){
					//printf("it is not a prime number\n");
					break;
				}  
			  i++;		 
		      }
		      
		   if(i==(n/2)+1)
		        printf("%d\t", n);
	n++;
	i=2;			 
	}	  
}

