#include "main.h"

/**                                                                                                                                                                                                                                                                     
 * _isalpha - Function Write a function that                                                                                                                                                                                                                            
 * checks for lowercase character.                                                                                                                                                                                                                                      
 *                                                                                                                                                                                                                                                                      
 * @c: Le caractere a verifier.                                                                                                                                                                                                                                         
 *                                                                                                                                                                                                                                                                      
 * Return: 1 if character is lowercase, 0 otherwise.                                                                                                                                                                                                                    
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}


