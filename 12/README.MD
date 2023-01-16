## Convert infix expression to postfix 
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **read infix expression**\
*Step 03* : **repeat steps 4 to 7 until the end of the infix expression**\
*Step 04* : **if charector is operand, print charector**\
*Step 05* : **else if charector is left parenthesis, push to stack**\
*Step 06* : **else if charector is right parenthesis,**\
&emsp; *Step 6.1* : **pop charector from stack and add it to x**\
&emsp; *Step 6.2* : **while x not equal to left parenthesis,**\
&emsp;&emsp; *Step 6.2.1* : **print x**\
&emsp;&emsp; *Step 6.2.2* : **pop charector from stack and add it to x**\
*Step 07* : **else,**\
&emsp; *Step 7.1* : **while priority of top item in stack > priority of charector,**\
&emsp;&emsp; *Step 7.1.1* : **print popped item**\
&emsp; *Step 7.2* : **push charector to stack**\
*Step 08* : **while stack is not empty,**\
&emsp; *Step 8.1* : **print popped item**\
*Step 09* : **Stop**



