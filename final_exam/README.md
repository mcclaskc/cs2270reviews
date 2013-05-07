Engineering Fellows - cs2270 Final Review
=========================================
*With Chris McClaskey and Peter Klipfel*

I (Chris) will be in the csel from 7am until your midterm if anyone wants to come in and 
talk or ask questions. I will also do my best to answer any questions over email:  
christopher.m.mcclaskey@gmail.com

Good luck on your test!


# Review Questions
-------------------------------------

Pointers and Recursion 
-------------------------------------
**(1)** Describe two different uses for '&' in a C++ program.

**(2)** What is the output of the following C++ code?
```c++
  int bob = 88;
  int* pam = &bob;
  int** joe = &pam;
  cout << &bob << endl;
  cout << pam << endl;
  cout << *joe << endl;
```

**(3)** Fill in the function to to see if a linked list is in increasing order (by node data, ie 0, 1, 2, etc). Use recursion.
```c++
struct node {
  int data;
  node* next;
}

bool is_increasing(node* n) {
  //Your code goes here
}
```

**(4)** Explain in detail what ```->``` means in C++.

### pointers / recursion - p

### pointers / recursion - p
**(1)**Why do we use recursion instead of loops?
**(2)**What are mutually recursive functions?
**(3)**What does this code do?
```
int F(int n) {
    if ( n == 0 ) return 1;
    return n - G(n-1);
  }
int G(int n) {
    if ( n == 0 ) return 1;
    return n - F(n-1);
  }
```

Finite State Machine (FSM) 
-------------------------------------
### general info

### fsm - c

### fsm - p


Graphs
-------------------------------------
**(1)** What is the difference between BFS and DFS?

### DFS / BFS - p

### Dijkstra - c

### Dijkstra - p

Compexity / Big-O Notation
-------------------------------------
### general info

### bigO - c

### big0 - p
