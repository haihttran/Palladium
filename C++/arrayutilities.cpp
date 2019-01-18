#include <iostream>
#include <stack>
using std::cin;
using std::cout;
using std::endl;
using std::stack;

void print_array(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int sum(int array[], int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += array[i];
    }
    return sum;
}

int factorial(int num){
    int r = 1;
    if(num>0){
        for(int i=num;i>0;i--){
            r*= i;            
        }
    }
    return r;
}

void reverse(int array[], int size){
    // int a[size];
    stack<int> s;
    for(int i=0;i<size;i++){
        // a[i] = array[size-i-1];
        s.push(array[i]);
    }
    int count = 0;
    while(!s.empty()){
        array[count] = s.top();
        s.pop();
        count++;
    }
    // for(int j=0;j<size;j++){
    //     array[j] = a[j];
    // }
}

void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	/* create temp arrays */
	int L[n1], R[n2]; 

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray 
	j = 0; // Initial index of second subarray 
	k = l; // Initial index of merged subarray 
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	/* Copy the remaining elements of L[], if there 
	are any */
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	/* Copy the remaining elements of R[], if there 
	are any */
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 

void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) 
	{ 
		// Same as (l+r)/2, but avoids overflow for 
		// large l and h 
		int m = l+(r-l)/2; 

		// Sort first and second halves 
        // printf("sort first half of [%d,%d]\n", l, m);
		mergeSort(arr, l, m); 
        // printf("sort second half of [%d,%d]\n", m+1, r);
		mergeSort(arr, m+1, r); 
        // printf("merge 2 halves of [%d,%d] and [%d,%d]\n", l, m, m+1, r);
		merge(arr, l, m, r); 
	} 
}