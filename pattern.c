#include<stdio.h>
void staircase(int n) {
    /*
     * Write your code here.
     */
    for(int i=0;i<n;i++)
    {
    
        for(int j=n-1;j>=(n-1)-i;j--)
        {
            printf("#");
        }
        printf("\n");
    }

}

int main() {
  staircase(4);
return 0;
}

