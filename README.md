# File IO
File IO Examples with C and C++

## C
`stdio.h`
| mode | desc            | plus    |
|-----:|:----------------|---------|
|    r | read            | + write |
|    w | create -> write | + read  |
|    a | append          | + read  |

## C++
`std::fstream`
|   mode | desc                                 |
|-------:|:-------------------------------------|
|     in | input                                |
|    out | output                               |
| binary | binary                               |
|    ate | at end, move file pointer to the end |
|    app | append, append data from the end     |
|  trunc | truncate, remove all before open     |
