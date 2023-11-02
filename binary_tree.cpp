#include <iostream>

struct Binary_Node {
	int value;
	Binary_Node *left;
	Binary_Node *right;
	
	//constructors
	Binary_Node(): value(0),left(nullptr),right(nullptr) {}
	Binary_Node(int x): value(x), left(nullptr), right(nullptr) {}
	Binary_Node(int x, Binary_Node *left, Binary_Node *right): value(x), left(left), right(right) {}
	
};

class Solution{
	public:
		int averageOfSubtree(Binary_Node *root){
			
			

		}
};

int main(){
	Solution s;
	Binary_Node root(1);
	std::cout<< s.averageOfSubtree(&root);
	return 0;
}
