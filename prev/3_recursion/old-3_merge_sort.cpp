#include <bits/stdc++.h>
using namespace std;

void merge(int A[],int L, int mid,int U){
	// 0,2,2,4
	int left = mid;
	int right = mid;

	int left_counter =0;
	int right_counter =0;

	int sorted_array[U-L];
	int array_index=0;

	int flag_L=0;
	int flag_R=0;// if 1 means there are items left in that array

	while(1){
		if(L+left_counter>=left) {flag_R=1;break;}
		if(right+right_counter>=U) {flag_L=1; break;}

		if(A[L+left_counter]>A[right+right_counter]){
			sorted_array[array_index]=A[right+right_counter];
			right_counter++;
		}
		else{
			sorted_array[array_index]=A[L+left_counter];
			left_counter++;
		}
		array_index++;
	}
	if(flag_R){
		// cout<<"flag_R"<<right_counter<<array_index<<endl;
		while(right+right_counter<U){
			sorted_array[array_index] = A[right+right_counter];
			array_index++;
			right_counter++;
		}
	}
	else{
		// cout<<"flag_L"<<endl;
		while(L+left_counter<left){
			sorted_array[array_index]=A[L+left_counter];
			left_counter++;
			array_index++;
		}
	}
	
	for(int i=0;i<U-L;i++){
		A[i+L] = sorted_array[i];
	}
}

void merge_sort(int A[],int L,int U){
	if(U-L<=1)
		return ;
	int mid = (L+U+1)/2;
	merge_sort(A,L,mid);
	merge_sort(A,mid,U);
	merge(A,L,mid,U);
}

int main(){
	int N =6;
	int A[N]={5,4,3,2,1,0};
	merge_sort(A,0,N);
	for(int i=0;i<N;i++){
		cout<<A[i]<<endl;
	}
}