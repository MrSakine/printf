#include "main.h"

/**
 * add_to_buffer - handles buffer
 * @buffer: buffer
 * @buffer_index: index of buffer
 * @data: data to be implemented
 * @data_len: length of data
 */
void _add_to_buffer(char *buffer, int *buffer_index, const char *data, int data_len)
{
	int i;

	for (i = 0; i < data_len; i++)
	{
		if (*buffer_index < BUFFER_SIZE - 1)
		{
			buffer[(*buffer_index)++] = data[i];
		}
		else
		{
			write(1, buffer, *buffer_index);
			*buffer_index = 0;
		}
	}
}
