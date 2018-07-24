%{
int c=0;
int flag=0;
int check=0;
%}
%%
[a-z|A-Z]/[a-z|A-Z|0-9]*"=" {flag=1;}
[a-z|A-Z]/[a-z|A-Z|0-9]*[+|-|*|/] {check=1;}
[a-z|A-Z]/[a-z|A-Z|0-9]*";" {if(flag==1&&check==1) c++; check=0; flag=0;}
%%
main(int argc, char * argv[])
{
if(argc==2)
yyin=fopen(argv[1],"r");
yylex();
printf("Count=%d\n",c);
}
