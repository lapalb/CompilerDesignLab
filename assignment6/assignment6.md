### Assignment 6.1
---

1. Consider the following grammar rules:
    1. E->E+T|T, 
    1. T->T*F|F, 
    1. F->(E)|id  where E,T and F are non-terminals and +,*,(,),id are terminals (tokens).
```    
Design a shift-reduce parserfor it.
Design a operator precedence parser with the help of the following operator-precedence,table
      + * ( ) id $
    + > < < > <  >
    * > > < > <  >
    ( < < < = <  -
    ) > > - > -  >
   id > > - > -  >
    $ < < < - <  -
Give traces for the following input strings 
   (i)  id+id*(id+id)$
   (ii) id*(id+$
   A trace should show each steps of parsing including shift, reduce, accept and error operations.
    
Trace format
Stack Remaing i/p string  Actions 
----------------------------------
$     id+id*(id+id)$      Shift id
$id +id*(id+id)$   Reduce by F->id
(d) Find the number of times
    the stack and the input string     is scanned.

// Answer
S: BOF E EOF
E: I <-> E      (equivalence)
E: I
I: C
I: C -> I       (implication)
C: D
C: D v C        (or)
D: N
D: N ^ D        (and)
N: ~N           (negation)
N: G
G: ( E )
G: atom
```
### Assignment 6.2 
---

1. Write a C program to **eliminate left recursion and left factoring** in a given grammar.
1. Write a C program to **compute FIRST and FOLLOW sets for a given grammar, and check whether the grammar is LL(1).**
