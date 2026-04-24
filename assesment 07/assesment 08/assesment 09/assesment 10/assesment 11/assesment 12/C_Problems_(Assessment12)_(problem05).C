#include <stdio.h>
#include <string.h>

int main() {
    char n1[55], n2[55];
    int res[110] = {0}; 
    
    scanf("%s %s", n1, n2);
    int len1 = strlen(n1), len2 = strlen(n2);

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (n1[i] - '0') * (n2[j] - '0');
            int sum = mul + res[i + j + 1];

            res[i + j + 1] = sum % 10;  
            
            res[i + j] += sum / 10;      
            
        }
    }

    int start = 0;
    while (start < (len1 + len2) && res[start] == 0) start++;
    for (int k = start; k < (len1 + len2); k++) printf("%d", res[k]);

    return 0;
}