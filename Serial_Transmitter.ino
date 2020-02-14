#define GET_LOW_BYTE(A) (uint8_t)((A))

#define GET_HIGH_BYTE(A) (uint8_t)((A) >> 8)

uint16_t var = 1000;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  uint8_t buf[3];
  buf[0] = highByte(var);
  buf[1] = lowByte(var);
  
  Serial.write(buf,2);
  Serial.flush();
  delay(1000);
  

  //Serial.println(buf[0]);
  //Serial.println(buf[1]);

  
}
