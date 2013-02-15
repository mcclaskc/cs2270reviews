#include <iostream>
using namespace std;

struct node {
  int data;    // data: the value of this node
  node* next;  // next: pointer to the next node in the list, or NULL
         // if this is the last node.
};

struct bt_node {
  int data;
  bt_node* left;
  bt_node* right;
};

void pointer_easy() {
  int bob = 88;
  int* pam = &bob;
  int** joe = &pam;
  cout << &bob << endl;
  cout << pam << endl;
  cout << *joe << endl;
  // spot
}

int product(int low, int high) {
  if(low < high) {
  	return low * product(low+1, high);
  }
	else {
		return high;		
 	}
}

int size(node* root) {
  if(root==NULL){return 0;}
  if(root->next != NULL) {
    return 1 + size(root->next);
  }
  else {
    return 1;
  }
}


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

//email: christopher.m.mcclaskey@gmail.com
    //github: github.com/mcclaskc
    //repository:  cs2270review





















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
		
  }
  

  return 0;
}
