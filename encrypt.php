<html>
<body>
<p>Original Message: <?php echo $_POST["message"]; ?> </p>
<p>Shift Value: <?php echo $_POST["shiftval"]; ?></p>
<?php $cmd = "/home/u20/grahamplace/public_html/encrypt". " " . "\"" . $_POST["message"] . "\"" . " " . $_POST["shiftval"]; ?>
<p>Encrypted Message: <?php passthru($cmd); ?> </p>
<p>To Decrypt, Use: <?php echo 26 - $_POST["shiftval"]; ?></p>

</body>
</html>
