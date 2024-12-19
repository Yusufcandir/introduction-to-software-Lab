#include<stdio.h>

// function declaration
int multiply(int a, int b);
int factorialFor(int number);
int factorialWhile(int number);
int FactorailRecursive(int number);
int fibonacciFor(int number);
int fibonacciWhile(int number);
int fibonacciRecursive(int number);
int main(){
   
    /*int result = multiply(5, 10);
    printf("Result : %d\n", result);*/

    int fibonacci_7 = fibonacciRecursive(7);
    printf("Fibonnacci: %d\n", fibonacci_7);  

    return 0;
}


// function definition
int multiply(int a, int b){
    return a*b;
}

int factorialFor(int number){
    if (number<0){
        return 0;
    }
    if (number == 1){
        return 1;
    }
    int result = 1;
    for(int i =1; i<=number; i++){
        result = result * i;
    }
return result;
}

int factorialWhile(int number){
    if(number == 0){
        return 1;
    }

    int result = 1;
    while(number>0){
        result = result*number;
        number--;
    }

    return result;
}

int FactorailRecursive(int number){
    if(number==1 || number ==0){
        return 1;
    }

    return number * FactorailRecursive(number-1);
}

int fibonacciFor(int number){
    int first =1, second =1, result = 0;
    if(number == 1 || number == 2){
        return 1;
    }
    for(int i=3; i<=number; i++){
        result  = first + second;
        first = second;
        second = result;
    }
    return result;
}

int fibonacciWhile(int number){
    if(number == 1 || number == 2){
        return 1;
    }
    int first =1, second=1, result =0;
    while(number>2){
        result  = first + second;
        first = second;
        second = result;
        number--;
    }

   return result;      
}

int fibonacciRecursive(int number) {
    if (number == 1 || number == 2) {
        return 1;
    }
    return fibonacciRecursive(number - 1) + fibonacciRecursive(number - 2);
}
