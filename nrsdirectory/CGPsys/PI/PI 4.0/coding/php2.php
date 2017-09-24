<!DOCTYPE html>
<html>
    <head>
	</head>
	<body>
        <h1>
          <?php
                echo "I'm learning php!";
                
                $d = 0;
                
                $x = 1;
                
                $PI = 3.14159265;
                
                //for ($x = 1; $x =<9; $x++) {
                while ($x <= $PI) {
                    $x = $x + 0.1;
                    for ($n = 1; $n <= 9; $n++) {
                        $y = $n;
                        $d = $y / $x;
                        $t = $d * $n;
                        $f = $n / $x;
                        echo "<p> n = n$n, y = y$y, x = x$x </p>";
                        echo "<p> y$y/x$x = d$d </p>";
                        echo "<p> d$n*n$n = t$t </p>";
                        echo "<p> n$n/x$x = n$f</p>";
                    }
                }
          ?>
        </h1>
	</body>
</html>
