#include<stdio.h>
int main() {
    char course[] ="CSE-101";
    const char *university = "DUET";
    course[0] = 'E';
    printf("Updated COURSE  : %s\n", course);
    printf("Univesity       : %s\n", university);
    return 0;
}