#include "market_order.h"
#include <boost/signals2.hpp>
#include <boost/bind.hpp>

using namespace boost::signals2;

MarketOrder::MarketOrder(float price, float size, bool dir) : m_price(price), m_size(size), m_dir(dir)
{}




  
