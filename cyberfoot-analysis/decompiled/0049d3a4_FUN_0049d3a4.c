// Address: 0049d3a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049d3a4(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = param_1[3];
  if (param_3 == 0) {
    piVar1 = (int *)param_1[8];
    *(undefined4 *)(*piVar1 + 0x14) = 0x28;
    (**(code **)*piVar1)();
  }
  iVar4 = iVar4 + param_3;
  uVar5 = (param_2 & (1 << ((byte)param_3 & 0x1f)) - 1U) << (0x18U - (char)iVar4 & 0x1f) |
          param_1[2];
  while( true ) {
    if (iVar4 < 8) {
      param_1[2] = uVar5;
      param_1[3] = iVar4;
      return 1;
    }
    puVar2 = (undefined1 *)*param_1;
    *param_1 = *param_1 + 1;
    *puVar2 = (char)(uVar5 >> 0x10);
    piVar1 = param_1 + 1;
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (iVar3 = FUN_0049d37c(param_1), iVar3 == 0)) break;
    if (((int)uVar5 >> 0x10 & 0xffU) == 0xff) {
      puVar2 = (undefined1 *)*param_1;
      *param_1 = *param_1 + 1;
      *puVar2 = 0;
      piVar1 = param_1 + 1;
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (iVar3 = FUN_0049d37c(param_1), iVar3 == 0)) {
        return 0;
      }
    }
    uVar5 = uVar5 << 8;
    iVar4 = iVar4 + -8;
  }
  return 0;
}

