# Obfuscation
---
My password is my secret. You will never find it...

http://challs.dvc.tf:5555/

To validate this chall, please enter the secret code as the flag.
# Solver
---

Saya langsung mengunjungi Website tersebut dimana meminta sebuah code rahasia. Setelah itu saya lihat source code dari web tersebut
```

<html>
<head>
    <title>DVCTF Obfuscation JS</title>
    <link rel='stylesheet' href='styles.css'>
</head>

<body>
<div class="text-center">
    <div class="box">
        <p> If you know it, enter my secret : </p>
        <img src='davincicode.png' width="100" height="100" alt='logo'/>

        
        <form id="form">
            <input type="text" id="secret" color="#e7ded1">      
        </form>     
        <div class="button">
            <input type="button" onclick="testSecret()" value="Send"> 
            
        </div> 

        <p id="result"></p>
        

        <script>
            var _0x562c=['179dYsldU','502577NKwytj','49301uPrsBV','%64%76%43%54%46%7b%31%74%5f%69%73%5f%6e%30%74%5f%34%5f%73%65%63%72%33%74%5f%34%6e%79%6d%30%72%33%7d','41567Xaicqe','getElementById','2IMuDQu','secret','result','111HrUPrb','238340OvJqoS','1XVHayx','innerHTML','OOO\x20NO\x20you\x20have\x20found\x20my\x20secret\x20!','353385nZcsex','value','1UUUnkm','110191GWccce'];var _0x5ae8=function(_0x34f242,_0x4f6807){_0x34f242=_0x34f242-0x175;var _0x562c5a=_0x562c[_0x34f242];return _0x562c5a;};(function(_0x10ab78,_0x2dad39){var _0x48e1e3=_0x5ae8;while(!![]){try{var _0x2dbbea=parseInt(_0x48e1e3(0x180))+-parseInt(_0x48e1e3(0x181))*parseInt(_0x48e1e3(0x178))+parseInt(_0x48e1e3(0x17d))*parseInt(_0x48e1e3(0x183))+-parseInt(_0x48e1e3(0x177))+parseInt(_0x48e1e3(0x17b))+-parseInt(_0x48e1e3(0x176))*parseInt(_0x48e1e3(0x17f))+-parseInt(_0x48e1e3(0x185))*parseInt(_0x48e1e3(0x17e));if(_0x2dbbea===_0x2dad39)break;else _0x10ab78['push'](_0x10ab78['shift']());}catch(_0x4df530){_0x10ab78['push'](_0x10ab78['shift']());}}}(_0x562c,0x5a3e5));function testSecret(){var _0x56a5a8=_0x5ae8,_0x3ee8ed=_0x56a5a8(0x182),_0x14130d=document[_0x56a5a8(0x184)](_0x56a5a8(0x186))[_0x56a5a8(0x17c)];_0x14130d==unescape(_0x3ee8ed)?document[_0x56a5a8(0x184)](_0x56a5a8(0x175))[_0x56a5a8(0x179)]=_0x56a5a8(0x17a):document[_0x56a5a8(0x184)](_0x56a5a8(0x175))[_0x56a5a8(0x179)]='HEHE\x20my\x20secret\x20is\x20well\x20kept\x20!';}
        </script>
    </div>
</body>
</html>
```
Terdapat variabel yang aneh yaitu ```var _0x562``` yaudah coba saya panggil melalui console hasilnya
```
(18) […]
​
0: "result"
​
1: "111HrUPrb"
​
2: "238340OvJqoS"
​
3: "1XVHayx"
​
4: "innerHTML"
​
5: "OOO NO you have found my secret !"
​
6: "353385nZcsex"
​
7: "value"
​
8: "1UUUnkm"
​
9: "110191GWccce"
​
10: "179dYsldU"
​
11: "502577NKwytj"
​
12: "49301uPrsBV"
​
13: "%64%76%43%54%46%7b%31%74%5f%69%73%5f%6e%30%74%5f%34%5f%73%65%63%72%33%74%5f%34%6e%79%6d%30%72%33%7d"
​
14: "41567Xaicqe"
​
15: "getElementById"
​
16: "2IMuDQu"
​
17: "secret"
​
length: 18
​
<prototype>: [
```
Flagnya ternyata di URL encode
 ```
 %64%76%43%54%46%7b%31%74%5f%69%73%5f%6e%30%74%5f%34%5f%73%65%63%72%33%74%5f%34%6e%79%6d%30%72%33%7d
 ```
Tinggal kita decode deh
```
dvCTF{1t_is_n0t_4_secr3t_4nym0r3}
```
#### dvCTF{1t_is_n0t_4_secr3t_4nym0r3}