```c
    float sum_elements(float a[], unsigned length){
        int i;
        float result = 0;
        for (i = 0; i <= length - 1; i++){
            result += a[i];
        }
        return  result;
    }
```

length为0时length-1会进行无符号运算循环终止条件就会成为 i <= Umax 数组就会越界