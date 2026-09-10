// Address: 005789d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005789d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_00405ef4(DAT_006d216c,param_2,param_3,param_3);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar5 = 0;
    do {
      uVar1 = *(undefined4 *)(DAT_006d216c + iVar5 * 0x20);
      iVar4 = 4;
      do {
        iVar3 = FUN_00579b98(uVar1);
        if (-1 < iVar3) {
          FUN_005796bc(uVar1,iVar3,2);
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

