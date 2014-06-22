#include <stdio.h>

// stdio.h is the standard input and output library included with C
// the puts function is in this library

// declare a function main
// declared to output an int and take as input an int and a char**
// All C programs must contain this function. 
// All programs start running from this function.
int main(int argc, char** argv) {
    puts("Hello, world!"); // puts is short for put string
    return 0; // if the C function returns zero, this indicates there have been no errors running the program
}


// Before we can run this program we need to compile it. This will produce the actual executable we can run on our computer. Open up the command line and browse to the directory that hello_world.c is saved in. You can then compile your program using the following command.

// cc -std=c99 -Wall hello_world.c -o hello_world
// This compiles the code in hello_world.c, reporting any warnings, and outputs the program to a new file called hello_world. We use the -std=c99 flag to tell the compiler which version or standard of C we are programming with. This lets the compiler ensure our code is standardized, so that people with different operating systems or compilers will be able to use our code.

// If successful you should see the output file in the current directory. This can be run by typing ./hello_world (or just hello_world on Windows). If everything is correct you should see a friendly Hello, world! message appear.

// Congratulations! You've just compiled and run your first C program.
