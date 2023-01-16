## Quick Sort
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **read N elements into the array ARR**\
*Step 03* : **set BEG as 0 & END as N-1**\
*Step 04* : **if beg > end, return**\
*Step 05* : **set PIVOT as last element in the ARR**\
*Step 06* : **set I as BEG-1 & J as BEG**\
*Step 07* : **while J <= END-1, repeat steps 8 to 10**\
*Step 08* : **increment I by 1**\
*Step 09* : **if ARR[J] < PIVOT, swap ARR[I] & ARR[J]**\
*Step 10* : **increment J by 1**\
*Step 11* : **swap ARR[I+1] & ARR[END]**\
*Step 12* : **set INDEX as I+1**\
*Step 13* : **set END as INDEX - 1 & goto step 4**\
*Step 14* : **set BEG as INDEX + 1 & goto step 4**\
*Step 15* : **print ARR as sorted array**\
*Step 16* : **Stop**