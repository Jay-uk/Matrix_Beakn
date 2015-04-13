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
int draw = 0;

void setup() {  
  // Set port mode, load data structures and start the timer
  Colorduino.init();
  // Set white balance
  Colorduino.setWhiteBalance(36, 63, 63);
  boot();
  
  Wire.begin(4);                // join i2c bus with address #4
  Wire.onReceive(receiveEvent); // register event
  Serial.begin(9600);           // start serial for output
  
  clear();
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
if(x == 5){
  rain();
  }
if(x == 6){
  drive();
  }
if(x == 7){
  clear();
  }
}


void receiveEvent(int howMany)
{
 /* while(1 < Wire.available()) // loop through all but the last
  {
    char c = Wire.read(); // receive byte as a character
    Serial.print(c);         // print the character
  }*/
  draw = 0;
  x = Wire.read();    // receive byte as an integer
  Serial.println(x);         // print the integer
}

void boot(){
  Colorduino.fillScreen(BLACK);
  Colorduino.fillRect(0, 0, 8, 5, WHITE);
  Colorduino.fillRect(1, 5, 5, 7, WHITE);
  Colorduino.drawLine(2, 6, 2, 7, BLACK);
  Colorduino.drawLine(4, 6, 4, 7, BLACK);
  Colorduino.drawLine(6, 6, 6, 7, BLACK);
  Colorduino.drawPixel(3, 3, BLACK);
  Colorduino.drawPixel(1, 2, BLACK);
  Colorduino.drawPixel(5, 2, BLACK);
  Colorduino.swapBuffers(true);
  delay(50);
}

void clear(){
  if(draw==0){
  Colorduino.fillScreen(BLACK);
  Colorduino.swapBuffers(true);
  draw = 1;
  }
}

void drive(){

    Colorduino.fillScreen(BLACK);
    Colorduino.drawLine(3, 0, 4, 0, RED);
    Colorduino.drawLine(2, 1, 4, 1, RED);
    Colorduino.fillRect(1, 2, 7, 2, RED);
    Colorduino.drawPixel(5, 0, WHITE);
    Colorduino.drawPixel(5, 1, WHITE);
    Colorduino.drawPixel(6, 1, WHITE);
    Colorduino.drawPixel(2, 4, BLUE);
    Colorduino.drawPixel(6, 4, BLUE);
    Colorduino.drawPixel(0, 3, YELLOW);
    Colorduino.drawLine(0, 6, 7, 6, WHITE);
    //Colorduino.drawLine(4, 6, 7, 6, WHITE);
    Colorduino.swapBuffers(true);
    delay(500);
    
    Colorduino.fillScreen(BLACK);
    Colorduino.drawLine(3, 0, 4, 0, RED);
    Colorduino.drawLine(2, 1, 4, 1, RED);
    Colorduino.fillRect(1, 2, 7, 2, RED);
    Colorduino.drawPixel(5, 0, WHITE);
    Colorduino.drawPixel(5, 1, WHITE);
    Colorduino.drawPixel(6, 1, WHITE);
    Colorduino.drawPixel(2, 4, BLUE);
    Colorduino.drawPixel(6, 4, BLUE);
    Colorduino.drawPixel(0, 3, YELLOW);
    Colorduino.drawLine(0, 6, 5, 6, WHITE);
    //Colorduino.drawLine(6, 6, 7, 6, WHITE);
    Colorduino.swapBuffers(true);
    
    delay(500);
    
    Colorduino.fillScreen(BLACK);
    Colorduino.drawLine(3, 0, 4, 0, RED);
    Colorduino.drawLine(2, 1, 4, 1, RED);
    Colorduino.fillRect(1, 2, 7, 2, RED);
    Colorduino.drawPixel(5, 0, WHITE);
    Colorduino.drawPixel(5, 1, WHITE);
    Colorduino.drawPixel(6, 1, WHITE);
    Colorduino.drawPixel(2, 4, BLUE);
    Colorduino.drawPixel(6, 4, BLUE);
    Colorduino.drawPixel(0, 3, YELLOW);
    Colorduino.drawLine(0, 6, 3, 6, WHITE);
    Colorduino.drawLine(6, 6, 7, 6, WHITE);
    Colorduino.swapBuffers(true);
    
    delay(500);
    
    Colorduino.fillScreen(BLACK);
    Colorduino.drawLine(3, 0, 4, 0, RED);
    Colorduino.drawLine(2, 1, 4, 1, RED);
    Colorduino.fillRect(1, 2, 7, 2, RED);
    Colorduino.drawPixel(5, 0, WHITE);
    Colorduino.drawPixel(5, 1, WHITE);
    Colorduino.drawPixel(6, 1, WHITE);
    Colorduino.drawPixel(2, 4, BLUE);
    Colorduino.drawPixel(6, 4, BLUE);
    Colorduino.drawPixel(0, 3, YELLOW);
    Colorduino.drawLine(0, 6, 1, 6, WHITE);
    Colorduino.drawLine(4, 6, 7, 6, WHITE);
    Colorduino.swapBuffers(true);
    
    delay(500);
    
    Colorduino.fillScreen(BLACK);
    Colorduino.drawLine(3, 0, 4, 0, RED);
    Colorduino.drawLine(2, 1, 4, 1, RED);
    Colorduino.fillRect(1, 2, 7, 2, RED);
    Colorduino.drawPixel(5, 0, WHITE);
    Colorduino.drawPixel(5, 1, WHITE);
    Colorduino.drawPixel(6, 1, WHITE);
    Colorduino.drawPixel(2, 4, BLUE);
    Colorduino.drawPixel(6, 4, BLUE);
    Colorduino.drawPixel(0, 3, YELLOW);
    //Colorduino.drawLine(0, 6, 1, 6, WHITE);
    Colorduino.drawLine(1, 6, 7, 6, WHITE);
    Colorduino.swapBuffers(true);
    
    delay(500);
}

void rain(){
  if(draw==0){
  Colorduino.fillScreen(BLACK);
  Colorduino.drawLine(2, 0, 5, 0, WHITE);
  Colorduino.drawLine(1, 1, 6, 1, WHITE);
  Colorduino.drawLine(0, 2, 7, 2, WHITE);
  Colorduino.drawLine(4, 3, 4, 7, YELLOW);
  Colorduino.drawPixel(3, 7, YELLOW);
  Colorduino.drawPixel(0, 3, BLUE);
  Colorduino.drawPixel(1, 5, BLUE);
  Colorduino.drawPixel(1, 6, CYAN);
  Colorduino.drawPixel(2, 4, CYAN);
  Colorduino.drawPixel(0, 4, CYAN);
  Colorduino.drawPixel(0, 7, BLUE);
  Colorduino.drawPixel(2, 7, BLUE);
  Colorduino.drawLine(3, 3, 3, 5, BLUE);
  Colorduino.drawPixel(5, 3, CYAN);
  Colorduino.drawPixel(5, 6, BLUE);
  Colorduino.drawPixel(6, 4, CYAN);
  Colorduino.drawPixel(6, 5, BLUE);
  Colorduino.drawPixel(7, 3, CYAN);
  Colorduino.drawPixel(7, 6, CYAN);
  Colorduino.drawPixel(7, 7, BLUE);
  Colorduino.swapBuffers(true);
  draw = 1;
  }
}

void away(){
  if(draw==0){
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
  draw = 1;
  }
}
  
void donotdisturb(){
  if(draw==0){
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
  draw = 1;
  }
}
  
void busy(){
  if(draw==0){
  Colorduino.fillScreen(BLACK);
  Colorduino.drawLine(1, 0, 7, 6, RED);
  Colorduino.drawLine(0, 1, 6, 7, RED);
  Colorduino.drawLine(6, 0, 0, 6, RED);
  Colorduino.drawLine(7, 1, 1, 7, RED);
  Colorduino.drawLine(1, 1, 6, 6, RED);
  Colorduino.drawLine(6, 1, 1, 6, RED);
  Colorduino.swapBuffers(true);
  draw = 1;
  }
}

void available(){
  if(draw==0){
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
  draw = 1;
  }
}
