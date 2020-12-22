#ifndef STOCKS_H_INCLUDED
#define STOCKS_H_INCLUDED
#define "Tradeheader.h"

typedef struct _trading_que_ TradeQ;

struct _trading_queue_ {
    char    name[40];
    char    date[15];
    int32_t price;
    int32_t quantity;
};

typedef struct _queue_ Queue;

struct _que_ {
    uint32_t size;
    uint32_t count;
    uint32_t rear;
    uint32_t front;
    int32_t data[Q_LEN];

};

typedef struct _queue_result_{

struct _queue_result_{
    Trading share;
    uint32_t status;
};

Queue queue_new(uint32_t size);
uint8_t queue_full(Queue *q);
uint8_t queue_empty(Queue *q);
Queue* queue_add(Queue *q,TradeQ share,QueueResult *res);
Queue* queue_add(Queue *q,QueueResult *res);
Queue* look_up(Queue *q,TradeQ share);
Queue* topup(Queue q,TradeQ share,int32_t quantity);
uint32_t queue_length(Queue *q);


#endif // STOCKS_H_INCLUDED
