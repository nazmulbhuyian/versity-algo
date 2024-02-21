#include<stdio.h>
int main()
{
    int n, temp;
    printf("Enter the number of number: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
        
    }
    
    printf("Sorted list in ascending order:\n");

    for (int i = 0; i < n; i++)

    {

        printf("%d\n", arr[i]);
    }

    return 0;
}