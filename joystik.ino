int value = 0;
int value1 = 0;
int value2 = 0;
int value3 = 0;
char t ;
int x = 0;
int y = 0;
int z = 0;
int c = 0;

void setup() {
 Serial.begin(9600);
}
void loop() {
 value = analogRead(0);
  value1 = analogRead(1);
  value2 = analogRead(2);
  value3 = analogRead(3);
  y=map(value, 0,1023, 0, 180);
  x=map(value1, 0,1023, 0, 180);
  z=map(value2, 0,1023, 0, 180);
  c=map(value3, 0,1023, 0, 180);
 
 t=cal(x,y,z,c);

 Serial.write(t);
 delay(200);




 }

 char cal(int x, int y, int z, int c){
  if (x<80 && y>10 && y<170){
    //up=0
    return 'h';
    }

  else if (x>100 && y>10 && y<170){
    //down=180
    return 'f';
    }

  else  if (y<80 && x>10 && x<170){
      //right=1
      return 'e';
      }
  else if (y>100 && x>10 && x<170){
      //left=150
      return 'g';
      }
  if (z<10 && c>10 && c<170){
    //up=0
    return 'a';
    }

  else if (z>170 && c>10 && c<170){
    //down=180
    return 'c';
    }

  else  if (c<10 && z>10 && z<170){
      //right=1
      return 'd';
      }
  else if (c>170 && z>10 && z<170){
      //left=150
      return 'b';
      }

  else{
    return 's';
    
    }
    
 }
  
