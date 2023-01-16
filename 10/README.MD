## Implement stack using array
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **create stack STACK using array with size, SIZE**\
*Step 03* : **initialize TOP as -1**\
*Step 04* : **For insertion (PUSH)**\
&emsp; *Step 4.1* : **if TOP < SIZE-1**\
&emsp;&emsp; *Step 4.1.1* : **read item to be inserted as ITEM**\
&emsp;&emsp; *Step 4.1.2* : **increment TOP by 1**\
&emsp;&emsp; *Step 4.1.3* : **set STACK[TOP] as ITEM**\
&emsp; *Step 4.2* : **else, print "Stack Overflow"**\
*Step 05* : **For deletion (POP)**\
&emsp; *Step 5.1* : **if TOP not equal to -1**\
&emsp;&emsp; *Step 5.1.1* : **return STACK[TOP] and decrement TOP by 1**\
&emsp; *Step 5.2* : **else, print "Stack Underflow"**\
*Step 06* : **To print stack**\
&emsp; *Step 6.1* : **set I=TOP**\
&emsp; *Step 6.2* : **while I&ge;0**\
&emsp;&emsp; *Step 6.2.1* : **print STACK[I]**\
&emsp;&emsp; *Step 6.2.2* : **decrement I by 1**\
*Step 07* : **Stop**