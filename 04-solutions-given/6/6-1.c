//
//   Exercise 6-1
//
#include <stdio.h>

#define ALPHA 1

int alphacheck(char s[])
{
     int i;
     
     for (i = 0; s[i] != '\0'; i++)
     {
          if(s[i] >='A' && s[i] <= 'Z')
               continue;
          else if (s[i] >= 'a' && s[i] <= 'z')
               continue;
          else
               return(0);
     }         
     return(ALPHA);
}

main()
{
    int result;
    char input[20];
    int i;
    for ( i = 0; i < 5; i++)
    {
	    printf("Enter string # %d: ", i + 1);
	    gets(input);
	    result = alphacheck(input);
	    if (result == ALPHA)
		printf("All alpha characters\n");
	    else
		printf("One or more characters is NOT alpha\n");
     }
}
