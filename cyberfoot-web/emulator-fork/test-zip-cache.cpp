// Standalone cache contract tests; compile with the patched source/io include path.
#include "zipreadcache.h"
#include <cassert>
#include <iostream>
int main() {
    ZipReadCache cache;
    unsigned loads=0;
    auto load=[&](uint8_t* data,uint32_t size){++loads;for(uint32_t i=0;i<size;++i)data[i]=i%251;return true;};
    uint8_t data[512];uint32_t result=999;
    assert(cache.read(1,65536,0,data,512,result,load)&&result==512&&loads==1);
    for(unsigned i=0;i<512;++i)assert(data[i]==i%251);
    assert(cache.read(1,65536,65000,data,512,result,load)&&loads==1);
    for(unsigned i=0;i<512;++i)assert(data[i]==(65000+i)%251);
    assert(cache.read(1,65536,65520,data,512,result,load)&&result==16&&loads==1);
    assert(cache.read(1,65536,65536,data,512,result,load)&&result==0&&loads==1);
    assert(!cache.read(1,65536,65537,data,512,result,load)&&loads==1);
    assert(!cache.read(1,65536,0,data,0,result,load)&&loads==1);
    assert(!cache.read(1,65537,0,data,512,result,load)&&loads==1);
    assert(!cache.read(2,65535,0,data,512,result,load)&&loads==1);
    assert(!cache.read(2,ZipReadCache::maximumEntry+1,0,data,512,result,load)&&loads==1);
    auto fail=[&](uint8_t* p,uint32_t){++loads;p[0]=42;return false;};
    assert(!cache.read(2,65536,0,data,512,result,fail)&&cache.sizeBytes()==65536);
    assert(cache.read(2,65536,0,data,512,result,load)&&loads==3&&data[0]==0);
    const uint64_t big=ZipReadCache::maximumEntry;
    assert(cache.read(10,big,0,data,512,result,load));
    assert(cache.read(11,big,0,data,512,result,load)&&cache.sizeBytes()==ZipReadCache::capacity);
    const unsigned prior=loads;
    assert(cache.read(10,big,0,data,512,result,load)&&loads==prior);
    assert(cache.read(12,big,0,data,512,result,load)&&loads==prior+1);
    assert(cache.read(10,big,0,data,512,result,load)&&loads==prior+1);
    assert(cache.read(11,big,0,data,512,result,load)&&loads==prior+2);
    ZipReadCache other;
    assert(other.read(11,big,0,data,512,result,load)&&loads==prior+3);
    for(uint64_t key=20;key<35;++key){assert(cache.read(key,65536,0,data,512,result,load));assert(cache.sizeBytes()<=ZipReadCache::capacity);}
    std::cout<<"PASS: byte ranges, backward reads, EOF, bypasses, failed loads, immutable lengths, LRU eviction, archive isolation and capacity\n";
}
