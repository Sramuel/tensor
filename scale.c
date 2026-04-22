#include <stdio.h>
#include <stdlib.h>

#include "tensor.h"
#include "tensor_aux.h"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        fprintf(stderr, "Usage: %s <input> <value> <output>\n", argv[0]);
        return EXIT_FAILURE;
    }
    tensor *t = tensor_load(argv[1]);
    t = tensor_scale(t, atoi(argv[2]));
    tensor_save(t, argv[3]);
    return EXIT_SUCCESS;
}