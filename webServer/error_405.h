/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-web-server-multiple-pages
 */

const char *HTML_CONTENT_405 = R""""(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="icon" href="data:,">
    <title>405 - Method Not Allowed</title>
    <style>
        h1 {color: #ff4040;}
    </style>
</head>
<body>
    <h1>405 - Method Not Allowed</h1>
    <p>Oops! The requested method is not allowed for this resource.</p>
    <p>Please check your request or go back to the <a href="/">homepage</a>.</p>
  <p>Or check <a href="https://arduinogetstarted.com/tutorials/arduino-web-server-multiple-pages"> Arduino Web Server</a> tutorial.</p>
</body>
</html>
)"""";
