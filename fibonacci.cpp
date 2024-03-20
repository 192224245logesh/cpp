#include<iostream>
int fibo(int n)
{
    if(n == 1 || n== 0)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
 int main ()
 {
    int n;
    std::cout<<"enter the no of terms in the series :";
    std::cin>>n;
    std::cout<<"the series :";
    for(int i=0;i<n;i++)
    {
        std::cout<<" "<<fibo(i);
    }
    return 0;
 }
