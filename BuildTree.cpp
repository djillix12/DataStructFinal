#include "BuildTree.h"
#include <iterator>
#include <fstream>
#include <iostream>

BuildTree::BuildTree(std::string aFileName)
{
	std::ifstream in(aFileName); // Creates the specified input file (determined by the passed 'aFileName')

	/* Uses std::string::assign, which iterates through our file 'in' and stores it in our variable 'exp' */
	exp.assign((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
}

std::vector<char> BuildTree::tokenize()
{
	/* temporary vector, this is the vector we return after tokenizing */
	std::vector<char> v;

	/* Stores each individual token in the vector, accounting for spaces which shouldn't be included */
	for (int i = 0; i < exp.length(); i++) {
		if (exp[i] != ' ') {
			v.push_back(exp[i]);
		}
	}

	return v; // Returns our vector of chars
}

void BuildTree::build(std::vector<char> v) {

	for (int i = 0; i < v.size(); i++) {

		if (root != nullptr) {

			switch (v[i]) {
			case '(':
				TreeNode * newNode = new TreeNode();
				leftParanthesis(newNode);
				break;

			case ')':
				rightParanthesis();
				break;

			case '+':
			case '-':
			case '/':
			case '*':
				TreeNode * newNode = new TreeNode();
				break;

				/* If token is a number */
			default:
				break;
			}
		}
	}

}

TreeNode* BuildTree::leftParanthesis(TreeNode* newNode)
{

	/* The root node now has a left child of this new node */
	root->setLeftChildPtr(newNode);

	/* Descend root node to new left child */
	root = newNode;

	return root;
}

TreeNode* BuildTree::rightParanthesis()
{
	//return to parent
}

TreeNode* BuildTree::isOperand(char item)
{
	root->setItem(item);

	//return to parent

	return root;
}

TreeNode* BuildTree::isOperator(char item, TreeNode* newNode)
{
	root->setItem(item);

	root->setRightChildPtr(newNode);

	root = newNode;

	return root;
}
