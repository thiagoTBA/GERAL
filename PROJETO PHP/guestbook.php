<html>
<head><title>My Guestbook</title></head>
<body>
<h1>Welcome to My Guestbook</h1>
<h2>Please write me a little note below</h2>
<form action="" method="POST">
<input type="text" name="user" placeholder="Name" />
<br />
<textarea cols="40" rows="5" name="note" placeholder="Comments" wrap="virtual"></textarea>
<br />
<input type="submit" name="submit" value="Submit" />
</form>
<?php

if (isset($_POST['submit'])){

$user = $_POST['user'];
$note = $_POST['note'];

if(!empty($user) && !empty($note)) {
$msg = $user . ' : ' . $note;
//will open a file
$fp = fopen("notes.txt","a") or die("Can't open file");
//will write to a file
fwrite($fp, $msg."\n");
fclose($fp);
}
}
?>
 
<h2>The entries so far:</h2>
<?php
$file = fopen("notes.txt", "r") or exit("Unable to open file!");
//Output a line of the file until the end is reached
while(!feof($file))
  {
  //will return each line with a break
  echo fgets($file). '<br />';
  }
fclose($file);
?> 
</body>
</html>