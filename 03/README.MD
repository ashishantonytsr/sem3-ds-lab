## Pattern matching algorithm
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **read text as TXT & pattern to be searched as PAT**\
*Step 03* : **compute length of TXT as TXTLEN & length of PAT as PATLEN**\
*Step 04* : **set i=0**\
*Step 05* : **while i <= TXTLEN-PATLEN, repeat steps 6 to 11**\
*Step 06* : **set j=0**\
*Step 07* : **while j < PATLEN, repeat steps 8 to 10**\
*Step 08* : **if TXT[i+j] not equal to PAT[j], break**\
*Step 09* : **if j=PATLEN-1, print i as index of pattern**\
*Step 10* : **increment j by 1**\
*Step 11* : **increment i by 1**\
*Step 12* : **Stop**