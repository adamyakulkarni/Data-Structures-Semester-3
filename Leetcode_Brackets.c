#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], stack[100];
    int top = -1, i, valid = 1;

    printf("Enter the string: ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            stack[++top] = s[i];
        }
        else
        {
            if (top == -1)
            {
                valid = 0;
                break;
            }

            if ((s[i] == ')' && stack[top] == '(') ||
                (s[i] == ']' && stack[top] == '[') ||
                (s[i] == '}' && stack[top] == '{'))
            {
                top--;
            }
            else
            {
                valid = 0;
                break;
            }
        }
    }

    if (top != -1)
        valid = 0;

    if (valid)
        printf("true");
    else
        printf("false");

    return 0;
}
