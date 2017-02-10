#include "order.h"
#include <boost/signals2.hpp>
#include <boost/bind.hpp>

using namespace boost::signals2;

Order::Order(Agent *agent, float price, float size, bool dir, int validity) : m_agent(agent), m_price(price), m_size(size), m_dir(dir), m_is_market_order(false), m_validity(validity)
{}

Order::Order(Agent *agent, float size, bool dir, int validity) : m_agent(agent), m_price(0), m_size(size), m_dir(dir), m_is_market_order(true), m_validity(validity)
{}
