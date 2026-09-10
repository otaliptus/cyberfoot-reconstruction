// Address: 00404b0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404b0c(undefined4 param_1,short *param_2)

{
  uint uVar1;
  short *psVar2;
  
  uVar1 = 0;
  psVar2 = param_2;
  if (param_2 != (short *)0x0) {
    for (; *psVar2 != 0; psVar2 = psVar2 + 4) {
      if (psVar2[1] == 0) {
LAB_00404b35:
        psVar2 = psVar2 + 1;
        break;
      }
      if (psVar2[2] == 0) {
LAB_00404b32:
        psVar2 = psVar2 + 1;
        goto LAB_00404b35;
      }
      if (psVar2[3] == 0) {
        psVar2 = psVar2 + 1;
        goto LAB_00404b32;
      }
    }
    uVar1 = (uint)((int)psVar2 - (int)param_2) >> 1;
  }
  FUN_00404a30(param_1,param_2,uVar1);
  return;
}

