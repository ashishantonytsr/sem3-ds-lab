## Reverse of a string using pointer
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **declare arrays str, rev & pointers strptr, revptr**\
*Step 03* : **assign \*strptr = str and \*revptr = rev**\
*Step 04* : **read the string as str**\
*Step 05* : **set i = -1**\
*Step 06* : **while \*strptr not equal to NULL**\
&emsp; *Step 6.1* : **increment strptr by  1**\
&emsp; *Step 6.2* : **increment i by 1**\
*Step 07* : **while i>=0**\
&emsp; *Step 7.1* : **decrement strptr by 1**\
&emsp; *Step 7.2* : **set \*revptr = \*strptr**\
&emsp; *Step 7.3* : **increment revptr by 1**\
&emsp; *Step 7.4* : **decrement i by 1**\
*Step 08* : **print rev as reversed string**\
*Step 09* : **Stop**