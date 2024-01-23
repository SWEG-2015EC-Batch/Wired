#Predict Output (Question Number 7)
a[0]: 6 
a[1]: 5
a[2]: unknown 
a[3]: 7 
a[4]: unknown

#Predict Output (Question Number 8)
Mark[0][2]: 24
Mark[1][3]: 30 
Mark[2][2]: 40

#Analyze the segment below and identify Type of pointer and invalid statment
##Invalid statements:
*p1 = 20 (assigning an integer (20) to a pointer (p1) is not allowed)
*p2 = 50 (p2 is a pointer to a constant integer so, the value it points to cannot be modified.) p3 = &y (p3 is constant pointer so, its address cannot be changed) p4 = &y (p4 is constant pointer so, its address cannot be changed)
*p4 = 90 (p4 is a pointer to a constant integer so, value it points to cannot be modified).

##Type of pointers
In the given code, the valid pointers are just the ordinary pointers(don’t have a certain type), but we can classify them as: int *p1: Non-constant pointer to an integer (int*). const int *p2: Pointer
to a constant integer (const int*). int *const p3: Constant pointer to an integer (int* const). const int *const p4: Constant pointer to a constant integer (const int* const).

