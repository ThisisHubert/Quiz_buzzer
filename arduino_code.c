
int sw_user1 = 12; 

int led_user1 = 8; 

int sw_reset = 4; 

int sw_user2 = 11;

int led_user2 = 7;

int sw_user3 = 10;

int led_user3 = 6;

int sw_user4 = 9;

int led_user4 = 5;



void setup(){
    pinMode(sw_reset, INPUT);

    pinMode(sw_user1, INPUT);

    pinMode(led_user1, OUTPUT);
	digitalWrite(led_user1, LOW);
    pinMode(sw_user2, INPUT);

    pinMode(led_user2, OUTPUT);
	digitalWrite(led_user2, LOW);
    pinMode(sw_user3, INPUT);

    pinMode(led_user3, OUTPUT);
	digitalWrite(led_user3, LOW);

    pinMode(sw_user4, INPUT);

    pinMode(led_user4, OUTPUT);
	digitalWrite(led_user4, LOW);



}

void loop(){

// for user 1 & 2 & 3 & 4  
    int user1 = digitalRead(sw_user1);
	int user2 = digitalRead(sw_user2);
	int user3 = digitalRead(sw_user3);
	int user4 = digitalRead(sw_user4);

    int reset = digitalRead(sw_reset);

  
  
  
  
  if (user1 == LOW){   // for led1 
        digitalWrite(led_user1,HIGH);
    delay(100);

    while (reset != LOW){
      digitalWrite(led_user2,LOW);
        digitalWrite(led_user3,LOW);
        digitalWrite(led_user4,LOW);
        reset = digitalRead(sw_reset); 
      if (reset == LOW){   // if the reset is pressed
      	
        delay(10);
        digitalWrite(led_user1, LOW); 
        digitalWrite(led_user2, LOW); 
    	digitalWrite(led_user3, LOW); 
    	digitalWrite(led_user4, LOW); 

      }
      
     
    }

    delay(100);
    
      
  }else if(user2 == LOW){  // for led2
  		digitalWrite(led_user2, HIGH); 
    delay(100);
    
    while (reset != LOW){
      digitalWrite(led_user1, LOW);
      digitalWrite(led_user3, LOW); 
      digitalWrite(led_user4, LOW); 
      reset = digitalRead(sw_reset); 
      if(reset == LOW){
      	delay(10);
        digitalWrite(led_user1, LOW); 
        digitalWrite(led_user2, LOW); 
    	digitalWrite(led_user3, LOW); 
    	digitalWrite(led_user4, LOW); 
        
        
      }

    
    }
    delay(100);
  
  
  
  
  
  
  } else if(user3 == LOW){ // for led3
  		digitalWrite(led_user3, HIGH); 
    delay(100);
    
    while (reset != LOW){
      digitalWrite(led_user1, LOW);
      digitalWrite(led_user2, LOW); 
      digitalWrite(led_user4, LOW); 
      reset = digitalRead(sw_reset); 
      if(reset == LOW){
      	delay(10);
        digitalWrite(led_user1, LOW); 
        digitalWrite(led_user2, LOW); 
    	digitalWrite(led_user3, LOW); 
    	digitalWrite(led_user4, LOW); 
        
        
      }

    
    }
    delay(100);
  
  
  }else if(user4 == LOW){  // for led4 
  		digitalWrite(led_user4, HIGH); 
    delay(100);
    
    while (reset != LOW){
      digitalWrite(led_user1, LOW);
      digitalWrite(led_user3, LOW); 
      digitalWrite(led_user2, LOW); 
      reset = digitalRead(sw_reset); 
      if(reset == LOW){
      	delay(10);
        digitalWrite(led_user1, LOW); 
        digitalWrite(led_user2, LOW); 
    	digitalWrite(led_user3, LOW); 
    	digitalWrite(led_user4, LOW); 
        
        
      }

    
    }
    delay(100);
  
  
  
  
  
  
    
  }
  
  
  
  
    
          

}



