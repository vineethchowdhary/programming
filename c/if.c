#include <stdio.h>

//This program demonstrates possible
// combinations of if.

int main() {

	if(1)
		printf("1\n");

	if(0)
		printf("0\n");

	if(-1)
		printf("-1\n");

	if(!1)
		printf("!1\n");

	if(!0)
		printf("!0\n");

	if(! -1)
		printf("!-1\n");


	return 0;
}

/* The result is 
1
-1
!0
*/
