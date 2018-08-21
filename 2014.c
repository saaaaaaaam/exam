/*请编写算法代码，将指定含头结点的单链表就地逆转，
要求空间复杂度为O(1)，时间复杂度为O(n) */
void Inverse(Linklist L){
	Linklist *p,*r;
	p=L->next;
	L-next=NULL;
	While(p!=NULL){
		r=p->next;
		p->next=L->next；
		L-next=p;
		p=r;
	}
	return L;
}


//请编写计算并返回Fibonacci序列中第n个值的非递归算法代码，
//约定F(0)=1,F(1)=1,F(i)=F(i-1)+F(i-2)。
int F(int n){
	int res;
	int temp1=1;
	int temp2=1;
	if (n==0||n==1){
		return 1;
	}else{
		for (int i=1;i<n;i++){
			res=temp1+temp2;
			temp2=temp1;
			temp1=res;
		}
		return res;
	}
}

//编写算法代码，判断指定的二叉树是否为平衡二叉树
int IsBalance(BiTree T,int balance,int h){
	int bl,br,h1,hr;
	if(T==NULL){
		h=0;
		balance==1;
	}
	else if (T->lchild==NULL&&T->rchild==NULL){
		h=1;
		balance=1;
	}
	else{
		IsBalance(T->lchild,b1,hl);
		IsBalance(T->rchild,b1,hl);
		h=(hl>hr?hl:hr)+1;
		if (abs(hl,hr)<2)
			balance=bl&&br;
		else
			balance=0;
	}
	return balance;
}


//编写代码，计算一个序列的极差(最大值和最小值的差值)
int Range(int L[],int n){
	int max,min;
	max=L[0];
	min=L[0];
	for(int i=1;i<n;i++){
		if(max<L[i])
			max=L[i];
	}
	for(int i=1;i<n;i++){
		if(min>L[i])
			min=L[i];
	}
	return max-min;
}


//编写代码，将两个有序非降序序列A和B合并成一个非降序序列C
//并返回C的长度，假设存储空间已经准备好
int Merge(int C[],int A[],int nA,int B[],int nB){
	int i=0,j=0,k=0,nC;
	while(i<nA&&j<nB){
		if (A[i]<=B[j])
			C[k++]=A[i++];
		else 
			C[k++]=B[j++];
	}
	while(i<nA)
	C[k++]=A[i++];
	while(j<nB)
	C[k++]=B[j++];
	nC=k;
	return nC;
}


//编写基于稀疏矩阵三元组表法的矩阵快速转置算法代码
TriTable *Inverse(TriTable &M){
	TriTable &M;
	int p,q,t,col,*num,*cpot;
	num=(int*)malloc((M.nu+1)*sizeof(int));
	cpot=(int*)malloc((M.nu+1)*sizeof(int));
	T.mu=M.mu;
	T.nu=M.mul;
	T.tu=M.tu;
	if (T.tu)
	{
		for(col=1;col<=M.nu;++col)
			num[col]=0;
		for(t=1;t<=M.tu;++t)
			++num[M.data[t].j];
		cpot[1]=1;
		for(col=2;col<=M.nu;++col)
			cpot[col]=cpot[col-1]+num[col-1];
		for(p=1;p<=M.tu;++p)
		{
			col=M.data[p].j;
			q=cpot[col];
			T.data[q].i=M.data[p].j;
			T.data[q].j=M.data[p].i;
			T.data[q].e=M.data[p].e;
			++cpot[col];
		}
	}
	free(num);
	free(cpot);
	return T;
}