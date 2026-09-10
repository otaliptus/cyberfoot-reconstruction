// Address: 004a4028
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004a4028(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar3 = param_1 & 1;
    param_1 = param_1 >> 1;
    param_2 = param_2 + -1;
    uVar1 = (uVar2 | uVar3) * 2;
  } while (0 < param_2);
  return uVar2 & 0x7fffffff | uVar3;
}

