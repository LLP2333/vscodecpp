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
