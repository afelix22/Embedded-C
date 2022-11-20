#include <stdio.h>
#include <stdint.h>

#define CIRC_BBUF_DEF(x,y)                \
    uint8_t x##_data_space[y];            \
    ring_bbuf_t x = {                     \
        .buffer = x##_data_space,         \
        .head = 0,                        \
        .tail = 0,                        \
        .maxlen = y                       \
    }

typedef struct {
uint8_t * const buffer;
int head;
int tail;
const int maxlen;
} ring_bbuf_t;

int _push(ring_bbuf_t *c, uint8_t data)
{
    int next;

    next = c->head + 1;  // next is where head will point to after this write.

    if (next >= c->maxlen)
    {
        next = 0;
    }

    if (next == c->tail) // if the head + 1 == tail, circular buffer is full
    {
        return -1;
    }

    c->buffer[c->head] = data;  // Load data and then move
    c->head = next;             // head to next data offset.

    return 0;  // return success to indicate successful push.
}

int _pop(ring_bbuf_t *c, uint8_t *data)
{
    int next;

    if (c->head == c->tail) // if the head == tail, we don't have any data
    {
        return -1;
    }

    next = c->tail + 1;  // next is where tail will point to after this read.
    if(next >= c->maxlen)
    {
        next = 0;
    }

    *data = c->buffer[c->tail];  // Read data and then move
    c->tail = next;              // tail to next offset.

    return 0;  // return success to indicate successful push.
}

CIRC_BBUF_DEF(my_circ_buf, 8);

int main()
{
    uint8_t Pop, Push;

    printf("Enter a value to push:");
    scanf("%d", &Push);

    if (_push(&my_circ_buf, Push))
    {
        printf("Buffer out of space\n");
        return -1;
    }

    if (_pop(&my_circ_buf, &Pop))
    {
        printf("Buffer is empty\n");
        return -1;
    }

    printf("Push: %d\n", Push);

    printf("Pop:  %d\n", Pop);

    return 0;
}
