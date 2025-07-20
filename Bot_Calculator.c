/*code unfinished, ultra beginner
level
include standard input output 
for user input or output */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>                           >

//int main is the main function

int main() {

//to store a variable if i enter 
//Calculate command
int prix;

char hacker_input[50];                         >
char commands[10] = "Calculate";
char add_command[10] = "add";


printf("Cindy GLAM, entrez une commande: ");
fgets(hacker_input, sizeof(hacker_input), stdin>
hacker_input[strcspn(hacker_input, "\n")] = 0; >

if (strcmp(hacker_input, commands) == 0) {     >
printf("Entrez les digits que vous voulez calcu>
}


return 0;
}
