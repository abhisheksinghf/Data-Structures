#include<stdio.h>
//Tips to find time complexity
// 1.Drop the non dominant term
// 2.Drop the constant term
// 3.Break the code into fragments

void func1(int *arr,int size)
{
    int sum,prod,i;//fragment-1 (f1)
    for ( i = 0; i < size; i++)//<-- Fragment-2 (f2)
    {
        sum+=arr[i];
    }//-->
    printf("\n");
    for ( i = 0; i < size; i++)//<-- Fragment-3 (f3)
    {
        prod*=arr[i];
    }//-->
    printf("Sum = %d",sum);
    printf("Product = %d",prod);
}
int main()
{
    int arr[] = {10,20,30,40};
    int size = 4;
    func1(arr,size);
    return 0;
}
//refer notes
// f1 = k1
// f2 = k2n 
// f3 = k3n
// Tn = f1 + f2 + f3
//    = k1 + k2n + k3n //drop non-dominant term
//    =n(k2+k3)
//    =n(k4)//k4 = k2+k3
   
//length(size) is n means dont know
//    time complexity is O(size) or O(n)