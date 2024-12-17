/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-web-server-multiple-pages
 */

const char *HTML_CONTENT_LED = R""""(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="icon" href="data:,">
    <title>LED Page</title>
</head>
<body>
    <h1>LED Page  -->|--  </h1>
    <p style=\"font-size:7vw;\">Click <a href="/led/on">here</a> turn the LED on<br></p>
    <p style=\"font-size:7vw;\">Click <a href="/led/off">here</a> turn the LED off<br></p>
    <p>LED State: <span style="color: LED_COLOR_MARKER;"><b>LED_STATE_MARKER</b></span></p>
    <p>Go back to the <a href="/">homepage</a>.</p>
</body>
</html>
)"""";
