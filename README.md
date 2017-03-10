# Task 2
<br>
## Algorithm: Random

### Program: [simpleloop]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 71.6867 | 7616 | 3008 | 2958 | 368 | 2590
100 | 73.8611 | 7847 | 2777 | 2677 | 178 | 2499
150 | 74.3788 | 7902 | 2722 | 2572 | 135 | 2437
200 | 74.3976 | 7904 | 2720 | 2520 | 133 | 2387


### Program: [matmul]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 65.5484 | 1893157 | 995027 | 994937 | 955806 | 39171
100 | 88.7673 | 2563763 | 324421 | 324321 | 317043 | 7278
150 | 96.6547 | 2791566 | 96618 | 96468 | 94259 | 2209
200 | 98.0337 | 2831394 | 56790 | 56590 | 55078 | 1512

### Program: [blocked]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 99.6579 | 2410008 | 8272 | 8222 | 5837 | 2385
100 | 99.7846 | 2413071 | 5209 | 5109 | 3510 | 1599
150 | 99.8195 | 2413916 | 4364 | 4214 | 2865 | 1349
200 | 99.8404 | 2414420 | 3860 | 3660 | 2446 | 1214

### Program: [interesting (my program)](interesting.c)

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 30.1833 | 18110 | 41890 | 41840 | 890 | 40950
100 | 31.7117 | 19027 | 40973 | 40873 | 405 | 40468
150 | 32.2100 | 19326 | 40674 | 40524 | 267 | 40257
200 | 32.3700 | 19422 | 40578 | 40378 | 209 | 40169
<br>
## Algorithm: FIFO

### Program: [simpleloop]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 72.0793 | 7675 | 2973 | 2923 | 202 | 2721
100 | 74.0702 | 7887 | 2761 | 2661 | 44 | 2617
150 | 74.4459 | 7927 | 2721 | 2571 | 16 | 2555 
200 | 74.5210 | 7935 | 2713 | 2513 | 12 | 2501


### Program: [matmul]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 60.9702 | 1760932 | 1127252 | 1127202 | 1083212 | 43990
100 | 62.4834 | 1804637 | 1083547 | 1083447 | 1061222 | 22225 
150 | 98.8086 | 2853775 | 34409 | 34259 | 32943 | 1316
200 | 98.8267 | 2854296 | 33888 | 33688 | 32433 | 1255

### Program: [blocked]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 99.7345 | 2411859 | 6421 | 6371 | 4232 | 2139
100 | 99.8220 | 2413975 | 4305 | 4205 | 2847 | 1358
150 | 99.8260 | 2414071 | 4209 | 4059 | 2756 | 1303
200 | 99.8692 | 2415117 | 3163 | 2963 | 1985 | 978

### Program: [interesting (my program)](interesting.c)

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 30.3817 | 18229 | 41771 | 41721 | 837 | 40884
100 | 31.7383 | 19043 | 40957 | 40857 | 400 | 40457
150 | 32.1733 | 19304 | 40696 | 40546 | 266 | 40280
200 | 32.4100 | 19446 | 40554 | 40354 | 195 | 40159

<br>
## Algorithm: LRU

### Program: [simpleloop]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 73.8636 | 7865 | 2783 | 2733 | 87 | 2646
100 | 74.7370 | 7958 | 2690 | 2590 | 2 | 2588
150 | 74.7652 | 7961 | 2687 | 2537 | 0 | 2537
200 | 74.7652 | 7961 | 2687 | 2487 | 0 | 2487


### Program: [matmul]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 63.9490 | 1846965 | 1041219 | 1041169 | 1040063 | 1106
100 | 65.1527 | 1881729 | 1006455 | 1006355 | 1005274 | 1081
150 | 98.8614 | 2855298 | 32886 | 32736 | 31656 | 1080
200 | 98.8618 | 2855310 | 32874 | 32674 | 31594 | 1080

### Program: [blocked]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 99.7879 | 2413150 | 5130 | 5080 | 2745 | 2335
100 | 99.8435 | 2414495 | 3785 | 3685 | 2603 | 1082
150 | 99.8441 | 2414511 | 3769 | 3619 | 2558 | 1061
200 | 99.8472 | 2414584 | 3696 | 3496 | 2435 | 1061

### Program: [interesting (my program)](interesting.c)

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 32.9650 | 19779 | 40221 | 40171 | 53 | 40118
100 | 33.0633 | 19838 | 40162 | 40062 | 0 | 40062
150 | 33.0633 | 19838 | 40162 | 40012 | 0 | 40012
200 | 33.0633 | 19838 | 40162 | 39962 | 0 | 39962

<br>
## Algorithm: CLOCK

### Program: [simpleloop]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 73.7697 | 7855 | 2793 | 2743 | 94 | 2649
100 | 74.7183 | 7956 | 2692 | 2592 | 3 | 2589
150 | 74.7558 | 7960 | 2688 | 2538 | 0 | 2538
200 | 74.7558 | 7960 | 2688 | 2488 | 0 | 2488


### Program: [matmul]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 63.9488 | 1846959 | 1041225 | 1041175 | 1040067 | 1108
100 | 65.3141 | 1886390 | 1001794 | 1001694 | 1000612 | 1082
150 | 98.6044 | 2847877 | 40307 | 40157 | 39076 | 1081
200 | 98.8613 | 2855296 | 32888 | 32688 | 31608 | 1080

### Program: [blocked]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 99.7628 | 2412545 | 5735 | 5685 | 3251 | 2434
100 | 99.8290 | 2414144 | 4136 | 4036 | 2610 | 1426
150 | 99.8436 | 2414499 | 3781 | 3631 | 2570 | 1061
200 | 99.8676 | 2415078 | 3202 | 3002 | 1941 | 1061

### Program: [interesting (my program)](interesting.c)

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 32.9583 | 19775 | 40225 | 40175 | 54 | 40121
100 | 33.0567 | 19834 | 40166 | 40066 | 3 | 40063
150 | 33.0617 | 19837 | 40163 | 40013 | 0 | 40013
200 | 33.0617 | 19837 | 40163 | 39963 | 0 | 39963

<br>
## Algorithm: OPT

### Program: [simpleloop]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 74.8591 | 7971 | 2677 | 2627 | 26 | 2601
100 | 75.2066 | 8008 | 2640 | 2540 | 0 | 2540
150 | 75.2066 | 8008 | 2640 | 2490 | 0 | 2490
200 | 75.2066 | 8008 | 2640 | 2440 | 0 | 2440


### Program: [matmul]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 79.6599 | 2300725 | 587459 | 587409 | 586322 | 1087
100 | 96.7870 | 2795387 | 92797 | 92697 | 91612 | 1085
150 | 99.0785 | 2861570 | 26614 | 26464 | 25379 | 1085
200 | 99.3330 | 2868920 | 19264 | 19064 | 17979 | 1085

### Program: [blocked]()

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 99.8472 | 2414584 | 3696 | 3646 | 2560 | 1086
100 | 99.8760 | 2415282 | 2998 | 2898 | 1825 | 1073
150 | 99.8957 | 2415757 | 2523 | 2373 | 1297 | 1076
200 | 99.9060 | 2416007 | 2273 | 2073 | 1007 | 1066

### Program: [interesting (my program)](interesting.c)

Memory Size | Hit Rate | Hit Count | Miss Count | Overall Evictions | Clean Evictions | Dirty Evictions
----------- | -------- | --------- | ---------- | ----------------- | --------------- | ---------------
50 | 33.1200 | 19872 | 40128 | 40078 | 34 | 40044
100 | 33.2267 | 19936 | 40064 | 39964 | 20 | 39944
150 | 33.3100 | 19986 | 40014 | 39864 | 20 | 39844
200 | 33.3933 | 20036 | 39964 | 39764 | 20 | 39744

<br>
## Comparison of Algorithms

OPT, with its ability to perfectly predict the future, exhibits the highest hit rates. Quite intuitively, this is because each time it evicts the *best possible* page with respect to its future reference(s).

The hit rates obtained using LRU and Clock are very similar for all the programs. This is likely because that the algorithms themeselves are quite alike, with Clock just acting as a lesser accurate version of LRU.

Rand has shown lower hit rates on average. However, it did have higher rates when used by `matmul`. This is because of `matmul`'s nature of memory access - which largely follows an ordered pattern, in which the recently accessed memory locations are less likely to be accessed again.

Lastly, and on a more general note, hit rates increase with memory size for all algorithms. Intuitively, as more pages are kept in memory, there is a greater opportunity of benefitting from temporal locality, and hence page faults become less likely to occur.

<br>

## LRU Behaviour with Increasing Memory Size

As with the other alogorithms, the hit rates increase with memory size. This is because as memory size increases, LRU is able to hold a larger record of recently used pages, and hence, on each evction, the page that was least recently used is even less likely to be referenced again. Therefore, we can see that LRU is able to maximize benefits from locality as it is given a higher memory size.