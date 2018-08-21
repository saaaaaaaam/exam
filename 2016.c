////编写顺序结构实现的栈入栈(5')、出栈(5')和判栈空(5')操作代码
int Push(Stack &S,double data){
	if(S.top==MAXBUFFERLEN-1)
		return false;
	S.buffer(++S.top)=data;
	return true;
}
int Pop(Stack &S){
	double data;
	if(S.top==-1)
		return false;
	data=S.buffer(S.top--);
	return true;
}
int Empty(Stack &S){
	if(S.top==-1)
		return true;
	else
		return false;
}


//请编写算法将指定的二叉链结构二叉树中所有节点的左右子树交换
int SwapLeftRight(BiTree T){
	BiTree T1;
	if(T->lchild!=NULL&&T->rchild!=NULL){
		T1=T1->lchild;
		T->lchild=T->rchild;
		T->rchild=T1;
		SwapLeftRight(T->lchild);
		SwapLeftRight(T->rchild);
	}
	else
		return T;
	return T;        //??
}


//写出快速排序算法中的划分过程代码 ，返回划分元素的下标
 int Partition(int L[],int s,int t){
 	int pivot=L[low];
 	while(s<t){
 		while(s<t&&l[t]>=pivot)
 			--t;
 		R[s]=R[t];
 		while(s<t&&L[s]<=pivot)
 			--s;
 		R[t]=R[s];
 	}
 	L[s]=pivot;
 	return low;
 }


 //编写代码，将指定的非递减序列中的重复元素删除，压缩为一个递增序列
int Zip(int L[],int n){
 	int k=0;
 	for(int i=0;i<n;i++){
 		for(int j=i+1;j<n;j++){
 			if(L[i]==L[j])
 				k++;
 			else
 				L[j-k]=L[j];
 		}	
 		k=0;
 	}
 	return L;
 }