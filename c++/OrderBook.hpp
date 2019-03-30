#ifndef _OrderBook_H_
#define _OrderBook_H_

#include <map>
#include <string>
#include <sstream>

class OrderBook{
    long timestamp;
    std::map<long,long> buySide;
    std::map<long,long> sellSide;
    
    public:

    // since this should be done at every time, 
    // the datastructure of buySide/sellSide sould 
    // be done accordingly (not sure map is the right one).
    std::string getStringRepresentation(unsigned) const; // "bestBidPrice,bestBidSize,bestAskPrice,bestAskSize,..."
    void modifySize(long price, long size, bool side); // size also negative
};


#endif /*_OrderBook_H_*/