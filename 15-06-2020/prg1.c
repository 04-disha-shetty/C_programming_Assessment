
#include <stdio.h>

void distict_elements(int a[], int n);
int main()
{
    int size_array, i, arr[20];
    // Get the array size
    printf("enter the array size\n");
    scanf("%d", &size_array);
    // Get the array elements
    printf("enter the array elements\n");
    for(i=0; i<size_array; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Function call to print the distinct elements in an array
    distict_elements(arr, size_array);
    return 0;
}
void distict_elements(int a[], int n)
{
    int i, j;
    printf("The distinct array elements are:\n");
    // Pick all elements one by one
    for (i=0; i<n; i++)
    {
        // Check if the picked element is already printed
        for (j=0; j<i; j++)
        {
            if (a[i] == a[j])
                break;
        }
        // If not printed earlier, then print it
        if (i == j)
            printf("%d\t", a[i]);
    }
}
