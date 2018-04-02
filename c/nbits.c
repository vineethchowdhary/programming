#include <stdio.h>

/* This program counts
*  number of 1's in a binary number
*/

int main(){

	int i=7,count=0;

	printf("value: %d\n",i);

	while(i){
		count += i&1;
		i >>= 1;
	}

	printf("Number of 1's:%d\n",count);

	return 0;

}

/* There are multiple ways to count
number of 1's in a binary number

1. while loop and shift
2. n &= n-1 ( remove last one at a time )
3. Split into 4, kind of hasing technique.

*/ 
