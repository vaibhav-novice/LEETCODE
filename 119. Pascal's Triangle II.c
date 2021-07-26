

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
__int128 factorial(int n){
    if (n == 0) return 1;
    return n * factorial(n-1);
}

int choose(int n, int k){
    return factorial(n)/((factorial(k))*(factorial(n-k)));
}
int* getRow(int rowIndex, int* returnSize){
 *returnSize = (rowIndex + 1);
    int * result;
    result = malloc(*returnSize * (sizeof(int)));
    for (int i = 0; i <= rowIndex; i++){
        result[i] = choose(rowIndex,i);
    }
    for (int j = 0; j <= rowIndex; j++) printf("%d", result[j]);
    printf("\n");
    return result;
}
