#Predict Output (Question Number 7) <br>
a[0]: 6  <br>
a[1]: 5  <br>
a[2]: unknown  <br>
a[3]: 7  <br>
a[4]: unknown  <br>  <br>

#Predict Output (Question Number 8)  <br>
Mark[0][2]: 24  <br>
Mark[1][3]: 30   <br>
Mark[2][2]: 40  <br>

#Analyze the segment below and identify Type of pointer and invalid statment  <br>
##Invalid statements:  <br>
*p1 = 20 (assigning an integer (20) to a pointer (p1) is not allowed)  <br>
*p2 = 50 (p2 is a pointer to a constant integer so, the value it points to cannot be modified.) p3 = &y (p3 is constant pointer so, its address cannot be changed) p4 = &y (p4 is constant pointer so, its address cannot be changed)  <br>
*p4 = 90 (p4 is a pointer to a constant integer so, value it points to cannot be modified).  <br>  <br>

##Type of pointers  <br>
In the given code, the valid pointers are just the ordinary pointers(don’t have a certain type), but we can classify them as: int *p1: Non-constant pointer to an integer (int*). const int *p2: Pointer
to a constant integer (const int*). int *const p3: Constant pointer to an integer (int* const). const int *const p4: Constant pointer to a constant integer (const int* const).

