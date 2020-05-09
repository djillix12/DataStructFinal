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
		switch(v[i]) {
			case '(':
			break;
			
			case ')':
			break;

			case '+':
			case '-':
			case '/':
			case '*':
			break;

			/* If token is a number */
			default:
			break;
		}
	}

}