/*
 * Sort.c
 *  排序
 *  Created on: Oct 16, 2016
 *      Author: jred
 */

#define MAXSIZE 100;
typedef int KeyType;
typedef struct{
	KeyType key;
}RecType;
typedef RecType SeqList;

/**
 * 插入排序
 */
void insertSort(SeqList R,int n){
  int i,j;
  for(i=2;i<=n;i++){
	  if(R[i].key<R[i-1].key){
		  R[0].key = R[i].key;
		  for(j=i-1;R[0].key < R[j].key;j--){
			  R[j+1] = R[j];
		  }
		  R[j+1] = R[0];
	  }
  }
}


/**
 * 希尔插入排序
 * R:序列
 * dk:增量
 * n:元素总数
 */
void shellInsert(SeqList R,int dk,int n){
	int i,j;
	for(i=dk+1;i<=n;i++){
		if(R[i].key < R[i-1].key){
			R[0] = R[i];
			j = i-dk;
			while(j>0&&R[0].key < R[j].key){
				R[j+dk] = R[j];
				j = j-dk;
			}
			R[j+dk] = R[0];
		}
	}

 void shellSort(SeqList R,int d[],int t,int n){
	 int k;
	 for(k=0;k<t;k++){
		 shellInsert(R,d[k],n);
	 }
 }


}
