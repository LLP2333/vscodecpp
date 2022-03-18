typedef struct BitNode
{
    int data;
    struct BitNode *lchild,*rchild;
    
}BitNode,*BitTree;



//统计二叉树的叶节点的个数
int LeafNodeCount(BitTree T)
{
    if(T==nullptr)
    return 0;
    else if(T->lchild==nullptr&&T->rchild==nullptr)
    return 1;
    else
    return LeafNodeCount(T->lchild)+LeafNodeCount(T->rchild);
    
}

bool compareTree(BitNode* tree1, BitNode* tree2)
//用分治的方法做，比较当前根，然后比较左子树和右子树
{
bool tree1IsNull = (tree1==nullptr);
bool tree2IsNull = (tree2==nullptr);
if(tree1IsNull != tree2IsNull)
{
return false;
}
if(tree1IsNull && tree2IsNull)
{//如果两个都是NULL，则相等
return true;
}//如果根节点不相等，直接返回不相等，否则的话，看看他们孩子相等不相等
if(tree1->data != tree2->data)
{
    return false;
}
else
return (compareTree(tree1->lchild,tree2->lchild)&compareTree(tree1->rchild,tree2->rchild));
}//算法结束



void ChangeLR(BitNode *T)
{
	BitTree temp;
    if (T==nullptr)
    return;
	if(T->lchild==nullptr&&T->rchild==nullptr)
		return;
	else
	{
		temp = T->lchild;
		T->lchild = T->rchild;
		T->rchild = temp;
	}//交换左右孩子
	ChangeLR(T->lchild);  //递归交换左子树
	ChangeLR(T->rchild);  //递归交换右子树
}



