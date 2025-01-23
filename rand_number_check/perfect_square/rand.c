#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void checkArmstrong(int num);// Function prototype
int createrand(void); // Function prototype
void createarray(int arr[]); // Function prototype
void checkPerfectSquare(int num); // Function prototype
void checkPrime(int num); // Function prototype
void checkPerfect(int num);// Function prototype
void checkFibonacci(int num);
void checkTwoDigit(int num);
long long int toBinary(int num);

void findPrimeVectors(int num);
void sumOfDigits(int num);
int recursionFibonacci(int num);

int reverseNumber(int num); // Function prototype
int main(void) {
    srand(time(NULL)); // Seed the random number generator with the current time

    int numbers[5];

    createarray(numbers);

    for (int i = 0; i < 5; ++i) {
        
    }

    return 0;
}

// Write the createrand function here
int createrand(void) {
    return (  rand() % 10 +1);
}
// Write the createarray function here
void createarray(int arr[]) {

    for (int i = 0; i < 5; i++)
    {
        arr[i] = createrand();
    }
}
void checkPerfectSquare(int num) {

    int result = sqrt(num);

    if (result * result == num) {

        printf("%d is a perfect square number\n", num);
    }
    else
    {
        printf("%d is not a perfect square number\n", num);
    }



}
void checkPrime(int num) {
    int counter = 0;
    for (int i = 2; i < num/2; i++)
    {
        if (num%i==0)
        {
            counter++;
        }
    }

    if (counter == 0&& num >1) {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }

}
void checkArmstrong(int num) {
           int numcopy1 = num, sum1 = 0;
        while (numcopy1 != 0)
        {
            sum1++;
            numcopy1 /= 10;


        }
    int numcopy = num,sum=0;
    while (numcopy!=0)
    {
       
        int a = numcopy % 10;
        sum = sum + pow(numcopy%10,sum1);
        numcopy /= 10;
    }

    if (sum == num)
    {
        printf("%d is a armstrong number\n", num);
    }
    else
    {
        printf("%d is not a armstrong number \n", num);
    }




}
void checkPerfect(int num) {
    int sum=0;
    for (int i = 1; i < num; i++)
    {
        if (num%i == 0)
        {
            sum = sum + i;
        }

    }
    if (sum == num)
    {
        printf("%d is a perfect number \n",num);
    }
    else
    {
        printf("%d is not a perfect number \n",num);
    }


}
void checkFibonacci(int num){
    int num1 = 0, num2 = 1,sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
        if (sum==num)
        {
            printf("%d is a fibonacci number\n", num);
            break;
        }
        else if (sum > num) {
            printf("%d is not a fibonacci number\n", num);
            break;
        }
    }






}
int reverseNumber(int num) {
    int numcopy = num, result = 0;
    while (numcopy != 0) {
        result = result * 10 + numcopy % 10;
        numcopy /= 10;

    }
   
    return result;



}
void checkTwoDigit(int num) {
    int numcopy = num, digitsize=0;
    while (numcopy!=0)
    {
        numcopy /= 10;
        digitsize++;

    }
    if (digitsize %2==0)
    {
        printf("%d has %d  digit\n",num,digitsize);
    }
    else
    {
        printf("%d has %d  digit\n", num, digitsize);
    }
}
void findPrimeVectors(int num) {
    int i = 2; printf("prime vectors of %d : ", num);
    while (num != 1) {
       
        if (num%i==0)
        {
            num = num / i;
            printf("%d ", i);
        }
        else
        {
            i++;
        }
    }puts("");



}
void sumOfDigits(int num) {
    int numcopy = num, sum = 0;
    while (numcopy != 0)
    {
        sum = sum + numcopy % 10;
        numcopy /= 10;
        

    }
    printf("%d sum of digits is %d \n", num ,sum);
}
int recursionFibonacci(int num) {
    int sum = 0;
    if (num == 0 || num == 1) {
        return 1;
    }
    else
    {
        return recursionFibonacci(num - 1) + recursionFibonacci(num - 2);
    }
}
long long int toBinary(int num) {
   static long  binaryNo = 0, remainder,factors = 1;;
  
    if (num!=0)
    {
        remainder = num % 2;
        binaryNo = binaryNo + remainder * factors;
        factors *= 10;
        toBinary(num / 2);
         }


    return binaryNo;

}