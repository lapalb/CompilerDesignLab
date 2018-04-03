### Assignemnt 3
1. Design a machine that will recognize numbers between 0-999. For example: "Two hundred thirty nine" is a correct form of 239 in words.  It should also detect an incorrect input "Twelve hundred twenty two."
 
1. Design an application using FLEX and BISON that will do the following
   - [ ] check the correctness of a Boolean expression,
   - [ ] express it in standard Sum of Product form, and
   - [ ] convert the Sum of Product representation to standard Product of Sum form.
```
Example1
      Input: 
      F(x,y) = x'.y+x.y'
      Output:
      The given expression is correct.
      Sum of Product: x'.y+x.y'
      Product of sum: (x+y).(x'+y')

Example2
     Input:
     F(x,y) = x.y +      
     Output:
     Error 1: Incomplete expression, operand missing at x.y + 

Symbols:
[a-z] as boolean variables.
operators
'         complement 
+         or 
.         and
other symbols
(         left parenthesis
)          right parenthesis
F(...)     function with list of variables
=          assignment
```
