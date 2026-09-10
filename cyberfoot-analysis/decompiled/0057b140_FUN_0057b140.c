// Address: 0057b140
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057b140(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0x1c) & 0x10) == 0) && ((*(byte *)(param_1 + 0x1c) & 8) == 0)) {
    *(double *)(param_1 + 0x238) = *(double *)(param_1 + 0x238) + (double)_DAT_0057b200;
    if (*(char *)(param_1 + 0x2a0) == '\0') {
      iVar1 = *(int *)(param_1 + 0x294) * 2 + *(int *)(param_1 + 0x48);
      if ((double)iVar1 < *(double *)(param_1 + 0x238)) {
        *(undefined4 *)(param_1 + 0x234) = 0;
        iVar1 = *(int *)(param_1 + 0x294) * -2;
        *(double *)(param_1 + 0x238) = (double)iVar1;
      }
    }
    else {
      iVar1 = param_3;
      if ((*(char *)(param_1 + 0x2a0) == '\x01') &&
         (iVar1 = *(int *)(param_1 + 0x294) * 2 + *(int *)(param_1 + 0x4c),
         (double)iVar1 < *(double *)(param_1 + 0x238))) {
        *(undefined4 *)(param_1 + 0x234) = 0;
        iVar1 = *(int *)(param_1 + 0x294) * -2;
        *(double *)(param_1 + 0x238) = (double)iVar1;
      }
    }
    FUN_0057aaa0(param_1,param_1,param_3,iVar1);
  }
  return;
}

