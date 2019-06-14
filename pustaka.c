#include "pustaka.h"
// DICKY IBROHIM
BinarySearch(int A[],int K)
{
int L=0;
int R=n-1;
int m;

while (L<=R)
    {
        m= (L+R)/2;
        if (K==A[m])
            {
                return m;


            }
        else if (K<A[m])
            {
                R=m-1;
            }
        else
            {
                L=m+1;
            }
    }
    return -1;
}

   // LOOPING FOR SWAP OR BUBBLE SORT
   int loopasc(int myarray [], int manydata)
   {    int loop1, loop2, swap;
        for (loop2=0; loop2<manydata-1;loop2++)
        {   // Condition to cek data in Sorting proccess if SORTED, do "Stop Literation if Data Sorted"

            for (loop1=0;loop1<manydata-loop2-1;loop1++)
                {
                    // Just Command or Coe to Swapping Data
                    if (myarray[loop1]>myarray[loop1+1]) // Example: Ascending, Index0, More than Index1 Do Swap.
                        {                                // If You want to change to DESCENDING. Just Change ">" to "<"
                            swap = myarray[loop1]; // myarray[loop1] input to swap
                            myarray[loop1] = myarray [loop1+1]; //myarray [loop1+1] input to myarray[loop1]
                            myarray[loop1+1] = swap; // swap input to myarray[loop1+1]
                        }
                }

   }
   }


