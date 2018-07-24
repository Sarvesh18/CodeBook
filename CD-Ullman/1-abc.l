%{
int ip=0, in=0, fp=0, fn=0; 
%}
%%
\+?[0-9]+ {ip++;}
\-[0-9]+ {in++;}
[0-9]*\.[0-9]+ {fp++;}
\-[0-9]*\.[0-9]+ {fn++;}
[\n] {printf("Integer+:%d\nInteger-:%d\nFlaot+:%d\nFloat-:%d",ip,in,fp,fn);}
%%
main()
{
printf("Enter Input:");
yylex();
}
