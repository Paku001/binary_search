#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void main() {
    int n,arr[SIZE],i,find,temp,low,high,mid;
    printf("Enter number of array: ");
    scanf("%d",&n);
    printf("enter the array elements in ascending order: \n");
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Array elements are: \n ");
    for (i=0; i<n;i++) {
        printf("%d ",arr[i]);
    }

    printf("\nEnter the number to be found: ");    /* there is no error handling in this code */
    scanf("%d",&find);

    low = 0;
    high = n-1;

    mid = (high+low)/2;

    while (arr[mid] != find) {
        if (find < arr[mid]) {
            high = mid;
        }
        else if(find > arr[mid]) {
            low = mid;
        }
        else if (arr[mid] == find){
            break;
        }
    
        mid = (high+low)/2;
        
    }

    printf("element %d is in %d place",find,mid+1);

}