#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, need, win_size, start, idx, sum;
    int arr[1000000];
    
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &need);
    
    for(win_size = n - 1; win_size >= 0; win_size--) {
        for(start = 0; start <= (n - win_size); start++) {
            sum = 0;
            for(idx = 0; idx < n; idx++) {
                if((idx < start) || (idx >= (start + win_size))) {
                    sum += arr[idx];
                }
            }
            if(sum >= need) {
                printf("%d", n - win_size);
                return 0;
            }
        }
    }
    // NEVER REACHES HERE
    
    return 1;
}
