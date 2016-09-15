#include<bits/stdc++.h>
using namespace std;

int processArray(int array[], int len) {
  /*
   * Do not make any changes outside this function.
   *
   * Modify this function to process `array` as indicated
   * in the question. At the end, return the appropriate
   * value.
   *
   * Do not print anything in this function
   * Do not write anything to the standard output
   *
   * Submit this entire program (not just this function)
   * as your answer
   */
   int counteve=0;
   vector<int> store;
   //memset(store,0,sizeof(store));
   for(int i=0;i<=len;i++)
   {
       if(array[i]%2==0)
        counteve++;
       else
        {
            if(counteve!=0)
            {
                store.push_back(counteve);
            cout<<"\ncount "<<counteve;
            counteve=0;
            }
        }
   }
   int avg=0,sum=0,size=store.size();
   for(int i=0;i<size;i++)
   {
       sum+=store[i];
   }
   avg=sum/size;
  return avg;
}

int main() {
  int *array;
  int len = 0, maxsize = 1024, i, input;
  int result;
  array = (int *)malloc(maxsize*sizeof(int));
  while(scanf("%d", &input) == 1) {
    if (input < 0) break; /* Stop when a negative number is entered */
    array[len++] = input;
    if (len == maxsize) { /* array is full. increase size */
      maxsize *= 2;
      array = (int *)realloc(array, maxsize*sizeof(int));
    }
  }
  result = processArray(array, len);
  printf("%d\n", result);
  return 0;
}

