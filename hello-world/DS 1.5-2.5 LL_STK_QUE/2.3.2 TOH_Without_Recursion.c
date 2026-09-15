#include <stdio.h>
#include <math.h>

int main() {
    int n = 3;   // number of disks
    int moves = pow(2, n) - 1;  // total moves = 2^n - 1

    char src = 'A', aux = 'B', dest = 'C';

    // For even number of disks, swap auxiliary and destination
    if (n % 2 == 0) {
        char temp = dest;
        dest = aux;
        aux = temp;
    }

    for (int i = 1; i <= moves; i++) {
        if (i % 3 == 1)
            printf("Move disk between %c and %c\n", src, dest);
        else if (i % 3 == 2)
            printf("Move disk between %c and %c\n", src, aux);
        else
            printf("Move disk between %c and %c\n", aux, dest);
    }

    return 0;
}

