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

**(3)** Fill in the function to to see if a linked list is sorted in increasing order (ie the data in all nodes is less than the data in the next node). You must use recursion and you cannot create any helper functions.
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

**(5)** Why do we use recursion instead of loops?

**(6)** What are mutually recursive functions?

**(7)** What does this code do?
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


Graphs / Trees
-------------------------------------
**(1)** What is the difference between BFS and DFS?

**(2)** How is a graph different than a tree or a linked list?

### Dijkstra - c

### Dijkstra - p

Compexity / Big-O Notation
-------------------------------------
### general info

### bigO - c

### big0 - p
