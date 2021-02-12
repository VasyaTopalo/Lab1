#include <stdio.h>
#include <math.h>

int main() {
  float x1, x2, x3, y1, y2, y3, p, s; //Оголошуємо змінні

  printf("Введіть координати першої точки:\n");
  printf("Введіть x1: ");
  scanf("%f", &x1);

  printf("Введіть y1: ");
  scanf("%f", &y1);

  printf("\nВведіть координати другої точки:\n");
  printf("Введіть x2: ");
  scanf("%f", &x2);

  printf("Введіть y2: ");
  scanf("%f", &y2);

  printf("\nВведіть координати третьої точки:\n");
  printf("Введіть x3: ");
  scanf("%f", &x3);

  printf("Введіть y3: ");
  scanf("%f", &y3);

  float ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  float bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
  float ac = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
  p = ab + ac + bc;
  float pp = p / 2;
  s = sqrt(pp * (pp - ac)*(pp - bc) * (pp - ab));

  printf("\n***Результати***\n");

  printf("\nСторона АВ = %.f\n", ab );
  printf("Сторона AC = %.f\n", ac );
  printf("Сторона BC = %.f\n", bc );

  printf("\nПлоща S = %.f\n", s);
  printf("Периметр P = %.f", p);

  return 0;
}
