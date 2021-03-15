# UwU
---
when php, anime and robots come together. they make hell of a challenge. https://uwu.vishwactf.com/
# Solver
---
Dari Deskripsinya menunjukkan sebuah hint. Saya mencoba mengunjungi direktori robots ternyata terdapat source code didalamnya. Berikut Source codenya
```
<!DOCTYPE HTML>
<?php
  require("cyberflagster.php");  
  $try; //1
  $function; //5
  if (isset($_GET['showThem'])) {
   
    highlight_file(__FILE__);
   
    die();
  
  }
   $reach;//3
  if (isset($_GET['php_is_hard'])) {
  
    $you_enter = $_GET['php_is_hard'];
  
    $we_enter = 'suzuki_harumiya';
  
    $the_final_one = preg_replace(
    
      "/$we_enter/", '', $you_enter);
  
      if ($the_final_one === $we_enter) {
  
        open_up();
    }
  }
  $to; //2
  $open_up;//4
?>

<html>
  <head>
    <title>VishwaCTF-mini | web-php-1</title>
  </head>
  <body style="background-color:#121212">
  <h1>Try Solving this normie<h1>
  <a target="_blank" href="?showThem"><h3>Source Code</h3></a>

  </body>
</html>
```
Disana meminta parameter ```php_is_hard``` melalui GET dan terdapat preg_replace() tetap bisa dibypass kok karna page_replace tidak rekursif. Payload yang kita kirimkan jadi ```https://uwu.vishwactf.com/robots/?php_is_hard=suzuki_hasuzuki_harumiyarumiya```

dan yaaa dapat flag

#### vishwaCTF{well_this_was_a_journey}