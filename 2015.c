//编写浮点数循环队列的入队(5')和出队(5')操作代码
int EnQueue(Queue &Q,double data){
	if((Q.tail+1)%MAXBUFFERLEN==Q.head)
		return false;
	Q.buffer[Q.tail]=data;
	Q.tail=(Q.tail+1)%MAXBUFFERLEN;
	return ture;
}

int DeQueue(Queue &Q){
	double data;
	if(Q.tail==Q.head)
		return false;
	data=Q.buffer[Q.head];
	Q.head=(Q.head+1)%MAXBUFFERLEN;
	return ture;
}


//编写算法计算并返回指定二叉链结构二叉树中结点的个数
int GetNodeCount(BiTree T){
	int k=0;
	if(T==NULL){
		K+=0;
	}
	if(T->lchild==NULL)
		k++;
	else
		GetNodeCount(T->lchild);
	if(T->rchild==NULL)
		k++;
	else
		GetNodeCount(T->rchild);
	return k-1;
}


//编写算法计算并返回指定二叉链结构二叉树中结点的根节点的平衡因子
int GetBalance(BiTree T, int balance,int h){
	int bl,br,hl,hr;
	if(T==NULL){
		h=0;
		balance=0;
	}
	else if(T->lchild==NULL&&T->rchild==NULL){
		h=1;
		balance=0;
	}
	else{
		IsBalance(T->lchild,bl,hl);
		IsBalance(T->rchild,bl,hl);
		h=(hl>hr?hl:hr)+1;
		balance=hl-hr;
	}
	return balance;
}


//对一个不重复的无序序列，约定每个元素在序列中排在其后的小于
//它的元素个数为该元素的逆序数，并约定所有元素的逆序数之和为序列的逆序数
//编写算法计算并返回指定序列的逆序数。
int GetReverseOrder(int L[],int NULL){
	int k=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(L[i]==L[j]){
				printf("This is error!\n");
				break;
			}
			else if(L[i]>L[j])
				k++;
		} 
	}
	return k;
}


//编写代码，删除指定序列中的0，且不改变其他非零元的顺序
int RemoveZero(int L[],int n){
	int k=0;
	for(int i=0;i<n;i++){
		if(L[i]==0)
			k++;
		else
			L[i-k]=L[i];
		}
	return L;
}


//要用堆排序对一个整数序列进行升序排序，编写堆调整算法代码
int AdjustHeap(int L[],int n,int i){
	L[0]=L[i];
	for(int k=2*i;k<n;k*=2){
		if(k<n&&L[k]>L[k-1])
			i++;
		if(L[0]=<L[k])
			break;
		else{
			L[i]=L[k];
			k=i;
		}
	}
	L[i]=L[0];
}