x: 0x66 0110 0110

y: 0x39 0011 1001

| 表达式  | 值     |
|:------:|:-------:|
| x & y  |  0x20  |
| x \| y |  0x7f  |
|~x \| ~y|  0xdf  |
| x & !y |  0x00  |

| 表达式  | 值     |
|:------:|:-------:|
| x && y |  0x01  |
|x \|\| y|  0x01  |
|!x\|\|!y|  0x00  |
| x && ~y|  0x01  |