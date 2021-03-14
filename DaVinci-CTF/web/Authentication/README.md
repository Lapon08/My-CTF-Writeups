# Authentication
---
Can you find a way to authenticate as admin?

http://challs.dvc.tf:1337/
# Solver
----
Terdapat form login yang harus menginutkan username dan password ketika saya coba ```tes:tes``` hasilnya adalah ```Incorrect username/password!``` dan ketika saya menggunakan ```admin:tes``` hasilnya adalah ```How dare you!``` . Saya mengasumsikan terdapat kerentanan SQL Injection yaudah saya pakai payload bypass login yang umum digunakan  ```' or ''='``` dan akhirnya berhasil masuk, flag terdapat pada source code 
![](solve.png)
#### dvCTF{!th4t_w4s_34sy!}