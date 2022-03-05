%%
\n {return EOL;}
 /* comments */
\/\*(\/?([^\*\/]|\n)*\*?([^\*\/]|\n)+\/?)**\*\/ {return COMMENT;}
 /* special symbols */
\+ {return ADD;}
\- {return SUB;}
\* {return MUL;}
\/ {return DIV;}
\< {return LT;}
\<= {return LTE;}
\> {return GT;}
\>= {return GTE;}
== {return EQ;}
!= {return NEQ;}
= {return ASSIN;}
; {return SEMICOLON;}
, {return COMMA;}
\( {return LPARENTHESE;}
\) {return RPARENTHESE;}
\[ {return LBRACKET;}
\] {return RBRACKET;}
\{ {return LBRACE;}
\} {return RBRACE;}
\[\] {return ARRAY;}
 /* keywords */
else {return ELSE;}
if {return IF;}
int {return INT;}
return {return RETURN;}
void {return VOID;}
while {return WHILE;}
 /* identifiers and numbers */
 /*{LETTERS} {return LETTER;}*/
{ID} {return IDENTIFIER;}
 /*{NUM} {yylval.intValue = atoi(yytext); return NUMBER;}*/
 {NUM} {return NUMBER;}
 /* blank, do nothing */
[ \t] {return BLANK;}
. {return ERROR;}
%%
