## ft_latin

This was a 1-hour rush code project with the following instructions:

- Write function that translates a text to 42-Latin and back.
- English is translated to 42-Latin by taking the first letter of every word, moving it to the end of the word and adding ’42’.
- The function must be prototyped as: `void ft_latin(char **str, int arrlen);`
- The main file:
```
void	ft_latin(char **ag, int ac);

int	main(int ac, char **ag)
{
	ft_latin(ag, ac);
	return 0;
}
```
- Examples:
```
$> gcc -Wall -Werror -Wextra ft_latin.c main.c -o ft_latin
$> ./ft_latin
$>
$> ./ft_latin hello world | cat -e
elloh42 orldw42$
$> ./ft_latin chocolatine or pain au chocolat | cat -e
hocolatinec42 ro42 ainp42 ua42 hocolatc42$
$> ./ft_latin I want ice cream! | cat -e
I42 antw42 cei42 ream!c42$
$> ./ft_latin hocolatinec42 ro42 ainp42 ua42 hocolatc42 | cat -e
chocolatine or pain au chocolat$
$>
```
