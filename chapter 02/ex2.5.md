```c
    
    int iVal = 0x87654321;
    byte_pointer pVal = (byte_pointer)&iVal;
    show_bytes(pVal, 1); // A
    show_bytes(pVal, 2); // B
    show_bytes(pVal, 3); // C
    
```

A 小端法: 21        大端法: 87
B 小端法: 21 43     大端法: 87 65 
C 小端法: 21 43 65  大端法: 87 65 43