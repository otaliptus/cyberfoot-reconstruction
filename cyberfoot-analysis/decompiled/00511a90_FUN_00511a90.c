// Address: 00511a90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00511a90(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int in_stack_00000004;
  undefined1 local_1c [4];
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  piVar6 = (int *)(in_stack_00000004 + -4);
  FUN_0050f004(*piVar6,local_1c);
  local_c = local_18;
  local_8 = 0;
  iVar5 = *(int *)(*piVar6 + 0x4d8);
  iVar2 = (**(code **)(*(int *)*piVar6 + 0x11c))();
  if (iVar5 <= iVar2 + -1) {
    iVar2 = ((iVar2 + -1) - iVar5) + 1;
    do {
      cVar1 = (**(code **)(*(int *)*piVar6 + 300))((int *)*piVar6,iVar5);
      if (cVar1 != '\0') {
        iVar3 = (**(code **)(*(int *)*piVar6 + 0x120))((int *)*piVar6,iVar5);
        iVar3 = iVar3 + local_c;
        iVar4 = FUN_0050f404(*piVar6,4);
        FUN_0050f004(*piVar6,local_1c);
        if (local_10 < iVar3 + iVar4) {
          return local_8;
        }
        local_8 = local_8 + 1;
        iVar3 = (**(code **)(*(int *)*piVar6 + 0x120))((int *)*piVar6,iVar5);
        iVar4 = FUN_0050f404(*piVar6,4);
        local_c = local_c + iVar3 + iVar4;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return local_8;
}

