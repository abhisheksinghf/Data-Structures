#include <stdio.h>
int isPrime(int n)
{
    int i;
    if (n == 1)
    {
        return 0;//k1
    }
    for (i = 2; i * i < n; i++)
    {
        if (n % i == 0)  //k2
            return 0;
    }
    return 1;
}
int main()
{
    int n = 4;
    int res = isPrime(n);
    printf("%d",res);
    return 0;
}
// Time Complexity Analysis

// k1 + k2(root n) runs till root n
//O(root/n)