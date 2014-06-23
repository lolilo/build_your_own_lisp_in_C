int add_together(int x, int y){
    int result = x + y;
    return result;
}


int main(int argc, char** argv) {
    puts("Hello, world! This is my first C program!"); // puts is short for put string
    return 0; // if the C function returns zero, this indicates there have been no errors running the program
}


int added = add_together(10, 18);


// structures are used to declare new types
// represent a point in 2D space
// structure called point that packs together two float values x and y
typedef struct {
    float x; 
    float y;
} point; 

point p;
p.x = 0.1;
p.y = 10.0;

float length = sqrt(p.x * p.x + p.y * p.y); //x^2 + y^2 = z^2

// pointer to an integer
int*

// We already saw a pointer type char** argv. 
// This is a pointer to 
// pointers to characters, and is used as input to main function.

// strings represented by pointer type char*
// list of characters, final character is a special charracter called the null terminator

// Inside a conditional statement's parenthesis any value that is not 0 will evaluate to true. (!!!) Implicit check.

if (x > 10 && x < 100){
    puts("x is greater than ten and less than one hundred!");
} else {
    pus("x is either less than eleven or greater than ninety-nine!")
}

int i = 10;
while (i > 0) {
    puts("Loop Iteration");
    i = i - 1;
}

for (int i = 0; i < 10; i++){
    puts("Loop Iteration");
}
