// Address: 004f7dbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f7dbc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar4 = (int *)(param_4 + -4);
  iVar3 = param_1;
  while( true ) {
    iVar3 = iVar3 + 1;
    iVar1 = (**(code **)(*(int *)*piVar4 + 0x11c))();
    if (iVar1 <= iVar3) {
      return;
    }
    iVar1 = FUN_004f7890(*piVar4,iVar3);
    iVar1 = *(int *)(iVar1 + 0x14);
    iVar2 = FUN_004f7890(*piVar4,param_1);
    if (iVar1 <= *(int *)(iVar2 + 0x14)) break;
    iVar1 = FUN_004f7890(*piVar4,iVar3);
    if (*(char *)(iVar1 + 0x21) == '\0') {
      uVar5 = 0x4f7def;
      FUN_004f671c(*(undefined4 *)(*piVar4 + 0x598),iVar3,1);
      if (*(int *)(*piVar4 + 0x4f0) < iVar3) {
        *(int *)(*piVar4 + 0x4f0) = iVar3;
      }
      uVar6 = 1;
      iVar1 = FUN_004f7890(*piVar4,iVar3);
      FUN_004f86b4(*piVar4,iVar3,*(undefined4 *)(iVar1 + 0x1c),uVar5,uVar6);
    }
    iVar1 = FUN_004f7890(*piVar4,iVar3);
    if (*(char *)(iVar1 + 0xc) == '\0') {
      iVar1 = FUN_004f8bac(*piVar4,iVar3,1);
      iVar3 = iVar3 + iVar1;
    }
  }
  return;
}

