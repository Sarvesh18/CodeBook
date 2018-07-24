%{
int c=0;
int flag=0;
%}
%%
"int"|"float"|"char" {flag=1;}
";" {flag=0;}
[A-Za-z]* {if(flag==1) { c++;} }
%%
main(int argc, char * argv[])
{
if(argc==2)
yyin=fopen(argv[1],"r");
yylex();
printf("Count=%d\n",c);
}
