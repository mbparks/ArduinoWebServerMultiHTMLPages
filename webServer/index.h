/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-web-server-multiple-pages
 */

const char *HTML_CONTENT_HOME = R""""(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="icon" href="data:,">
    <title>Home Page</title>
</head>
<body>
<br>                      
_░▒▓██████▓▒░_░▒▓███████▓▒░░▒▓██████▓▒░__<br>
░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░______░▒▓█▓▒░░▒▓█▓▒░_<br>
░▒▓█▓▒░______░▒▓█▓▒░______░▒▓█▓▒░________<br>
░▒▓█▓▒▒▓███▓▒░░▒▓██████▓▒░░▒▓█▓▒▒▓███▓▒░_<br>
░▒▓█▓▒░░▒▓█▓▒░______░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░_<br>
░▒▓█▓▒░░▒▓█▓▒░______░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░_<br>
_░▒▓██████▓▒░░▒▓███████▓▒░_░▒▓██████▓▒░__<br>
<br>
<h1>Welcome to the Control Page</h1>
<br><h3>
  <ul>
      <li><a href="/led">LED Page</a></li><br>
      <li><a href="/temperature">Temperature Page</a></li><br>
      <li><a href="/door">Door Page</a></li>
  </ul>
  </h3>
</body>
</html>
)"""";
