## Delete node from singly linked list
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
*Step 05* : **For printing the linked list**\
&emsp; *Step 5.1* : **create node TEMP and assign HEAD to it**\
&emsp; *Step 5.2* : **while TEMP is not NULL, repeat steps 5.3 & 5.4**\
&emsp; *Step 5.3* : **print TEMP->DATA**\
&emsp; *Step 5.4* : **set TEMP as TEMP->NEXT**\
*Step 06* : **For deleting a node**\
&emsp; *Step 6.1* : **if HEAD is NULL, exit**\
&emsp; *Step 6.2* : **create node TEMP**\
&emsp; *Step 6.3* : **if HEAD->DATA is ITEM,**\
&emsp;&emsp; *Step 6.3.1* : **set TEMP as HEAD**\
&emsp;&emsp; *Step 6.3.2* : **set HEAD as HEAD->NEXT**\
&emsp;&emsp; *Step 6.3.3* : **free memory allocated for TEMP**\
&emsp;&emsp; *Step 6.3.4* : **exit**\
&emsp; *Step 6.4* : **create node ITER and assign HEAD to it**\
&emsp; *Step 6.5* : **while ITER->NEXT->DATA not equal to ITEM, repeat step 6.5.1**\
&emsp;&emsp; *Step 6.5.1* : **set ITER as ITER->NEXT**\
&emsp; *Step 6.6* : **if ITER->NEXT is not NULL**\
&emsp;&emsp; *Step 6.6.1* : **set TEMP as ITER->NEXT**\
&emsp;&emsp; *Step 6.6.2* : **set ITER->NEXT as ITER->NEXT->NEXT**\
&emsp;&emsp; *Step 6.6.3* : **free memory allocated for TEMP**\
&emsp; *Step 6.7* : **else, print "ITEM not found"**\
*Step 07* : **Stop**