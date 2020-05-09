#pragma once
#include <string>
#include <vector>

class BuildTree
{
private:

	std::string fileName = "expression.txt";
	std::string exp;

public:

	BuildTree(std::string aFileName = " ");
	std::vector<char> tokenize();

};
