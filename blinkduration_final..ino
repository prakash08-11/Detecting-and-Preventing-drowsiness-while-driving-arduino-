int eye_blink_duration();
int eyeblink_input = 3;
int buzzer_pin = 4;
int steering_vibrator_pin = 5;
int seat_belt_vibrator_pin = 6;
int motor_stop = 7;
int count=0, actual_count=0, memory_blink_grade=0;
void setup()
{
  // put your setup code here, to run once:
  pinMode(eyeblink_input,INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buzzer_pin, OUTPUT);
  pinMode(steering_vibrator_pin, OUTPUT);
  pinMode(seat_belt_vibrator_pin, OUTPUT);
  pinMode(motor_stop, OUTPUT);

        digitalWrite(buzzer_pin, HIGH );
        digitalWrite(steering_vibrator_pin, HIGH );
        digitalWrite(seat_belt_vibrator_pin, HIGH );
        delay(100);
        digitalWrite(buzzer_pin, LOW );
        digitalWrite(steering_vibrator_pin, LOW );
        digitalWrite(seat_belt_vibrator_pin, LOW );
      }

void loop()
{
  int blink_grade;
  digitalWrite(motor_stop, HIGH);
 blink_grade = eye_blink_duration();
 if (blink_grade == memory_blink_grade)
  {
  count++;
  }
  else
  {
    count=0;
  }
  if (blink_grade >= 2)
  {
    actual_count++;
  }
  else
  {
    actual_count = 0;
  }
 switch (blink_grade)
 {
    case 1:
    if(count>=3 && count<= 6)
      {
        digitalWrite(buzzer_pin, HIGH );
        delay(20);
        digitalWrite(buzzer_pin, LOW );
      }
      if(count >=7 && count<= 10)
      {
        digitalWrite(steering_vibrator_pin, HIGH );
        delay(20);
        digitalWrite(steering_vibrator_pin, LOW );
      }
      
      if(count>10)
      {
        digitalWrite(seat_belt_vibrator_pin, HIGH );
        delay(20);
        digitalWrite(seat_belt_vibrator_pin, LOW );
      }
      break;
    case 2:
    if(actual_count== 2)
      {
        digitalWrite(buzzer_pin, HIGH );
        delay(20);
        digitalWrite(buzzer_pin, LOW );
      }
      if(actual_count== 3||actual_count== 4)
      {
        digitalWrite(steering_vibrator_pin, HIGH );
        delay(20);
        digitalWrite(steering_vibrator_pin, LOW );
      }
      if(actual_count== 5||actual_count== 6)
      {
        digitalWrite(seat_belt_vibrator_pin, HIGH );
        delay(20);
        digitalWrite(seat_belt_vibrator_pin, LOW );
      }
      if(actual_count >= 7)
      {
        digitalWrite(buzzer_pin, HIGH );
        digitalWrite(steering_vibrator_pin, HIGH );
        delay(20);
        digitalWrite(buzzer_pin, LOW );
        digitalWrite(steering_vibrator_pin, LOW );
      }
      break;
    case 3:
    if(actual_count>= 1 && actual_count <= 3)
      {
        digitalWrite(steering_vibrator_pin, HIGH );
        delay(20);
        digitalWrite(steering_vibrator_pin, LOW );
      } 
       if(actual_count== 4||actual_count== 5 || count == 2)
      {
        digitalWrite(seat_belt_vibrator_pin, HIGH );
        delay(20);
        digitalWrite(seat_belt_vibrator_pin, LOW );
      }
      if(actual_count >= 6 || count >= 3)
      {
        digitalWrite(steering_vibrator_pin, HIGH );
        digitalWrite(seat_belt_vibrator_pin, HIGH );
        delay(20);
        digitalWrite(steering_vibrator_pin, LOW );
        digitalWrite(seat_belt_vibrator_pin, LOW );
      }
      break;
    case 4:
    if(actual_count>= 1 && actual_count <= 3 ||count == 1 || count == 2)
      {
        digitalWrite(steering_vibrator_pin, HIGH );
        delay(20);
        digitalWrite(steering_vibrator_pin, LOW );
      } 
     if(actual_count== 4 || actual_count == 3 ||count == 3 || count == 4)
      {
        digitalWrite(seat_belt_vibrator_pin, HIGH );
        delay(20);
        digitalWrite(seat_belt_vibrator_pin, LOW );
      }
      if(actual_count >= 6 || count >= 5)
      {
        digitalWrite(buzzer_pin, HIGH );
        digitalWrite(steering_vibrator_pin, HIGH );
        digitalWrite(seat_belt_vibrator_pin, HIGH );
        delay(20);
        digitalWrite(buzzer_pin, LOW );
        digitalWrite(steering_vibrator_pin, LOW );
        digitalWrite(seat_belt_vibrator_pin, LOW );
      }
      if(count >= 8)
      {
         digitalWrite(motor_stop, LOW);
         while (1)
         {
          }
      }
      break;
      case 5:
        digitalWrite(buzzer_pin, HIGH );
        digitalWrite(steering_vibrator_pin, HIGH );
        digitalWrite(seat_belt_vibrator_pin, HIGH );
        delay(20);
        digitalWrite(buzzer_pin, LOW );
        digitalWrite(steering_vibrator_pin, LOW );
        digitalWrite(seat_belt_vibrator_pin, LOW );
        if(count == 3)
        {
         digitalWrite(motor_stop, LOW);
         while (1)
         {
          }
      }
      break;
   }
  }
int eye_blink_duration()
{
  int c=0,d;
  while (digitalRead(eyeblink_input)== HIGH)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(20);
    d=0;
    c=c+20;
    if (c>=200 &&c<=399)
    { 
      d=1;    
    }
    if (c>=400 &&c<=599)
    {
      d=2;
    }
    if (c>=600 &&c<=699)
    {
      d=3;
    } 
    if (c>=700 &&c<=999)
    {
      d=4;
    } 
    if (c>=1000)
    {
      d=5;
      digitalWrite(LED_BUILTIN, LOW);
      return d;
    } 
   }
   digitalWrite(LED_BUILTIN, LOW);
   return d; 
}


