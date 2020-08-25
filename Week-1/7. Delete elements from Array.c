#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, m,i;
    scanf("%d ",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
    scanf("%d ",&m);
    for(i=m;i<n-1;i++)
    {
            a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
        printf("%d\n", a[i]);
    return 0;
}
