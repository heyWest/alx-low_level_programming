#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: filename
 * @letters: no of letters printed
 * Return: actual number of letters it could read and print
 * or 0 if the file cannot be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t num_r, num_wr;
	char *acc;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	acc = malloc(sizeof(char) * (letters));
	if (!acc)
		return (0);
	num_r = read(f, acc, letters);
	num_wr = write(STDOUT_FILENO, acc, num_r);
	close(f);
	free(acc);
	return (num_wr);
}
