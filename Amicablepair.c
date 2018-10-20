#include <stdio.h>
  
int divSum(int n) 
{ 
    int result = 0; 
    
    for (int i = 2; i <= sqrt(n); i++) 
    { 
        if (n % i == 0) 
        { 
            if (i == (n / i)) 
                result += i; 
            else
                result += (i + n/i); 
        } 
    } 
    
    return (result + 1); 
} 
    
int areAmicable(int x, int y) 
{ 
    if (divSum(x) != y) 
       return 0; 
  
    return (divSum(y) == x); 
} 
  
int main() { 
    int x = 220, y = 284; 
    if (areAmicable(x, y)) 
       printf("Yes"); 
    else
       printf("No"); 
    return 0; 
}
