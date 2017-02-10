#ifndef MARKET_ORDER
#define MARKET_ORDER

#include <boost/signals2.hpp>
#include <boost/bind.hpp>
#include "agent.h"

using namespace boost::signals2;

/**
 * The MarketOrder class allows to store an order placed by an Agent
 * instance on a given market
 *
 * The identity of the agent is not provided to the MarketOrder instance
 */
class MarketOrder
{
 public:
  /**
   * Market order main constructor
   * @param price Bid or ask price of the order
   * @param size Size of the order
   * @param dir Bool: true means buy, false sell
   */
  MarketOrder(float price, float size, bool dir);

  /**
   * Fill an order by calling an Agent method
   * @param int Execution price
   * @param int Execution size
   * @return int Remaining size of the order
   */
  signal<int (int, int)> Fill;

 private:

  int Suscribe(Agent agent);
  
  float m_price;
  float m_size;
  bool m_dir;
  
};

#endif
