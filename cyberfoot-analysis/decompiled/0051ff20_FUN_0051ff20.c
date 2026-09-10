// Address: 0051ff20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051ff20(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int in_stack_00000004;
  
  piVar5 = (int *)(in_stack_00000004 + -4);
  if (*(int *)(*(int *)(*piVar5 + 0x20) + 8) < 1) {
    iVar1 = FUN_0051aad8(*(undefined4 *)(*(int *)(*piVar5 + 4) + 0x2c));
    if (-1 < iVar1 + -1) {
      iVar4 = 0;
      do {
        iVar2 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar5 + 4) + 0x2c),iVar4);
        if (((iVar2 != *piVar5) &&
            (iVar2 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar5 + 4) + 0x2c),iVar4),
            *(char *)(iVar2 + 0x34) != '\0')) &&
           (iVar2 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar5 + 4) + 0x2c),iVar4),
           *(int *)(*(int *)(iVar2 + 0x20) + 8) == 0)) {
          iVar1 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar5 + 4) + 0x2c),iVar4);
          FUN_00520744(*(undefined4 *)(iVar1 + 0x38));
          return;
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    uVar3 = FUN_00524230(*(undefined4 *)(*piVar5 + 4));
    FUN_0051a454(uVar3,0);
  }
  else {
    FUN_0051a454(*(int *)(*piVar5 + 0x20),0);
  }
  return;
}

