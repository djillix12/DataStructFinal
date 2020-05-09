#include "BuildTree.h"
#include "TreeNode.h"

int main() {
	BuildTree b("expression.txt");

	b.tokenize();

	return 0;
}