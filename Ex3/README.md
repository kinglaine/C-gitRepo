# Exercise 2.1
int: has at least 16 bits
long: has at least 32 bits
long long: has at least 64 bits
short: has at least 16 bits

Unsigned types can can't hold negative values
Signed types can hold both positive and negative values.

Double is more precise than float as the name implies it's 2x more precise than float.
Float is up to 6 significant digits while double goes up to 10 significant digits.

# Exercise 2.2
int type would be used to represent the rate because it would be in "percent" for accuracy 
The principal and payment would be in int because double and float can't represent monetary values accurately.

# Exercise 2.3
The output of the code will be.
32
-32
32
-32
0
0

# Exercise 2.10
The initial values are
pi = 3.1416
sum = 0
unique = 0
reuse = 0
reused = 42
i = 100
ival = 1024
refval = 2

# Exercise 2.12
catch-22 and 1_or_2

# Exercise 2.13
j = 100;

# Exercise 2.14
Yes the program is legal and the following will be printed:
100 45

# Exercise 2.17
The following code will not print because of a compilation error.

# Exercise 2.27
The legal initializations are:
int *const p2 = &i2;       
const int i = -1, &r = 0;   
const int *const p3 = &i2; 
const int *p1 = &i2;
const int i2 = i, &r = i;

# Exercise 2.28
All of the following are illegal
int i, *const cp;       
int *p1, *const p2;     
const int ic, &r = ic; 
const int *const p3; 