%{
int p=0,s=0;
%}
%%
"printf" {p++;}
"scanf" {s++;}
%%
main(int argc, char * argv[])
{
if(argc==2)
yyin=fopen(argv[1],"r");
yylex();
printf("Printf=%d\tScanf=%d\n",p,s);
}
