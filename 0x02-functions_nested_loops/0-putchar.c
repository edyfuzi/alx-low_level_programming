#ifndef MAIN
#define MAIN
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char *sh = "main";
while (*sh)
{
_putchar(*sh);
sh++;
}
_putchar('\n');
return (0);
#endif
