#pragma once
#include <string>
#include <vector>
#include "TreeNode.h"

class BuildTree
{
private:

	std::string fileName = "expression.txt";
	std::string exp;

	TreeNode* root;

public:

	BuildTree(std::string aFileName = " ");
	std::vector<char> tokenize();

	void build(std::vector<char> v);

	void leftParanthesis();

	
};
