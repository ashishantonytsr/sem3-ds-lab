## Creation of doubly linked list
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **create a self referential structure for the node with members :**\
&emsp;&emsp;&emsp;&emsp; **integer DATA and a pointer NEXT pointing to the same structure**\
*Step 03* : **create node pointers HEAD, LAST and set both as NULL**\
*Step 04* : **To insert first node,**\
&emsp; *Step 4.1* : **if HEAD is not NULL**\
&emsp; *Step 4.2* : **read item to be inserted as ITEM**\
&emsp; *Step 4.3* : **set HEAD->DATA as ITEM**\
&emsp; *Step 4.4* : **set HEAD->PREV and HEAD->NEXT as NULL**\
&emsp; *Step 4.5* : **set LAST as HEAD**\
*Step 05* : **To insert rest of the nodes,**\
&emsp; *Step 5.1* : **read item to be inserted as ITEM**\
&emsp; *Step 5.2* : **create node NEW_NODE as allocate memory**\
&emsp; *Step 5.3* : **if NEW_NODE is not NULL,**\
&emsp;&emsp; *Step 5.3.1* : **set NEW_NODE->DATA as DATA**\
&emsp;&emsp; *Step 5.3.2* : **set NEW_NODE->PREV as LAST**\
&emsp;&emsp; *Step 5.3.3* : **set NEW_NODE->NEXT as NULL**\
&emsp;&emsp; *Step 5.3.4* : **set LAST->NEXT as NEW_NODE**\
&emsp;&emsp; *Step 5.3.5* : **set LAST as NEW_NODE**\
*Step 06* : **To print the linked list from first**\
&emsp; *Step 6.1* : **if HEAD is NULL, exit**\
&emsp; *Step 6.2* : **create node TEMP and assign HEAD to it**\
&emsp; *Step 6.3* : **while TEMP is not NULL, repeat steps 6.4 & 6.5**\
&emsp; *Step 6.4* : **print TEMP->DATA**\
&emsp; *Step 6.5* : **set TEMP as TEMP->NEXT**\
*Step 07* : **To print the linked list from last**\
&emsp; *Step 7.1* : **if HEAD is NULL, exit**\
&emsp; *Step 7.2* : **create node TEMP and assign LAST to it**\
&emsp; *Step 7.3* : **while TEMP is not NULL, repeat steps 7.4 & 7.5**\
&emsp; *Step 7.4* : **print TEMP->DATA**\
&emsp; *Step 7.5* : **set TEMP as TEMP->PREV**\
*Step 08* : **Stop**