#include <stdio.h>
#include <stdbool.h>

int main(){

    //You must declare a variable before you initialize it.
    /*format specifiers % = defines and formats a type of data to be displayed
    You can set to what decimal you want your value diplayed by adding a ".decimal value" after the %
    eg %.2 or %.3
    You can also use format specifiers for alignment eg "%4" means align to the right 4 width and 
    "%-6" means align to left 6 width
    */


    char school [] = "ALX";
    char grade = 'A';
    int score = 100;
    float gpa = 9.9;
    short int marks = 987;
    char num = 100;
    bool resp = "false";
    short int val = -2000;
    double value = 9.9999345976;
    float biscuits = 5.885;
    float cake = 80.99;
    float juice = 100.7835;

    printf("I love %s\n",school);
    printf("I just scored an %c ", grade);
    printf("and an overall score of %d\n",score);
    printf("The planet should be protected at all costs.\n");
    printf("It is a sick universe.\n");
    printf("%c\n", num);
    printf("%d\n", num);
    printf("%d\n", resp);
    printf("%d\n", val);
    printf("%lf\n", value);

    printf("%.2f\n",biscuits);
    printf("%.3f\n", biscuits);
    printf("%.1f\n", cake);
    printf("%.0f\n", juice);
    printf("%4.2f\n", cake);
    printf("%10.2f\n", biscuits);
    printf("%10.2f\n", cake);
    printf("%10.2f\n", juice);
    printf("%10d\n", marks);

    //constant = fixed value that cannot be altered by the program during its execution
    const float PI = 3.14159;

    //arithmetic operators
    /*+ (addition)
      -(subtraction)
      *(multiplication)
      /(division)
      %(modulus)
      ++ increment
      -- decrement
      */
}