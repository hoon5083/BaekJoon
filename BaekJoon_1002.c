#include <stdio.h>
#include <math.h>

int T = 0;
int x1 = 0;
int x2 = 0;
int y11 = 0;
int y22 = 0;
int r1 = 0;
int r2 = 0;
int d_sq = 0;
int result[1000000];

main(){
  scanf("%d", &T);
  for(int i = 0;i<T;i++){
    scanf("%d %d %d %d %d %d", &x1, &y11, &r1, &x2, &y22, &r2);
    d_sq = ((x1-x2)*(x1-x2))+((y11-y22)*(y11-y22));
    if((d_sq == 0)&&(r1 == r2)){
      result[i] = -1;
    }
    else if((d_sq == (r1+r2)*(r1+r2))||(d_sq == (r1-r2)*(r1-r2))){
       result[i] = 1;
    }
    else if((d_sq > (r1+r2)*(r1+r2))||(d_sq < (r1-r2)*(r1-r2))){
      result[i] = 0;
    }
    else{
      result[i] = 2;
    }
  }
  for(int j = 0;j<T;j++){
    printf("%d\n", result[j]);
  }
}
