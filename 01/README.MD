## Reverse of a string using pointer
---
### Algorithm

*Step 1* : **Start**\
*Step 2* : **Declare arrays str, rev & pointers strptr, revptr**\
*Step 3* : **Assign \*strptr = str and \*revptr = rev**\
*Step 4* : **Read the string as str**\
*Step 5* : **Set i = -1**\
*Step 6* : **While \*strptr not equal to NULL**\
&emsp; *Step 6.1* : **Increment strptr by  1**\
&emsp; *Step 6.2* : **Increment i by 1**\
*Step 7* : **While i>=0**\
&emsp; *Step 7.1* : **Decrement strptr by 1**\
&emsp; *Step 7.2* : **Set \*revptr = \*strptr**\
&emsp; *Step 7.3* : **Increment revptr by 1**\
&emsp; *Step 7.4* : **Decrement i by 1**\
*Step 8* : **Print rev as reversed string**\
*Step 9* : **Stop**\