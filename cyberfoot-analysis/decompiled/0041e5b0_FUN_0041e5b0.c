// Address: 0041e5b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0041e5b0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < *(uint *)(param_1 + 4)) {
    return -(uint)((*(byte *)(*(int *)(param_1 + 8) + ((int)param_2 >> 3)) >> (param_2 & 7) & 1) !=
                  0) & 1;
  }
  FUN_0040e42c(PTR_DAT_0041b56c,1,PTR_PTR_0066b5c8);
  uVar1 = FUN_00404250();
  return uVar1;
}

