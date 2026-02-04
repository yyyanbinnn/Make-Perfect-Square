#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//declaration
int isPrime(int);
int generateRandomNonPrime();
void printFactorization(char *, int);
int isPerfectSquare(int);
int findSmallestNum3(int, int);

//main
int main(void) 
{
srand((unsigned)time(NULL));
printf("===Make Perfect Square===\n\n");

  while (1)
  { 
    //generation of two non-prime integers between 1 and 20
    int num1 = generateRandomNonPrime();
    int num2 = generateRandomNonPrime();
    printf("Two non-prime integers between 1 and 20 are:\n");
    printFactorization("num1:", num1);
    printFactorization("num2:", num2);
    printf("\n");

    //user input for num3
    int num3;
    do 
    {
      printf("Enter num3: ");
      scanf("%d", &num3);
    } 
    while (num3 <= 0);
    printFactorization("num3:", num3);
    printFactorization("num1 X num2 X num3:", num1*num2*num3);
    printf("\n");

    //find the smallest num3 that makes num1 X num2 X num3 a perfect square
    int correct = findSmallestNum3(num1, num2);
    if (num3 == correct)
    {
      printf("Correct!\n");
      printf("%d is the smallest num3 that makes num1 X num2 X num3 a perfect square.\n", correct);
    }
    else
    {
      printFactorization("Wrong! The correct num3 is", correct);
      printFactorization("num1 X num2 X num3:", num1*num2*correct);
      printf("%d is the smallest num3 that makes num1 X num2 X num3 a perfect square.\n", correct);
    }
    printf("\n");

    //user input for continueFlag
    printf("Enter Y to play again or any other key to quit:");
    int continueFlag;
    do
    {
      continueFlag = getchar();
    } while (continueFlag == '\n' || continueFlag == '\r');
    
    printf("\n\n");
    if (continueFlag != 'Y' && continueFlag != 'y') {
      printf("Goodbye!\n");
      break;
    }
  }
  return 0;
}


//define
//function to check if a number is prime
int isPrime(int num)
{
  int i;
  if(num <= 1)
  {
    return 0;
  }
  for (i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

//function to generate a random non-prime integer between 1 and 20
int generateRandomNonPrime()
{
  int randomNum;
  while (1) 
  {
    randomNum = rand() % 20 + 1;
    if (!isPrime(randomNum)) 
    {
      return randomNum;
    }
  }
}

//function to print the factorization of a number
void printFactorization(char *label, int num)
{
  int i;
  printf("%-28s %d = ", label, num);
  int first = 1;
  int originalNum = num;

  for (i = 2; i <= originalNum; i++)
  {
    while (num % i == 0)
    {
      if (!first) printf(" X ");
      printf("%d", i);
      num /= i;
      first = 0;
    }
  }
  if (first) printf("%d", num);
  printf("\n");
}

//function to check if a number is a perfect square
int isPerfectSquare(int num)
{
  int sqrtNum = (int)sqrt(num);
  return (sqrtNum * sqrtNum == num);
}

//function to find the smallest num3 that makes num1 X num2 X num3 a perfect square
int findSmallestNum3(int num1, int num2)
{
  int num3 = 1;
  while (1)
  {
    if (isPerfectSquare(num1*num2*num3))
    {
      return num3;
    }
    num3++;
  }
}
