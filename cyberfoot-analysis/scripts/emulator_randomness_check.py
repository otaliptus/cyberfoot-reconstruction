"""Reproduce clock-correlated draws and verify the optional Randomize repair."""
from native_oracle import u,run,read32,SEED
from collections import Counter
# Each call runs actual original x86 instructions, with QPC held constant.
baseline=[run(0x6071c4,[50,100],123456)['result'] for _ in range(1000)]
assert len(set(baseline))==1
original=bytes(u.mem_read(0x402b90,1));u.mem_write(0x402b90,b'\xc3');u.ctl_remove_cache(0x402b90,0x402bc0)
seed=123456;draws=[]
try:
 for _ in range(10000):
  result=run(0x6071c4,[50,100],seed);seed=result['seed'];draws.append(result['result']);assert result['clockReads']==0
finally:u.mem_write(0x402b90,original)
counts=Counter(draws);assert len(counts)==2 and all(4500<n<5500 for n in counts.values()),counts
print('Constant-clock original: 1000 identical probability outcomes.')
print('Continuous original generator: 10000 decisions:',dict(counts),'with zero reseeding calls.')
