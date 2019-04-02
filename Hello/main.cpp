#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define NUM 5

int MyCompare(const void * elem1, const void * elem2){
    unsigned int * p1, *p2;
    p1=(unsigned int*)elem1;
    p2=(unsigned int*)elem2;

    return (*p1%10)-(*p2%10);
}

int main()
{
    unsigned int arr[NUM]={ 10, 23, 71, 15, 88};
    qsort(arr, NUM, sizeof(unsigned int), MyCompare);
    for(int i=0; i<NUM; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
