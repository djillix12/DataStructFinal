class TreeNode {
	private:
		char item;
		TreeNode* leftChild;
		TreeNode* rightChild;

	public:
		TreeNode();

		void setItem(char anItem);
		char getItem() const;

		bool isLeaf() const;

		TreeNode* getLeftChildPtr() const;
		TreeNode* getRightChildPtr() const;

		void setLeftChildPtr(TreeNode* leftPtr);
		void setRightChildPtr(TreeNode* rightPtr); 
};