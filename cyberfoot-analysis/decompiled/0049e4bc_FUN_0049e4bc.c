// Address: 0049e4bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049e4bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (*(int *)(param_1 + 0x20) != 0)) &&
     (*(int *)(param_1 + 0x24) != 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 2;
    iVar1 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x18) < 0) {
      *(int *)(iVar1 + 0x18) = -*(int *)(iVar1 + 0x18);
    }
    if (*(int *)(iVar1 + 0x18) == 0) {
      uVar2 = 0x71;
    }
    else {
      uVar2 = 0x2a;
    }
    *(undefined4 *)(iVar1 + 4) = uVar2;
    if (*(int *)(iVar1 + 0x18) == 2) {
      uVar2 = FUN_004a428c(0,0,0);
    }
    else {
      uVar2 = FUN_0049de50(0,0,0);
    }
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    FUN_004a237c(iVar1);
    FUN_0049f2a8(iVar1);
    return 0;
  }
  return 0xfffffffe;
}

