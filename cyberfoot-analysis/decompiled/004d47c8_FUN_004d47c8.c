// Address: 004d47c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004d47c8(int param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_2 = *param_2 << ((byte)param_1 & 0x1f);
  *param_3 = *param_3 - param_1;
  return uVar1 >> (0x20 - (byte)param_1 & 0x1f);
}

