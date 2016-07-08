```c
    int strlonger(char *s, char *t){
        return strlen(s) - strlen(t) > 0;
    }
```

A. 在第一个字符串长度比第二个短时会产生错误结果

B. 无符号数运算当值为负数的时候会产生一个大的数字并且大于0

C. 改为 return strlen(s) > strlen(t);