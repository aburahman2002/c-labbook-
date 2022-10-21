#include<ctype.h>
#include<stdio.h>
int main()
{
    char ch;
    int lowercasevowel,uppercasevowel;
    printf("Enter a character :\n");
    scanf("%c",&ch);

    lowercasevowel=(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u');
    uppercasevowel=(ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U');
    if(!isalpha(ch))
        printf("character not recognized");
    else if(lowercasevowel||uppercasevowel)
        printf("%c is a vowel",ch);
    else
        printf("%c is a consonant");

        return 0;

}
