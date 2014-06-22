# include <stdio.h>

// http://www.thegeekstuff.com/2010/03/debug-c-program-using-gdb/

// cc -g factorial.c
// gdb a.out
// break


// gdb command shortcuts

// Use following shortcuts for most of the frequent gdb operations.

// l – list
// p – print
// c – continue
// s – step
// ENTER: pressing enter key would execute the previously executed command again.

int main()
{
    int i, num, j;
    j = 1;
    printf ("Enter the number: ");
    scanf ("%d", &num );

    for (i=1; i<=num; i++)
        j=j*i;

    printf("The factorial of %d is %d\n", num, j);
}