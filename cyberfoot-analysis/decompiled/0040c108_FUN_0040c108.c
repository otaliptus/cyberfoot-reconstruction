// Address: 0040c108
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0040c108(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 3) == 0) {
    param_1 = param_1 & 0xffff;
    uVar1 = 100;
    if ((param_1 % 100 != 0) || (uVar1 = 400, param_1 % 400 == 0)) {
      return CONCAT31((int3)(param_1 / uVar1 >> 8),1);
    }
  }
  return 0;
}

