# Pointers Practical Exercises
## Predict Output #1
value of V<br>
memory address of V memory address of ptr2<br>
memory address of Arr1 memory address of Arr1<br>
memory address of Arr1[2] memory address of ptr1<br>
value of V <br>
memory address of V memory address of ptr2<br>
memory address of Arr1 memory address of Arr1<br>
memory address of Arr2 memory address of ptr1<br>
## Predict Output #2 
58 58 58
## Predict Output #3
K=4 x=950<br>
y=3000<br>
k=14 k=28 <br>

## Predict Output #5
5 address of ‘5’<br>
5 address of ‘5’ <br>
10 address of ‘10’ <br>
10 address of ‘10’<br>
11 address of ‘11’<br>
12 address of ‘12’<br>
12 address of ‘12’<br>
## Predict Output #6
a[0]: 6 a[1]: 5<br>
a[2]: unknown<br>
a[3]: 7 a[4]:<br>
unknown
## Predict Output #7
a[0]: 6 a[1]: 5<br>
a[2]: unknown<br>
a[3]: 7 a[4]:<br>
unknown<br>
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



