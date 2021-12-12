#include <stdio.h>
#include <string.h>

int n = 0;
int m = 0;
int buf = 0;
int input[100];

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
  return 0;
}
