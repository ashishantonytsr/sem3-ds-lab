## Implement queue using array
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **create queue Q using array with size, SIZE**\
*Step 03* : **initialize FRONT & REAR as -1**\
*Step 04* : **For insertion (ENQUEUE)**\
&emsp; *Step 4.1* : **if REAR < SIZE-1**\
&emsp;&emsp; *Step 4.1.1* : **read item to be inserted as ITEM**\
&emsp;&emsp; *Step 4.1.2* : **if FRONT is -1, increment FRONT by 1**\
&emsp;&emsp; *Step 4.1.3* : **increment REAR by 1**\
&emsp;&emsp; *Step 4.1.4* : **set Q[REAR] as ITEM**\
&emsp; *Step 4.2* : **else, print "Queue Overflow"**\
*Step 05* : **For deletion (DEQUEUE)**\
&emsp; *Step 5.1* : **if FRONT is -1 or FRONT > REAR,**\
&emsp;&emsp; *Step 5.1.1* : **print "Queue Underflow"**\
&emsp; *Step 5.2* : **else,**\
&emsp;&emsp; *Step 5.2.1* : **print Q[FRONT] as deleted item**\
&emsp;&emsp; *Step 5.2.2* : **increment FRONT by 1**\
*Step 06* : **To display queue**\
&emsp; *Step 6.1* : **if FRONT is -1 or FRONT>REAR,**\
&emsp;&emsp; *Step 6.1.1* : **print "Queue is empty", exit**\
&emsp; *Step 6.2* : **set I=FRONT**\
&emsp; *Step 6.3* : **while I<=REAR, repeat steps 6.3.1 & 6.3.2**\
&emsp;&emsp; *Step 6.3.1* : **print Q[I]**\
&emsp;&emsp; *Step 6.3.2* : **increment I by 1**\
*Step 07* : **Stop**