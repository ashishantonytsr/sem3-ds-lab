## Creation of singly linked list
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **create a self referential structure for the node with members :**\
&emsp;&emsp;&emsp;&emsp; **integer DATA and a pointer NEXT pointing to the same structure**\
*Step 03* : **create a node pointer HEAD and set as NULL**\
*Step 04* : **For inserting node at the front of the list**\
&emsp; *Step 4.1* : **read the item to be inserted as ITEM**\
&emsp; *Step 4.2* : **create node NEW_NODE and allocate memory for the node**\
&emsp; *Step 4.3* : **set NEW_NODE->DATA as ITEM**\
&emsp; *Step 4.4* : **set NEW_NODE->NEXT as HEAD**\
&emsp; *Step 4.5* : **set HEAD as NEW_NODE**\
&emsp; *Step 4.6* : **return HEAD**\
*Step 05* : **For printing the linked list**\
&emsp; *Step 5.1* : **create node TEMP and assign HEAD to it**\
&emsp; *Step 5.2* : **while TEMP is not NULL, repeat steps 5.3 & 5.4**\
&emsp; *Step 5.3* : **print TEMP->DATA**\
&emsp; *Step 5.4* : **set TEMP as TEMP->NEXT**\
&emsp; *Step 5.5* : **return**\
*Step 06* : **Stop**