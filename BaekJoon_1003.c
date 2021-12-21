#include <stdio.h>
#include <math.h>

int case_num = 0;
int input[10000000];
double fib = 0;
int f = 0;
int b = 0;
int cal = 0;

int fibonacci(int n){
    if(n == 1){
      return 0;
    }
    else if(n == 2){
      return 1;
    }
    else{
      f = 0;
      b = 1;
      for(int j = 0;j<n - 2;j++){
        cal = f + b;
        f = b;
        b = cal;
      }
      return cal;
    }
}

main(){
  scanf("%d", &case_num);
  for(int i = 0;i<case_num;i++){
    scanf("%d", &input[i]);
  }
  for(int i = 0;i<case_num;i++){
    if(input[i] == 0){
      printf("1 0\n");
    }
    else if(input[i] == 1){
      printf("0 1\n");
    }
    else{
      printf("%d %d\n", fibonacci(input[i]), fibonacci(input[i] + 1));
    }
  }
}
