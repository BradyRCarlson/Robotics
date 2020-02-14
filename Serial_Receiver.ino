void setup() {
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {
  uint8_t output[3];
  
  if (Serial.available() > 0) {
    
    Serial.readBytes(output,2);

    unsigned int converted = output[0] * 256 + output[1];

    Serial.println(output[0]);
    Serial.println(output[1]);
    Serial.println(converted);
  }
}
