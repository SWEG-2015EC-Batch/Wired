# Pointers Practical Exercises
## Predict Output #1
value of V
memory address of V memory address of ptr2
memory address of Arr1 memory address of Arr1
memory address of Arr1[2] memory address of ptr1
value of V
memory address of V memory address of ptr2
memory address of Arr1 memory address of Arr1
memory address of Arr2 memory address of ptr1
## Predict Output #2 
58 58 58
## Predict Output #3
K=4 x=950
y=3000
k=14 k=28 
## Predict Output #4
## Predict Output #5
5 address of ‘5’
5 address of ‘5’ 
10 address of ‘10’ 
10 address of ‘10’
11 address of ‘11’
12 address of ‘12’
12 address of ‘12’
## Predict Output #6
a[0]: 6 a[1]: 5
a[2]: unknown
a[3]: 7 a[4]:
unknown
## Predict Output #7
a[0]: 6 a[1]: 5
a[2]: unknown
a[3]: 7 a[4]:
unknown
## Predict Output #8
Mark[0][2]: 24 Mark[1][3]: 30 Mark[2][2]: 40 
# Analyze the segment below and identify
## Type of pointers 
The valid pointers are ordinary pointers,but we can classify them as: int *p1: Non-constant pointer to an integer (int*). const int *p2: Pointer
to a constant integer (const int*). int *const p3: Constant pointer to an integer (int* const).
const int *const p4: Constant pointer to a constant integer (const int* const).
## Invalid statements
*p1 = 20 (assigning an integer (20) to a pointer (p1) is not allowed)
*p2 = 50 (p2 is a pointer to a constant integer so, the value it points to cannot be modified.)
p3 = &y (p3 is constant pointer so, its address cannot be changed) p4 = &y (p4 is constant
pointer so, its address cannot be changed)
*p4 = 90 (p4 is a pointer to a constant integer so, value it points to cannot be modified) 



