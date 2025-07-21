/*code unfinished, ultra beginner
level
include standard input output
for user input or output */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//int main is the main function

int main() {

//to store a variable if i enter
//Calculate command
int prix;

char user_input[50];
char commands[10] = "Calculate";
char add_command[10] = "add";


printf("Cindy GLAM, entrez une commande: ");
fgets(user_input, sizeof(user_input), stdin);
user_input[strcspn(user_input, "\n")] = 0;

if (strcmp(user_input, commands) == 0) {
printf("Entrez les digits que vous voulez calculer: ");
}


return 0;
}
