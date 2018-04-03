%%

[1-9][0-9]* {printf("Unsigned Decimel");}
[-][1-9][0-9]* {printf("signed Decimel");}


[0-1]* {printf("binary");}

[0][0-7]* {printf("Octal Number");}
-[0][0-7]* {printf("Signed Octal Number");}

[0][x|X][0-9A-F]* {printf("Hexadecimel");}
-[0][x|X][0-9A-F]* {printf("Hexadecimel");}
.* {printf("Not a valid number");}
%%
