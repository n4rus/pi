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
                $n = 1;
                
                for ($x = 1; $x < 9; $x++) {
                    for ($n = 1; $n < 9; $n++) {
                        $y = $n;
                        $d = $y / $x;
                        $t = $d * $n;
                        $f = $n / $x;
                        echo "<p> n=n$n, y=y$y, x=x$x, y$y/x$x=d$d, d$n*n$n=t$t <p>";
                    }
                }
          ?>
        </h1>
	</body>
</html>
