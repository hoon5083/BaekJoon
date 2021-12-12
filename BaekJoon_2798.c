#include <stdio.h>
#include <string.h>

int n = 0;
int m = 0;
int buf = 0;
int input[100];
int combination[1000000];
int count = 0;
int min = 100000;

int main(){
  scanf("%d %d", &n, &m);
  for(int j = 0; j<n;j++){
    scanf("%d", &input[j]);
  }
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n-i-1; j++){
      if(input[j]>input[j+1]){
        buf = input[j];
        input[j] = input[j+1];
        input[j+1] = buf;
      }
    }
  }
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      for(int k = 0;k<n;k++){
        if((i != j)&&(j != k)&&(k != i)){
          combination[count] = input[i]+input[j]+input[k];
          count++;
        }
      }
    }
  }
  for(int i = 0; i<count; i++){
    if(((m - combination[i]) < min)&&((m - combination[i])>=0)){
      min = m - combination[i];
    }
  }
  printf("%d", m - min);
  return 0;
}
