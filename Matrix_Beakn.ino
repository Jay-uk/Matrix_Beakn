// Include required libraries
#include <Adafruit_GFX.h>
#include <Colorduino_GFX.h>
#include <Wire.h>

// Color definitions
#define BLACK    0x0000
#define BLUE     0x001F
#define RED      0xF800
#define GREEN    0x07E0
#define CYAN     0x07FF
#define MAGENTA  0xF81F
#define YELLOW   0xFFE0 
#define WHITE    0xFFFF

// Create new Colorduino instance
ColorduinoPanel Colorduino;

int x;

void setup() {  
  // Set port mode, load data structures and start the timer
  Colorduino.init();
  // Set white balance
  Colorduino.setWhiteBalance(36, 63, 63);
  
  Wire.begin(4);                // join i2c bus with address #4
  Wire.onReceive(receiveEvent); // register event
  Serial.begin(9600);           // start serial for output
}

void loop() {
  
if(x == 1){
  busy();
}
if(x == 2){
  available();
}
if(x == 3){
  away();
}
if(x == 4){
  donotdisturb();
}

  }
  
void receiveEvent(int howMany)
{
 /* while(1 < Wire.available()) // loop through all but the last
  {
    char c = Wire.read(); // receive byte as a character
    Serial.print(c);         // print the character
  }*/
  x = Wire.read();    // receive byte as an integer
  Serial.println(x);         // print the integer
}

void away(){
  Colorduino.fillScreen(BLACK);
  Colorduino.fillRect(0, 0, 8, 8, YELLOW);
  Colorduino.drawLine(1, 1, 1, 4, WHITE);
  Colorduino.drawLine(1, 1, 4, 1, WHITE);
  Colorduino.drawPixel(2, 2, WHITE);
  Colorduino.drawPixel(0, 0, BLACK);
  Colorduino.drawPixel(7, 0, BLACK);
  Colorduino.drawPixel(0, 7, BLACK);
  Colorduino.drawPixel(7, 7, BLACK);
  Colorduino.drawPixel(1, 1, YELLOW);
  Colorduino.swapBuffers(true);
}
  
void donotdisturb(){
  Colorduino.fillScreen(BLACK);
  Colorduino.fillRect(0, 0, 8, 8, RED);
  Colorduino.fillRect(1, 3, 6, 2, WHITE);
  //Colorduino.drawLine(6, 0, 0, 6, WHITE);
  //Colorduino.drawLine(7, 1, 1, 7, WHITE);
  //Colorduino.drawLine(6, 1, 1, 6, WHITE);
  Colorduino.drawPixel(0, 0, BLACK);
  Colorduino.drawPixel(7, 0, BLACK);
  Colorduino.drawPixel(0, 7, BLACK);
  Colorduino.drawPixel(7, 7, BLACK);
  Colorduino.swapBuffers(true);
}
  
void busy(){
  Colorduino.fillScreen(BLACK);
  Colorduino.drawLine(1, 0, 7, 6, RED);
  Colorduino.drawLine(0, 1, 6, 7, RED);
  Colorduino.drawLine(6, 0, 0, 6, RED);
  Colorduino.drawLine(7, 1, 1, 7, RED);
  Colorduino.drawLine(1, 1, 6, 6, RED);
  Colorduino.drawLine(6, 1, 1, 6, RED);
  Colorduino.swapBuffers(true);
  
}

void available(){
  Colorduino.fillScreen(BLACK);
  Colorduino.fillRect(0, 0, 8, 8, GREEN);
  Colorduino.drawLine(1, 1, 1, 4, WHITE);
  Colorduino.drawLine(1, 1, 4, 1, WHITE);
  Colorduino.drawPixel(2, 2, WHITE);
  Colorduino.drawPixel(0, 0, BLACK);
  Colorduino.drawPixel(7, 0, BLACK);
  Colorduino.drawPixel(0, 7, BLACK);
  Colorduino.drawPixel(7, 7, BLACK);
  Colorduino.drawPixel(1, 1, GREEN);
  Colorduino.swapBuffers(true);
}
