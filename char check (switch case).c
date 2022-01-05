#include<stdio.h>
main()
{
	char s;
     printf("enter a character :");
     scanf("%c",&s);
     switch(s)
     {
     	case 'a':
     	case 'e':
     	case 'i':
     	case 'o':
     	case 'u':
     	case 'A':
     	case 'E':
     	case 'I':
     	case 'O':
     	case 'U':
     	printf("it is a vowel");
     	break;
     	default:
     	printf("it is a consonant");
     	
	 }
}
