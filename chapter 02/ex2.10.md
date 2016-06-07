```c
    void inplace_swap(int *x, int *y) {
        *y = *x ^ *y;  /* step1 */
        *x = *x ^ *y;  /* step2 */
        *y = *x ^ *y;  /* step3 */     
    }    
```

| 步骤  | \*x       | \*y   | 
|:--——:|:---------:|:------:|
| 初始  |  a        |  b    |
| 第一步 |  a       | a ^ b |
| 第二步 | a ^ a ^ b| a ^ b |
| 第三步 |  b       |    a  |
