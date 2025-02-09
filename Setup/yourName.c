// Write a C program that asks the user for their name and then greets them by name. For example, if the user enters "Alice", the program should print "Hello, Alice!".


#include<stdio.h>

int main(){
    // Declare a variable to store the user's name
    char name[50];// Assuming the name will be less than 50 characters

    // Ask the user for their name
    printf("What is your name ?\n");
    scanf("%s", name);// Read the user's name


    printf("Hello, %s!\n", name );// Print the greeting message


    return 0; // Return 0 to indicate that the program has run successfully

}