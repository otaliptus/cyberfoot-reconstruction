// Address: 0040bffc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0040bffc(ushort param_1,ushort param_2,ushort param_3,double *param_4,ushort param_5)

{
  undefined1 local_5;
  
  local_5 = 0;
  if ((((param_1 < 0x18) && (param_2 < 0x3c)) && (param_3 < 0x3c)) && (param_5 < 1000)) {
    *param_4 = (double)((float)(int)((uint)param_1 * 3600000 + (uint)param_2 * 60000 +
                                     (uint)param_3 * 1000 + (uint)param_5) / _DAT_0040c068);
    local_5 = 1;
  }
  return local_5;
}

