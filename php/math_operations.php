<?php

if (isset($_POST['submit'])) {
    $a = $_POST['a'];
    $b = $_POST['b'];

    $sum = $a + $b;
    $product = $a * $b;
    $difference = $a - $b;

    echo "Sum: " . $sum . "<br>";
    echo "Product: " . $product . "<br>";
    echo "Difference: " . $difference . "<br>";

    if ($b != 0) {
        $quotient = $a / $b;
        $remainder = $a % $b;

        echo "Quotient: " . $quotient . "<br>";
        echo "Remainder: " . $remainder . "<br>";
    } else {
        echo "Division by zero is not allowed.<br>";
    }
}

?>

<!DOCTYPE html>
<html>
<head>
    <title>Math Operations</title>
</head>
<body>

<form action="" method="post">
    Enter first value: <input type="number" name="a"><br>
    Enter second value: <input type="number" name="b"><br>
    <input type="submit" name="submit" value="Compute">
</form>

</body>
</html>
