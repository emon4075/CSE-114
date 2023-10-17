// Case Conversion
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') // if(isupper(ch))
    {
        printf("After Conversion: %c", toupper(ch));
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("After Conversion: %c", tolower(ch));
    }

    return 0;
}