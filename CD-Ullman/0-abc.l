%{
#include<stdio.h>	
int vc=0, cc=0; 
%}
%%
[aeiou] {vc++;}
[b-df-hj-np-tv-zA-Z] {cc++;}
[\n] {printf("Vowels:%d\nConsonants:%d",vc,cc);}
%%
main()
{
printf("Enter Input:");
yylex();
}
