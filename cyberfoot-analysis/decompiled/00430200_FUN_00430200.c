// Address: 00430200
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00430200(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (1 < *(int *)(iVar1 + 4)) {
    FUN_0043052c(param_1);
    if (*(char *)(iVar1 + 0x71) == '\0') {
      uVar2 = *(undefined4 *)(iVar1 + 0x10);
    }
    else {
      uVar2 = 0;
    }
    FUN_0042fe4c(param_1,*(undefined4 *)(iVar1 + 8),uVar2,iVar1 + 0x18);
    return;
  }
  if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 8) != *(int *)(iVar1 + 0x14))) {
    if (*(HGDIOBJ *)(iVar1 + 0x14) != (HGDIOBJ)0x0) {
      BVar3 = DeleteObject(*(HGDIOBJ *)(iVar1 + 0x14));
      if (BVar3 == 0) {
        FUN_0042b8f8();
      }
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  return;
}

