// Address: 00635fb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00635fb0(undefined4 param_1,int param_2,int param_3,char param_4,char param_5,int param_6)

{
  if (1 < param_2) {
    *(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + param_2 * 0x130) =
         (longlong)ROUND((float)param_6 * _DAT_0063605c);
    if (param_4 == '\0') {
      *PTR_DAT_0066acbc = 1;
    }
    else {
      *PTR_DAT_0066acbc = 0;
    }
    FUN_00650ec4(param_2,param_3,param_6);
    *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_3 * 0x2f8) =
         (longlong)
         ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_3 * 0x2f8) +
               (float)param_6 * _DAT_0063605c + _DAT_00636060);
    if (param_5 != '\0') {
      FUN_0064cbf0(*(undefined4 *)(PTR_DAT_0066ac78 + 8),0xc,0,param_6,param_3,param_2);
    }
  }
  return;
}

