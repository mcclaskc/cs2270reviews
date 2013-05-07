Pointers and Recursion
----------------------

**(1)** To return the address of a variable or object, and to pass a parameter into a function by reference.

**(2)** 
```
// It prints the memory address of Bob three times:
0xDEADBEEF
0xDEADBEEF
0xDEADBEEF
```
**(3)**
```C++
bool is_increasing(node* n) {
  if(n==NULL || n->next==NULL) return true;
  return (n->data < n->next->data && is_increasing(n->next));
}
```
**(4)** ```->``` is syntactic sugar for ```(*some_ptr).some_member```.  It means access some_member from the thing that some_ptr is pointing at.  This is so common they made a shortcut: ```some_ptr->some_member```
