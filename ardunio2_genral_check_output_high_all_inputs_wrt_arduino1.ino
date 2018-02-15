int buzzer_pin_input = 3;
int steering_vibrator_pin_input = 4;
int seat_belt_vibrator_pin_input = 5;
int buzzer_pin_output = 6;
int steering_vibrator_pin_output = 7;
int seat_belt_vibrator_pin_output = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buzzer_pin_output, OUTPUT);
  pinMode(steering_vibrator_pin_output, OUTPUT);
  pinMode(seat_belt_vibrator_pin_output, OUTPUT);
  pinMode(buzzer_pin_input, INPUT);
  pinMode(steering_vibrator_pin_input,INPUT );
  pinMode(seat_belt_vibrator_pin_input, INPUT);
//  high for all
  digitalWrite(buzzer_pin_output,HIGH);
  digitalWrite(steering_vibrator_pin_output,HIGH);
  digitalWrite(seat_belt_vibrator_pin_output,HIGH);
  delay(5000);
  digitalWrite(buzzer_pin_output,LOW);
  digitalWrite(steering_vibrator_pin_output,LOW);
  digitalWrite(seat_belt_vibrator_pin_output,LOW);
}
void loop() {
 // put your main code here, to run repeatedly:
 if (digitalRead (buzzer_pin_input)== HIGH)
  {
digitalWrite(buzzer_pin_output,HIGH);
delay(5000);
digitalWrite(buzzer_pin_output,LOW);
  }
   if(digitalRead (steering_vibrator_pin_input) == HIGH )
  {
digitalWrite(steering_vibrator_pin_output,HIGH);
delay(5000);
digitalWrite(steering_vibrator_pin_output,LOW);
  }
  if(digitalRead (seat_belt_vibrator_pin_input)== HIGH)
  {
digitalWrite(seat_belt_vibrator_pin_output,HIGH);
delay(5000); 
digitalWrite(seat_belt_vibrator_pin_output,LOW);
  }
}
