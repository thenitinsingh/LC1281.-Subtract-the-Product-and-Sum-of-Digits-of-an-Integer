# LC1281.-Subtract-the-Product-and-Sum-of-Digits-of-an-Integer

Subtract the Product and Sum of Digits of an Integer
-----------------------------------------------------

The idea is to take user input of a number, and then:
(1)find the product of the digits of the number.
(2)sum of the digits of the number.
(3) subtract (1) from (2).

-------------------------------------------------------

To find either sum or product of number, we first need to read
each digit one-by-one. For doing so, perform modulus operation 
by 10 which will give the last digit and then make the number 10
times lesser than its original value.

Eg.: Let number be 234,
     when we take the modulus by 10, on the first iteration 4 
is obtained, and reduce it by 10 times, 23 becomes the new number.
Now, a variable for product which is initialized to 1 and for sum to 0,
is multiplied and added respectively by result of modulus

int temp,prod=1,sum=0;
temp=number%10;
prod=prod*temp
sum=sum+temp

The same process is repeated till number does not become 0, as 
n=n/10 for n<10 will be 0, and modulus is calculated before dividing 
the number. Loop is hence made to terminate when it reaches the last 
digit of the number.

Then the final value of product and sum are subtracted.

result=prod-sum;

-------------------------------------------------------------

Algorithm:
    int temp;
    int prod = 1;
    int sum = 0;
    while (n != 0)
    {
        temp = n % 10;
        prod = prod * temp;
        sum = sum + temp;
        n = n / 10;
    }
    int result = prod - sum;
    return result;
