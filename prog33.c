#include <stdio.h>

int main() {
    int mark;

    printf("Enter the student's mark: ");
    scanf("%d", &mark);

    if (mark >= 40)
        printf("Pass\n");
    else
        printf("Fail\n");

    return 0;
}
