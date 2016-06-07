```c
    #include <stdio.h>

    void inplace_swap(int *x, int *y) {
        *y = *x ^ *y;
        *x = *x ^ *y;
        *y = *x ^ *y;
    }

    void reverse_array(int a[], int cnt) {
        int start, end;
        for (start = 0, end = cnt - 1; start <= end; start++, end--) {
            if(a[start] != a[end]){
                inplace_swap(&a[start], &a[end]);
            }
        }
    }

    int main() {
        int a[5] = {1, 2, 3, 4, 5};

        reverse_array(a, sizeof(a) / sizeof(int));

        for(int i=0; i<5; i++) {
            printf("%d", a[i]);
            printf("\n");
        }
        return 0;
    }
```

奇数时候最后一次循环就是中间的数字, xor交换根据 a^a=0 所以中间那个数就成0了 