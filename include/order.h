#ifndef MARKET_ORDER
#define MARKET_ORDER

#include <boost/signals2.hpp>
#include <boost/bind.hpp>
#include "agent.h"

using namespace boost::signals2;

/**
 * The Order class allows to store an order placed by an Agent
 * instance on a given market
 *
 * The identity of the agent is not provided to the Order instance
 */
class Order
{
 public:
  
  /**
   * @brief Instantiate a limit order
   * @param price Bid or ask price of the order
   * @param size Size of the order
   * @param dir Bool: true means buy, false sell
   */
  Order(Agent *agent, float price, float size, bool dir = true, int validity = 1);
  /**
   * @brief Instantiate a market order
   * @param size Size of the order
   * @param dir Bool: true means buy, false sell
   */
  Order(Agent *agent, float size, bool dir = true, int validity = 1);

  /**
   * @brief Fill an order by calling an Agent method
   * @param int Execution price
   * @param int Execution size
   * @return int Remaining size of the order
   */

  /**
   * @brief
   */
  void NewTurn();

 private:

  signal<int ()> CancellAgentSide;
  signal<int ()> CancellMarketSide;

  int m_id;
  Agent *m_agent;
  float m_price;
  float m_size;
  bool m_dir;
  bool m_is_market_order;
  int m_validity;
  
};

#endif
