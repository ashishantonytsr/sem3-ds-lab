## Binary search
---
### Algorithm

*Step 01* : **Start**\
*Step 02* : **read sorted items into array ARR**\
*Step 03* : **read the item to be searched as ITEM**\
*Step 04* : **set BEG as index of first element and END as index of last element**\
*Step 05* : **if BEG>END,**\
&emsp; *Step 5.1* : **print "ITEM NOT FOUND", goto step 10**\
*Step 06* : **compute MID as floor value of (BEG+END)/2**\
*Step 07* : **if ITEM = ARR[MID]**\
&emsp; *Step 7.1* : **print MID+1 as the location of the ITEM, goto step 10**\
*Step 08* : **else if ITEM < ARR[MID]**\
&emsp; *Step 8.1* : **set END as MID-1**\
&emsp; *Step 8.2* : **goto step 5**\
*Step 09* : **else,**\
&emsp; *Step 9.1* : **set BEG as MID+1**\
&emsp; *Step 9.2* : **goto step 5**\
*Step 10* : **Stop**