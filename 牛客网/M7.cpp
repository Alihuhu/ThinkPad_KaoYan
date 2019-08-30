BinaryTreeNode* Construct(int* preorder,int* inorder,int length)
{
	if(preorder==nullptr||inorder==nullptr||length<=0);
		return nullptr;
	return ConstructCore(preorder,preorder+length-1,inorder,inorder+length-1);
}
BinaryTreeNode* ConstructCore(int* startPreorder,int* endPreorder,int* startInorder,int *endPreorder)
{
	int rootValue=startPreorder[0];
	BinaryTreeNode* root=new BinaryTreeNode();
	root->value=rootValue;
	root->left=root->right=nullptr;
	if(startPreorder==endPreorder)
	{
		if(startInorder==endPreorder&&*startPreorder==*startInorder)
			return root;
		else
			throw std::exception("Invalid input");
	}
	
	int* rootInorder=startInorder;
	while(rootInorder<=endInorder&&*rootInorder!=rootValue)
		++rootInorder;
	if(rootInorder==endInorder&&*rootInorder!=rootValue)
		throw std::exception("Invalid Value");
	int leftLength=rootInorder-startInorder;
	int *leftPreorderEnd=startpreorder+leftLength;
	