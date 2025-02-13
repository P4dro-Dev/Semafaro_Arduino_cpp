int LED_VERMELHO = 13;
int LED_AMARELO = 12;  
int LED_VERDE = 11;

void setup() {
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);   
  pinMode(LED_VERDE, OUTPUT);    
}

void loop() {
  // Acende o LED Verde
  digitalWrite(LED_VERMELHO, LOW);  // Desliga o LED vermelho
  digitalWrite(LED_AMARELO, LOW);   // Desliga o LED amarelo
  digitalWrite(LED_VERDE, HIGH);    // Liga o LED verde
  delay(2000);                      // Aguarda 2 segundos

  // Acende o LED Amarelo
  digitalWrite(LED_VERDE, LOW);     // Desliga o LED verde
  digitalWrite(LED_AMARELO, HIGH);  // Liga o LED amarelo
  delay(1000);                      // Aguarda 1 segundo

  // Acende o LED Vermelho
  digitalWrite(LED_AMARELO, LOW);   // Desliga o LED amarelo
  digitalWrite(LED_VERMELHO, HIGH); // Liga o LED vermelho
  delay(1000);                      // Aguarda 1 segundo
}