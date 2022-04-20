#include <stdio.h>
#include <math.h>

main(){
  int N = 0;
  int M = 0;
  int num = 0;
  int dialnum = 0;
  int dial[250000];
  int sum[250000] = {0};
  int A = 0;
  int B = 0;

  scanf("%d %d", &N, &M);
  scanf("%d", &dialnum);
  for(int i = 0; i<N; i++){
    dial[N-i-1] = dialnum%10;
    dialnum /= 10;
  }
  for(int i = 0; i<M; i++){
    scanf("%d %d", &A, &B);
    for(int j = A-1; j<B; j++){
      sum[i] += dial[j];
      dial[j]++;
      if(dial[j] == 10){
        dial[j] = 0;
      }
    }
  }
  for(int i = 0;i<M;i++){
    printf("%d\n", sum[i]);
  }
}
