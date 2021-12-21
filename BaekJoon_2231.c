#include <stdio.h>

int n = 0;
int root = 0;
int output = 0;
int roop_val = 0;

int main(){
  scanf("%d", &n);
  for(int i = 0;i<10;i++){
    for(int j = 0;j<10;j++){
      for(int k = 0;k<10;k++){
        for(int l = 0;l<10;l++){
          for(int m = 0;m<10;m++){
            for(int p = 0;p<10;p++){
              for(int o = 0;o<10;o++){
                root = 1000000*i + 100000*j + 10000*k + 1000*l + 100*m + 10*p + o;
                if(((root + i + j + k + l + m + p + o) == n)&&(roop_val == 0)){
                  output = root;
                  roop_val = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  printf("%d", output);
  return 0;
}
