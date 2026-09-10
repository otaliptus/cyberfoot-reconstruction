// Address: 004d4790
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004d4790(uint param_1,int param_2,uint *param_3,int *param_4)

{
  *param_3 = *param_3 |
             (~(-1 << ((byte)param_2 & 0x1f)) & param_1 & 0xffff) <<
             ((' ' - (byte)param_2) - (char)*param_4 & 0x1f);
  *param_4 = *param_4 + param_2;
  return *param_4;
}

