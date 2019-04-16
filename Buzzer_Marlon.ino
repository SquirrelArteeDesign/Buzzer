
int frequencia = 2000; // frequencia de 2000Hz
const int pinoBuzzer = 10; // pino onde o buzzer esta conectado

const int pinoBotao1 = 9; // pino onde o botao 1 está conectado
const int pinoBotao2 = 11; // pino onde o botao 2 esta conectado
const int pinoBotao3 = 12; // pino onde o botao 3 esta conectado

void setup() {
  pinMode(pinoBuzzer, OUTPUT); // configura o pino com o buzzer como saída
  pinMode(pinoBotao1, INPUT_PULLUP); // configura o pino com o botao 1 como entrada
  pinMode(pinoBotao2, INPUT_PULLUP); // configura o pino com o botao 2 como entrada
  pinMode(pinoBotao3, INPUT_PULLUP); // configura o pino com o botao 3 como entrada
}

void loop() {
  // Soma mais 100 de frequencia atual
  if(digitalRead(pinoBotao1) == LOW) {
    frequencia = frequencia + 100;
  }

  // Subtrai 100 da frequencia atual
  if(digitalRead(pinoBotao2) == LOW) {
    frequencia = frequencia - 100;
  }

  // Desliga o Buzzer
  if(digitalRead(pinoBotao3) == LOW) {
    noTone(pinoBuzzer); // desliga o buzzer
    delay(3000);
  }

  tone(pinoBuzzer, frequencia); // gera a frequencia no buzzer
  delay(1000);
  noTone(pinoBuzzer); // para a frequencia no buzzer
  delay(1000);
}
