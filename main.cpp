#include <iostream>
#include "BuildTree.h"

int main()
{
	BuildTree b("expression.txt");

	b.tokenize();

	return 0;

}