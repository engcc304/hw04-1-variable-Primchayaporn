/*
    จงแสดงผลตัวแปรทั้งหมดเรียงลำดับดังนี้ a b c d

    Output:
        10 20.0 Haha a
*/
#include <stdio.h>

int main() {
  int a = 10 ;
  float b = 20 ;
  char c[] = "Haha" ;
  char d = 'a' ;

  printf( "%d %.1f %s %c/n", a, b, c, d) ; 

  return 0 ;
}
