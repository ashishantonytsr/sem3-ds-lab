## Implement stack using linked list
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **create a self referential structure for the node with members :**\
&emsp; **integer DATA and a pointer NEXT pointing to the same structure**\
*Step 03* : **create a node pointer TOP and set as NULL**\
*Step 04* : **For insertion (PUSH)**\
&emsp; *Step 4.1* : **read item to be inserted as ITEM**\
&emsp; *Step 4.2* : **create node NEW_NODE & allocate memory**\
&emsp; *Step 4.3* : **set NEW_NODE->DATA as ITEM & NEW_NODE->NEXT as TOP**\
&emsp; *Step 4.4* : **set TOP as NEW_NODE**\
*Step 05* : **For deletion (POP)**\
&emsp; *Step 5.1* : **if TOP is NULL, print "Stack Underflow", exit**\
&emsp; *Step 5.2* : **create node TEMP and assign TOP to it**\
&emsp; *Step 5.3* : **set TOP as TOP->NEXT**\
&emsp; *Step 5.4* : **return TEMP->DATA & free memory allocated for TEMP**\
*Step 06* : **To print Stack**\
&emsp; *Step 6.1* : **create node TEMP and assign TOP to it**\
&emsp; *Step 6.2* : **while TEMP is not NULL**\
&emsp;&emsp; *Step 6.2.1* : **print TEMP->DATA**\
&emsp;&emsp; *Step 6.2.2* : **set TEMP as TEMP->NEXT**\
*Step 07* : **Stop**





