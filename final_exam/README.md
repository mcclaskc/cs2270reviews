Engineering Fellows - cs2270 Final Review
=========================================
*With Chris McClaskey and Peter Klipfel*

**5/7/13, 5pm-7pm in DLC 1B70**

**More questions will be added throughout the day up until the Review Session . Surprisingly enough, us fellows have final exams too :D Full answers will be posted after the review session**

I (Chris) will be in the csel from 7am Wednesday until your midterm if anyone wants to come in and 
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

**(3)** Fill in the function to to see if a linked list is sorted in increasing order (ie the data in all nodes is less than the data in the next node). Use recursion.
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
***(1)***What will this code print
```
static int withVar(int n){
  int state = 0;
  while(n > 0){
    if(n%5==0){
      state = 4;
    }
    else if(n%4==0){
      state = 3;
    }
    else if(n%3==0){
      state = 2;
    }
    else if(n%2==0){
      state = 1;
    }
    else{
      state = 0;
    }
    n = (2*n/3)-1;
    printSomeStuff(state);
  }
}
static void printSomeStuff(int state){
  if(state==0){
    cout << "Grumble" << endl;
  }
  else if(state==1){
    cout << "It's tricky to rock a rhyme" << endl;
  }
  else if(state==2){
    cout << "Computers are useless" << endl;
  }
  else if(state==3){
    cout << "Wibbly wobbly timey wimey" << endl;
  }
  else if(state==4){
    cout << "To Victory" << endl;
  }
  else{
    cout << "Why am I here?" << endl;
  }
}

withVar(15);
```
**(2)**
How could you rewrite withVar using a loop?
How could you rewrite withVar using recursion?
**(3)**
In what other ways could we make a finite state machine?

Graphs / Trees
-------------------------------------
**(1)** What is the difference between BFS and DFS?

**(2)** How is a graph different than a tree or a linked list?

**(3)** What is Dijkstra's algorithm used for?

**(4)** Write psuedo code that implements Dijkstra's.  Include What data structures you will need, what the inputs and outputs are, etc.

##### A cool animation that visualizes Dijkstra's nicely can be found [here](http://optlab-server.sce.carleton.ca/POAnimations2007/DijkstrasAlgo.html)

**(5)** Change the following implementation of an "In Order Traversal" of a Binary Tree to a "Post Order Traversal".  How could you also modify it to do a "Pre Order Traversal"?

```c++
void traverseBinaryTree(bt_node* n) {
  if (n == NULL ) return;
  traverseBinaryTree(n->left);
  cout << n->data << endl; //here, "visiting" the node simply means printing out it's data.
  traverseBinaryTree(n->left);
}
```

Complexity / Big-O Notation
-------------------------------------
**(1)**
Which has better time complexity?
O(log(n)) or O(n)
O(2^n) or O(n!)
O(n) or O(nlog(n))

**(2)** What is the complexity of Dijkstra's?  Searching a Binary Search Tree?

For Fun Only (Not on your test)
-------------------------------
The following problem is a common inteview question.  
Answers can be found all over the interwebs, but I think it's fun to challenge yourself and see how few lines you can do it in before going crazy (especially with C++).  Plus if you practice it you'll be able to answer it on the spot and impress some fools.  Perhaps you can implement some **data structes** to make it better eh?
```c++
void fizzbuzz() {
  // iterate through the numbers 1-100.  
  // If the number is divisible by 3, print out "fizz"
  // If the number is divisible by 5, print out "buzz"
  // If the number is divisible by both 3 and 5, print out "fizzbuzz"
  // Otherwise, just print out the number.
  //
  // 1
  // 2
  // fizz
  // 4
  // buzz
  // ...
  // ...
  // 14
  // fizzbuzz
  // 16
  // ...
  // etc
}
```
