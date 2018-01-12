#include <stdio.h>
#include <cs50.h>
/**
    Implement a program that determines whether a provided credit card number is valid according to Luhn's algorithm.
**/
int mutiple(int n);
int main(void)
{
    long long n;
    int count=1;
    int even=0;
    int odd=0;
    int sum=0;
    int first_digit;
    do
    {
        printf("Number: ");
        n = get_long_long();
        while(n){
            int temp=n%10;
            //printf("%lld",n%10);
            if(count%2==0){
                even+=mutiple(temp);
            }
            else{
                odd+=temp;
            }
            n/=10;
            if(n==0){
                first_digit=temp;
            }
            count++;
        }
        sum=odd+even;
        count-=1;
        if(first_digit==3&&count==15&&(sum%10==0)){
            printf("%s\n","AMEX");
        }
        else if(first_digit==5&&count==16&&(sum%10==0)){
            printf("%s\n","MASTERCARD");
        }
        else if(first_digit==4&&(count==13||count==16)&&(sum%10==0)){
            printf("%s\n","VISA");
        }
        else{
            printf("%s\n","INVALID");
        }
        //printf("%d,%d\n",count,first_digit);
        //printf("%d\n",sum);
    }
    while (n<0);

}
int mutiple(int n){
    int add=0;
    int temp=n*2;
    if((temp/10)>0){
        while(temp){
            add+=(temp)%10;
            temp/=10;
        }
        return add;
    }
    else{
        add=temp;
        return add;
    }
}
//test case:378282246310005
