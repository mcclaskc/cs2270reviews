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
  //No cheaters.  This one is tricky ;)
}
```
**(4)** ```->``` is syntactic sugar for ```(*some_ptr).some_member```.  It means access some_member from the thing that some_ptr is pointing at.  This is so common they made a shortcut: ```some_ptr->some_member```
Finate State Machine (FSM)
--------------------------

Graphs
------
**(1)** BFS = Breadth first search, and DFS = Depth first search.  In a BFS, you search through the graph by first exploring all neighbors of a node, recursively. In a DFS you recursively explores the first node it finds all the way down until you hit a node with no children (or your target).

Complexity / Big-O Notation
---------------------------
