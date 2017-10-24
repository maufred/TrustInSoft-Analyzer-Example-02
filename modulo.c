int modulo(int a, int b)
{
  return a % b;
}

int main(void)
{
  int array[5] = {13, 7, 42, 0, 1};
  int i;
  int n = 0;

  for (i = 0; i < 5; i++) {
    n += modulo(100, array[i]);
  }

  return 0;
}
