%{
int c=0;
int flag=0;
%}
%%
"if(" {flag=1;}
")" {if(flag==1) c++; flag=0;}
%%
main(int argc, char * argv[])
{
if(argc==2)
yyin=fopen(argv[1],"r");
yylex();
printf("Count=%d\n",c);
}
