#include<string.h>
#include<stdio.h>

int main()
{
    char qtr[1000]= "c int (a+b=9); for"; //a string to analyze
    char* token;
    char* rest = qtr;
    char str[1000]=" "; //initialization of a string
     int i=0;

    while (token = strtok_r(rest, " ", &rest))  // strtok_r is used to split the sentence into a word
    {
        // after dividing the sentence into words, if statement is used to compare the words
        if(strcmp(token,"for")==0 || strcmp(token,"int")==0 || strcmp("static",str)==0||strcmp("while",str)==0||strcmp("do",str)==0||strcmp("if",str )==0||strcmp("float",str)==0||strcmp("char",str)==0||strcmp("double",str)==0||strcmp("case",str)==0||strcmp("switch",str)==0||strcmp("else",str)==0 || strcmp("main",str)==0||strcmp("void",str)==0||strcmp("default",str)==0||strcmp("strtok_r",str)==0||strcmp("continue",str)==0)
            printf("%s is a keyword.\n", token);
        else // else statement is used to make a string str(which is initialized before) devoid of keywords using strcat()
           {
                strcat(str,token);
                while(i<strlen(str)) //while statement checks every character
                {
                    if (str[i]==',' || str[i]==';' || str[i]==':')
                       printf("%c is separator\n",str[i]);
                    else if (str[i]=='(' || str[i]==')' || str[i]=='{' || str[i]=='}' || str[i]=='[' || str[i]==']')
                       printf("%c is bracket\n",str[i]);
                    else if (isdigit(str[i]) != 0)
                       printf("%c is digit\n",str[i]);

                    else if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||  str[i] == '/' || str[i] == '>' || str[i] == '<' ||  str[i] == '=')
                       printf("%c is operator\n",str[i]);

                    else if (isalpha(str[i]) != 0)
                       printf("%c is a variable\n",str[i]);
                    i++;
                }

           }
    }

    return (0);
}
