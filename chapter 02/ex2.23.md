```c
    int func1(unsigned word){
        return (int)((word << 24) >> 24);
    }

    int func2(unsigned word){
        return ((int)word << 24) >> 24;
    }
```

|      word      |     func1   |     func2    |
|:--------------:|:-----------:|:------------:|
| 0x00000076     |   0x00000076|  0x00000076  |
| 0x87654321     |   0x00000021|  0x00000021  |
| 0x000000C9     |   0x000000C9|  0xFFFFFFC9  |
| 0xEDCBA987     |   0x00000087|  0xFFFFFF87  |