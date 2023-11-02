/* Trees with Multiple Branches by Using Node Pointer Arrays */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
// Specifying the Branch Number as A Constant Global Variable
const int branch = 8;   	// If It is Given 2, This Becomes A Binary Tree


class Node {
public:
    int data;
    Node *next[branch];     // Node Pointer Array: Each Node will Have 8 Branches

    Node(int val){          // Constructor Assigns NULL to next[i] Node of All the Branches
        data = val;
        for(int i=0; i < branch; i++)
            next[i] = NULL;
    };
};


int main(){

    int item = 0;
    Node* root = new Node(item);                                    // Creating the Root of the Tree

    // Printing the Branch Node Data:
    cout << endl << "RootNode: " << root->data << endl << endl;     // Printing Value of the Root Node

    for(int index=0; index < branch; index++){                      // Adding New Nodes to Each Branch
        if(index < branch/2){                                       // For the First 4 Branches
            item = pow(index + 1, 3);                               // pow(index + 1, 3) is Optional Value
            root->next[index] = new Node(item);
        }
        else{                                                       // For the Last 4 Branches
            item = pow(index + 1, 2);                               // pow(index + 1, 2) is Optional Value
            root->next[index] = new Node(item);
        }
    }


    for (int j=0; j < branch; j++){
        if(root->next[j] != NULL){                                  // To Prevent Errors
            cout << "Branch-" << j+1 << ": " << root->next[j]->data << endl;
        }
        else{
            cout << "NULL!" << endl;
        }
    }


cout << endl << endl << "-------------" << endl;
system("pause");
return 0;
}
