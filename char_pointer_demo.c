/* Demo for understanding Problem 1(i) from the UMN CSCI 2021 Section 10 */
/* first midterm exam. Fall 2018, free to distribute. */
/* To compile: `gcc char_pointer_demo.c -o char_pointer_demo` */
/* To run (after compiled): ./char_pointer_demo */
#include <stdio.h>
#include <string.h>
int main() {
    char *x;
    x = strdup("message");
    int len = strlen(x);

    for(int i = 0; i < len; i+=1) {
      if(i == len-1 ) {
        printf("%c\n", x[i]);
      }
      else {
         printf("%c", x[i]);
      }
    }
}
