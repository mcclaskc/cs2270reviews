#include <iostream>
using namespace std;

//node struct from the homeworks
struct node {
  int data;    // data: the value of this node
  node* next;  // next: pointer to the next node in the list, or NULL
         // if this is the last node.
};

//bt_node struct from the homeworks
struct bt_node {
  int data;
  bt_node* left;
  bt_node* right;
};


//function that shows and displays the same memory address in each statement
void pointer_easy() {
  int bob = 88;
  int* pam = &bob;
  int** joe = &pam;
  cout << &bob << endl;
  cout << pam << endl;
  cout << *joe << endl;
  // spot
}

//this is the recursive way to do the product function from the review
int product(int low, int high) {
  if(low < high) {
  	return low * product(low+1, high);
  }
	else {
		return high;		
 	}
}

//this returns the size of a linked list using recursion
int size(node* root) {
  if(root==NULL){return 0;}
  if(root->next != NULL) {
    return 1 + size(root->next);
  }
  else {
    return 1;
  }
}

//This is as far as we got on get_path_sum.  If I have time tonight I will try to get a working 
//version pushed up.  I will be in the csel from 7am to 2ish if anyone wants to come in and 
//talk or ask questions. I will also do my best to answer any questions over email:  
//christopher.m.mcclaskey@gmail.com
int get_path_sum(bt_node* root, bt_node* leaf) {
  if(root==NULL) {
    //root was null, the tree is empty, so our sum is zero
    return 0;
  }
  int l_data = leaf->data;
  int sum = 0;
  bt_node* cursor = root;
  while(cursor!=NULL) {
    sum = sum + cursor->data;
    if(l_data < cursor->data) {
        cursor=cursor->left;
    else if(l_data > cursor->data) {
        cursor=cursor->right;
    }
    else {
      return sum;
    }
    // else if(cursor->data==leaf->data && 
    //   cursor->left == NULL && cursor->right == NULL) {
    //   return sum;
    // }
  }

}

//Main function to fun all the above functions. Compile and run in the terminal like this:
//g++ cs2270.cpp -o cs2270 && ./cs2270 number
//where number equals 0,1,or 2 to call each function (0 for pointer easy, 1 or product, etc)
int main(int argc, char* argv[]) { 
	switch(argv[1][0]) { 
    case '0':
			pointer_easy();
			break;
		case '1':
			cout << product(3,10) << endl;
			break;
    case '2':
      node* n = new node;
      n->data = 5;
      node* m = new node;
      m->data = 6;
      n->next = m;
      node* null = NULL;
      cout << size(n) << endl;
      break;
    case '3'
      //implement get_path_sum 
		
  }
  

  return 0;
}
