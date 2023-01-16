## Search a element in Binary Search Tree
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **Create self referential structure node with members :**\
&emsp;&emsp;&emsp;&emsp; **integer DATA & pointers LEFT & RIGHT, pointing to nodes with same structure**\
*Step 03* : **Read values into the Binary Search Tree with root, ROOT**\
*Step 04* : **Read the item to be searched as ITEM**\
*Step 05* : **if ROOT is NULL, print "Not Found", goto step  9**\
*Step 06* : **if ROOT->DATA is equal to ITEM, print "Item Found", goto step 9**\
*Step 07* : **else if ITEM < ROOT->DATA,**\
&emsp; *Step 7.1* : **Set ROOT as ROOT->LEFT, goto step 5**\
*Step 08* : **else ,**\
&emsp; *Step 8.1* : **Set ROOT as ROOT->RIGHT, goto step 5**\
*Step 09* : **Stop**