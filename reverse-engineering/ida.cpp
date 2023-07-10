#include <stdio.h>
int getPass(char *buffer)
{
    int i;
    char password[64] = "password";

    for(i = 0; i < 64; i++)
    {
        if(buffer[i] != password[i])
            return 0;
    }

    return 1;
}

int main(int argc, char **argv)
{
    char buffer[64];

    printf("Welcome to your first crackme problem!\n");
    printf("What is the password?: ");
    scanf("%64s", buffer);

    if(getPass(buffer))
        printf("You got it!\n");
    else
        printf("Nope, try again!\n");
}