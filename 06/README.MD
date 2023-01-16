## Sparse matrix
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **read number of rows and cols as R and C**\
*Step 03* : **initialize SIZE= 0, K= 0**\
*Step 04* : **read the elements to the matrix S**\
&emsp; *Step 4.1* : **if element read is a non zero number, increment SIZE by 1**\
*Step 05* : **initialize sparse matrix M with order 3xSIZE**\
*Step 06* : **repeat step 6 until all the elements in the matrix S is visited**\
*Step 07* : **if current element is a non zero number,**\
&emsp; *Step 7.1* : **set M[0][K] as row of the element**\
&emsp; *Step 7.2* : **set M[1][K] as col of the element**\
&emsp; *Step 7.1* : **set M[3][K] as the current element**\
&emsp; *Step 7.2* : **increment K by 1**\
*Step 08* : **print matrix M as minimized matrix**\
*Step 09* : **Stop**