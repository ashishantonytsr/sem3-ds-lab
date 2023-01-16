## Search in 2D array
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **Declare 2D array as a[20][20]**\
*Step 03* : **read the rows and cols as r & c**\
*Step 04* : **set i = 0**\
*Step 05* : **while i<r, repeat step 5**\
&emsp; *Step 5.1* : **set j = 0**\
&emsp; *Step 5.2* : **while j<c,**\
&emsp;&emsp; *Step 5.2.1* : **read item a[i][j]**\
&emsp;&emsp; *Step 5.2.2* : **increment j by 1**\
&emsp; *Step 5.3* : **increment i by 1**\
*Step 06* : **read the item to be searched as item**\
*Step 07* : **set i = 0**\
*Step 08* : **while i<r, repeat step 8**\
&emsp; *Step 8.1* : **set j = 0**\
&emsp; *Step 8.2* : **while j<c,**\
&emsp;&emsp; *Step 8.2.1* : **if a[i][j] = item, print "Found", goto step 10**\
&emsp;&emsp; *Step 8.2.2* : **increment j by 1**\
&emsp; *Step 8.3* : **increment i by 1**\
*Step 09* : **print "Not found"**\
*Step 10* : **Stop**