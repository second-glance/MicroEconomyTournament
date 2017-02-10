#ifndef MARKET
#define MARKET

class Market
{
 public:
  virtual int ReceiveBid(float bidPrice, float bidSize);
  virtual int ReceiveAsk(float askPrice, float askSize);

 private:
  virtual int MatchBidAsk();
 
};

#endif
