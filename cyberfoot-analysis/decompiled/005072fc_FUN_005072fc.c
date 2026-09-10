// Address: 005072fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005072fc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_stack_00000004;
  undefined1 local_14 [4];
  int local_10;
  int local_8;
  
  piVar5 = (int *)(in_stack_00000004 + -4);
  FUN_0050f004(*piVar5,local_14);
  iVar3 = *(int *)(*piVar5 + 0x4d8);
  iVar4 = local_10;
  while( true ) {
    iVar2 = (**(code **)(*(int *)*piVar5 + 0x11c))();
    if (iVar2 <= iVar3) {
      return iVar4;
    }
    FUN_0050f004(*piVar5,local_14);
    if (local_8 < iVar4) break;
    iVar2 = (**(code **)(*(int *)*piVar5 + 0x120))((int *)*piVar5,iVar3);
    iVar1 = FUN_0050f404(*piVar5,4);
    iVar4 = iVar4 + iVar2 + iVar1;
    iVar3 = iVar3 + 1;
  }
  return iVar4;
}

