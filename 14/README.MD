## Implement queue using linked list
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **create a self referential structure for the node with members :**\
&emsp; **integer DATA and a pointer NEXT pointing to the same structure**\
*Step 03* : **create a node pointer FRONT, REAR and set as NULL**\
*Step 04* : **For insertion (ENQUEUE)**\
&emsp; *Step 4.1* : **read item to be inserted as ITEM**\
&emsp; *Step 4.2* : **create node NEW_NODE & allocate memory**\
&emsp; *Step 4.3* : **set NEW_NODE->DATA as ITEM & NEW_NODE->NEXT as NULL**\
&emsp; *Step 4.4* : **if REAR is NULL, set FRONT & REAR as NEW_NODE**\
&emsp; *Step 4.5* : **else,**\
&emsp;&emsp; *Step 4.5.1* : **set REAR->NEXT as NEW_NODE**\
&emsp;&emsp; *Step 4.5.2* : **set REAR as NEW_NODE**\
&emsp; *Step 4.6* : **exit**\
*Step 05* : **For deletion (DEQUEUE)**\
&emsp; *Step 5.1* : **if FRONT is NULL, print "Queue Underflow", exit**\
&emsp; *Step 5.2* : **else, print FRONT->DATA as deleted item**\
&emsp; *Step 5.3* : **if FRONT equals to REAR, set FRONT & REAR as NULL**\
&emsp; *Step 5.4* : **else, FRONT as FRONT->NEXT**\
*Step 06* : **To display items in queue**\
&emsp; *Step 6.1* : **if FRONT is NULL, print "Queue is empty"**\
&emsp; *Step 6.2* : **else,**\
&emsp;&emsp; *Step 6.3.1* : **create node ITER & assign FRONT to it**\
&emsp;&emsp; *Step 6.3.2* : **while ITER is not NULL, repeat steps 6.2.3 & 6.2.4**\
&emsp;&emsp; *Step 6.3.3* : **print ITER->DATA**\
&emsp;&emsp; *Step 6.3.4* : **set ITER as ITER->NEXT**\
&emsp; *Step 6.3* : **exit**\
*Step 07* : **Stop**