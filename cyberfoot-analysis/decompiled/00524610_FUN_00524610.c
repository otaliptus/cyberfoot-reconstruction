// Address: 00524610
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_00524610(int *param_1,undefined4 *param_2,undefined4 param_3,uint param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (((cVar1 == '\0') && (*param_5 < param_5[2])) && (param_5[1] < param_5[3])) {
    iVar2 = FUN_0051aad8(param_1[0xb]);
    if (iVar2 == 1) {
      param_4 = CONCAT22((short)(~(uint)DAT_0052472c >> 0x10),
                         (ushort)~(uint)DAT_0052472c & (ushort)param_4);
    }
    piVar3 = (int *)FUN_00521524(PTR_PTR_00516510,1,param_2,param_4,param_5,param_3,param_1);
    FUN_0041e394(param_1[0xe],piVar3);
    piVar3[0x26] = param_1[0x1a];
    piVar3[0x27] = param_1[0x1b];
    piVar3[0x28] = param_1[0x1c];
    piVar3[0x29] = param_1[0x1d];
    piVar3[0x2a] = param_1[0x1e];
    piVar3[0x2b] = param_1[0x1f];
    piVar3[0x2c] = param_1[0x20];
    piVar3[0x2d] = param_1[0x21];
    piVar3[0x2e] = param_1[0x22];
    piVar3[0x2f] = param_1[0x23];
    if ((param_4 & 1) == 0) {
      (**(code **)(*piVar3 + 4))();
      piVar3 = (int *)0x0;
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
    }
    else {
      FUN_00426bf0(piVar3,(char)param_1[0x16]);
    }
  }
  else {
    piVar3 = (int *)0x0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
  }
  return piVar3;
}

