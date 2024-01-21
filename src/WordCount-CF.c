#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#define TEXT_STATE          0
#define SPCH_STATE          1





int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int state = SPCH_STATE;
    int i, n, count;
    char str[1000000];
    
    scanf("%d", &n);
    //scanf("[^\n]%s");
    //gets(str);
    scanf(" %[^\n]%*c",str);
    
    //printf("%d", 'z');
    
    count = 0;
    for(i = 0; i < n; i++)
    {
        if(((65 <= str[i]) && (str[i] <= 90)) || ((97 <= str[i]) && (str[i] <= 122)))
        {
            if(state == TEXT_STATE)
            {
                continue;
            }
            else
            {
                state = TEXT_STATE;
                count++;
                continue;
            }
        }
        else
        {
            if(state == TEXT_STATE)
            {
                state = SPCH_STATE;
                continue;
            }
            else
            {
                continue;
            }
        }
    }
    
    
    printf("%d", count);
    
    return 0;
}
