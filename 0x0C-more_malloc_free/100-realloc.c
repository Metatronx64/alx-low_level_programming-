void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    void *new_ptr;

    /* If new size is zero, free the memory block and return NULL */
    if (new_size == 0) {
        free(ptr);
        return NULL;
    }

    /* If pointer is NULL, allocate a new block of new_size bytes */
    if (ptr == NULL) {
        return malloc(new_size);
    }

    /* If new size is equal to old size, do nothing and return the original pointer */
    if (new_size == old_size) {
        return ptr;
    }

    /* Allocate a new block of new_size bytes */
    new_ptr = malloc(new_size);

    /* Copy the contents from the original block to the new block */
    if (new_ptr != NULL) {
        memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);

        /* Free the original block */
        free(ptr);
    }

    return new_ptr;
}

