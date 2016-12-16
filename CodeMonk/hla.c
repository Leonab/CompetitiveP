#include<stdio.h>
#include<stdlib.h>
//using namespace std;

void swap(long int* a, long int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (long int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int j,i = (low - 1);  // Index of smaller element

    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(long int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        int n,k,x,y;scanf("%d",&n);
        long int a[n];
        //long int d[100000]={0};
        for(k=0;k<n;k++)
        {
         scanf("%li",&a[k]);
         //d[a[i]]++;
        }
        //sort(a,a+n);
        /*for(x=0;x<n;x++)
        {
        	for(y=x;y<n-x-1;y++)
        	{
        		if(a[y]>a[y+1])
        		{
        			int temp = a[y];
        			a[y] = a[y+1];
        			a[y+1] = temp;
        		}
        	}
        }*/
        quickSort(a,0,n-1);
        int i=1,j=n;
        while(i<j)
        {
            if(a[i]!=a[0])
                break;
            i++;
        }
        if(i%2)
            printf("%s\n","Lucky");
        else
            printf("%s\n","Unlucky");
    }
    return 0;
}
