#include <stdio.h>
#include <stdlib.h>

random(int a)
{
    int i;
    int n = (rand() % (a + 1));

    return n;
}
func3(int n)
{
    int i; //constant frag1 = k1 = 0
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        i = random(n - 1); //
        printf("this\n");
        return func3(i) + func3(n - 1 - i);
    }
}
int main()
{
    int n = 6;
    func3(n);
    return 0;
}