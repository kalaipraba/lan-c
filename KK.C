#include <stdio.h>
#include <stdlib.h>
void main()

int f_mark(int n) { return (n+9) - ((n+9)%10); }                  
int f_bta(int n) { return ((n + 9) / 10) * 10; }                   

int f_klatchko(int n) { return n + 10 - n % 10; }                  
int f_ignacio(int n) { return n + (((9 - (n % 10)) + 1) % 10); }  
int roundup10_utaal(int n) {  return ((n - 1) / 10 + 1) * 10; }

int f_branch(int n) { if (n % 10) n += (10 - n % 10); return n; }  

int main(int argc, char**argv)
{
    puts("i\tmark\tigna\tutaal\tbta\tklatch\tbranch");
    for (int i=-25 ; i<25 ; i++)
    if (abs(i%10) <= 2 || 10 - abs(i%10) <= 2)  
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", i, f_mark(i), f_accepted(i),
           f_ignacio(i), roundup10_utaal(i), f_bta(i), f_branch(i));
           getch();
}
