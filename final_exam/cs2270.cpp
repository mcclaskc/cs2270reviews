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


// my personal lazy / hard way to generate a binary tree with nodes 1-7, with 4 being at the head
bt_node* gen_binary_tree() {
  bt_node* head = new bt_node;
  head->data = 4;
  bt_node* two = new bt_node;
  head->left = two;
  two->data = 2;
  bt_node* one = new bt_node;
  two->left = one;
  one->data = 1;
  bt_node* three = new bt_node;
  two->right = three;
  three->data = 3;
  bt_node* six = new bt_node;
  head->right = six;
  six->data = 6;
  bt_node* five = new bt_node;
  six->left = five;
  five->data = 5;
  bt_node* seven = new bt_node;
  six->right = seven;
  seven->data = 7;
  return head;
}

// Full implementation of contains from midterm 1, problem 5
bool contains(node* top, int value) {
  if (top==NULL) return false;
  if (top->data == value) return true;
  return contains(top->next, value);
}

void linked_list_append(node* n, int data) {
  if (n->data == NULL ) { 
    // cout << "null data: " << data << endl;
    n->data = data;
  }
  else {
    // cout << "reg data: " << data << endl;
    node* prev;
    while(n!=NULL) {
      prev = n;
      n = n->next;
    }
    node* new_node = new node;
    new_node->data = data;
    prev->next = new_node;
  }
}

// full implementation of to_list from midterm 1, problem 1
void to_list_helper(bt_node* bt_head, node* n) {
  if(bt_head == NULL) { return; }
  //cout << "bt_head: " << bt_head->data << endl;
  to_list_helper(bt_head->left, n);
  linked_list_append(n, bt_head->data);
  to_list_helper(bt_head->right, n);
}
node* to_list(bt_node* bt_head) {
  if (bt_head == NULL) return NULL;
  node* list_head = new node;
  to_list_helper(bt_head, list_head);
  return list_head;
}


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

//This is as far as we got on get_path_sum in the review for the first midterm
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
    }
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
    case '0': {
      pointer_easy();
      break;
    }
		case '1': {
      cout << product(3,10) << endl;
      break;
    }
    case '2': {
      node* n = new node; 
      n->data = 5;
      node* m = new node;
      m->data = 6;
      n->next = m;
      node* null = NULL;
      cout << size(n) << endl;
      break;
    }
    case '3': {
      cout << "implement get_path_sum"; 
      break;
		}
    case '4': {
      bt_node* head = gen_binary_tree();
      node* list = to_list(head);
      while (list != NULL) {
        cout << list->data << endl;
        list = list->next;
      }
      break;
    }
    case '5': {
      node* top = new node;
      for(int i=1; i<10; ++i) linked_list_append(top, i);
      node* tmp = top;
      while (tmp != NULL) {
        cout << "DATA: " << tmp->data << endl;
        tmp = tmp->next;
      }
      cout << "contains 3: " << contains(top, 3) << endl;
      cout << "contains 9: " << contains(top, 9) << endl;
      cout << "contains 10: " << contains(top, 10) << endl;
      cout << "contains 11: " << contains(top, 11) << endl;

    }
  }
  

  return 0;
}
