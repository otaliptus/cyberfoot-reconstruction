// Address: 00507364
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00507364(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int in_stack_00000004;
  undefined1 local_14 [12];
  int local_8;
  
  piVar6 = (int *)(in_stack_00000004 + -4);
  FUN_0050f004(*piVar6,local_14);
  iVar2 = FUN_005072fc();
  iVar2 = local_8 - iVar2;
  if ((0 < iVar2) && (iVar5 = *(int *)(*piVar6 + 0x4d8) + -1, -1 < iVar5)) {
    do {
      cVar1 = (**(code **)(*(int *)*piVar6 + 300))((int *)*piVar6,iVar5);
      if (cVar1 != '\0') {
        iVar3 = (**(code **)(*(int *)*piVar6 + 0x120))((int *)*piVar6,iVar5);
        iVar4 = FUN_0050f404(*piVar6,4);
        if (iVar2 < iVar3 + iVar4) {
          return;
        }
        FUN_004e7c2c(*(undefined4 *)(*piVar6 + 0x268),0xffffffff);
        iVar3 = (**(code **)(*(int *)*piVar6 + 0x120))((int *)*piVar6,iVar5);
        iVar4 = FUN_0050f404(*piVar6,4);
        iVar2 = iVar2 - (iVar3 + iVar4);
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
  }
  return;
}

