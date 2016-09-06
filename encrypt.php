<html>
<body>
<p>Original Message: <?php echo $_POST["message"]; ?> </p>
<p>Shift Value: <?php echo $_POST["shiftval"]; ?></p>
<p>Encrypted Message: <?php echo $_POST["shiftval"]; ?></p>
<p>To Decrypt, Use: <?php echo 26 - $_POST["shiftval"]; ?></p>

<p>Passthru Test: <?php passthru("date"); ?></p>



</body>
</html>
