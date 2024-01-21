// Период последовательности остатков от деления чисел Фибоначчи на р
int period(int p) {
  int a = 0, b = 1, c = a + b; 
  int count = 0; 
  do {
    c = (a + b) % p; 
    a = b; 
    b = c; 
    count++; 
  } while (a != 0 || b != 1); 
  return count; 
}

void task13(){
  int p; 
  printf("Введите число р: ");
  scanf("%d", &p);
  printf("Период последовательности остатков от деления чисел Фибоначчи на %d равен %d\n", p, period(p));
}
