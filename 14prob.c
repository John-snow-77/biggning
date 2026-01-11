#include<stdio.h>

void checknum(int N) {
    if (N==0) {
        printf("zero\n");
    }
    else if ( N < 0) {
        printf("negative");
    
    }
    else  {
        printf("positive");
    }

}
int main() {
    int N = 5;
    checknum(N);
return 0;
}