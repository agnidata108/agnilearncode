#include <stdio.h>

void move(int n, char A, char B, char C);

int main()
{
int n; 	                                                      /* Number of disks */
scanf ("%d", &n);
move (n, 'A','B', 'C');
return 0;
}

void move (int n, char A, char B, char C)
{
	if (n > 0) 
	{
		move (n-1, A, C, B);
		printf ("Move disk %d from %c to %c \n", n, A, C);
		move (n-1, B, A,C );
}
}
