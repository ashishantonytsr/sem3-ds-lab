## Selection sort
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **read N as number of elements and read array ARR with N elements**\
*Step 03* : **set I=0**\
*Step 04* : **while I<N, repeat steps 5 to 8**\
*Step 05* : **set POS= I , J= I+1**\
*Step 06* : **while J<N, repeat step 6**\
&emsp; *Step 6.1* : **if ARR[J] < ARR[POS], set POS= J**\
&emsp; *Step 6.2* : **increment j by 1**\
*Step 07* : **if POS not equal to I, swap ARR[I] and ARR[POS]**\
*Step 08* : **increment i by 1**\
*Step 09* : **print ARR as sorted array**\
*Step 10* : **Stop**