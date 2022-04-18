#include <stdio.h>

int N = 0;
int f = 0;
int r = 0;
char S[3000];
char T[3000];

int stringmaker(int fn, int rn){
  if(S[fn] > S[N-rn-1]){
    return 1;
  }
  else if(S[fn] < S[N-rn-1]){
    return 0;
  }
  else if(S[fn] == S[N-rn-1]){
    stringmaker(fn+1, rn+1);
  }
}

main(){
  scanf("%d", &N);
  for(int i = 0;i<N;i++){
    scanf(" %c", &S[i]);
  }
  for(int i = 0;i<N;i++){
    if (stringmaker(f, r) == 1){
      T[i] = S[N-r-1];
      r++;
    }
    else if(stringmaker(f, r) == 0){
      T[i] = S[f];
      f++;
    }
  }
  for(int i = 0;i<N;i++){
    printf("%c", T[i]);
    if((i+1)%80 == 0){
      printf("\n");
    }
  }
}
