// Address: 0049c140
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049c140(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (param_3 == 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    *(undefined4 *)(*piVar1 + 0x14) = 0x28;
    (**(code **)*piVar1)();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar3 = iVar3 + param_3;
    uVar4 = (param_2 & (1 << ((byte)param_3 & 0x1f)) - 1U) << (0x18U - (char)iVar3 & 0x1f) |
            *(uint *)(param_1 + 0x18);
    for (; 7 < iVar3; iVar3 = iVar3 + -8) {
      puVar2 = *(undefined1 **)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *puVar2 = (char)(uVar4 >> 0x10);
      piVar1 = (int *)(param_1 + 0x14);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_0049c110(param_1);
      }
      if (((int)uVar4 >> 0x10 & 0xffU) == 0xff) {
        puVar2 = *(undefined1 **)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *puVar2 = 0;
        piVar1 = (int *)(param_1 + 0x14);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_0049c110(param_1);
        }
      }
      uVar4 = uVar4 << 8;
    }
    *(uint *)(param_1 + 0x18) = uVar4;
    *(int *)(param_1 + 0x1c) = iVar3;
  }
  return;
}

