#include "TreeNode.h"

TreeNode::TreeNode()
{
}

void TreeNode::setItem(char anItem)
{
	item = anItem;
}

char TreeNode::getItem() const
{
	return item;
}

TreeNode* TreeNode::getLeftChildPtr() const
{
	return leftChild;
}

TreeNode* TreeNode::getRightChildPtr() const
{
	return rightChild;
}

void TreeNode::setLeftChildPtr(TreeNode* leftPtr)
{
	leftChild = leftPtr;
}

void TreeNode::setRightChildPtr(TreeNode* rightPtr)
{
	rightChild = rightPtr;
}
