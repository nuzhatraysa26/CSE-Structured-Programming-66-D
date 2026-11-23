#include <stdio.h>

int main() {
    char fName[50];
    char alphaOnly[50];
    printf("Enter Full Name: ");
    scanf(" %[^\n]", fName); 

    printf("Enter City Name : ");
    scanf(" %[A-Za-z ]", alphaOnly);

    printf("Full Name : %s\n", fName);
    printf("City Name : %s\n", alphaOnly);

    return 0;
}