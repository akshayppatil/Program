#include <stdio.h> // declare header file

// Swap function defination
void swap(int *a, int *b)
{
    int temp;   // Initialize the 3rd variable

    // swap two numbers with the help of tempurary variable
    temp = *a;
    *a = *b;
    *b = temp;
}

// sort function defination
int *sort(int *a, int p)
{
    for (int i = 1; i <= p; i++)
    {
        int k = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[k] < a[j])
            {
                swap(&a[k], &a[j]);
                k--;
            }
        }
    }
    return a;
    //for(int i=0;i<5;i++)
    //printf("%d\n",a[i]);
}


// Introduction of main function
int main()
{
    int a[] = {5, 1, 4, 2, 8};  // Initialize and delare the value of the array

    int *p = sort(a, 5);    // call the sort function & store the value on p pointer

    for (int i = 0; i < 5; i++)
        printf("%d\n", p[i]);
    
    return 0;
}
